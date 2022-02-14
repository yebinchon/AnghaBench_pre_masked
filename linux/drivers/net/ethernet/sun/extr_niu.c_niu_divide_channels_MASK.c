
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {int num_ports; int* rxchan_per_port; int* txchan_per_port; int index; int port_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct niu_parent *VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3->num_ports;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (!VAR_4 || !VAR_5) {
  VAR_7 = VAR_8 =
   (VAR_0 / VAR_6);
  VAR_9 = VAR_10 =
   (VAR_1 / VAR_6);
 } else {
  VAR_8 = VAR_0 / 8;
  VAR_7 = (VAR_0 -
        (VAR_8 * VAR_5)) /
   VAR_4;

  VAR_10 = VAR_1 / 6;
  VAR_9 = (VAR_1 -
        (VAR_10 * VAR_5)) /
   VAR_4;
 }

 VAR_12 = VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  int VAR_14 = FUNC_0(VAR_3->port_phy, VAR_11);

  if (VAR_14 == VAR_2) {
   VAR_3->rxchan_per_port[VAR_11] = VAR_7;
   VAR_3->txchan_per_port[VAR_11] = VAR_9;
  } else {
   VAR_3->rxchan_per_port[VAR_11] = VAR_8;
   VAR_3->txchan_per_port[VAR_11] = VAR_10;
  }
  FUNC_2("niu%d: Port %u [%u RX chans] [%u TX chans]\n",
   VAR_3->index, VAR_11,
   VAR_3->rxchan_per_port[VAR_11],
   VAR_3->txchan_per_port[VAR_11]);
  VAR_12 += VAR_3->rxchan_per_port[VAR_11];
  VAR_13 += VAR_3->txchan_per_port[VAR_11];
 }

 if (VAR_12 > VAR_0) {
  FUNC_1("niu%d: Too many RX channels (%d), resetting to one per port\n",
         VAR_3->index, VAR_12);
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   VAR_3->rxchan_per_port[VAR_11] = 1;
 }
 if (VAR_13 > VAR_1) {
  FUNC_1("niu%d: Too many TX channels (%d), resetting to one per port\n",
         VAR_3->index, VAR_13);
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   VAR_3->txchan_per_port[VAR_11] = 1;
 }
 if (VAR_12 < VAR_0 || VAR_13 < VAR_1) {
  FUNC_3("niu%d: Driver bug, wasted channels, RX[%d] TX[%d]\n",
   VAR_3->index, VAR_12, VAR_13);
 }
}
