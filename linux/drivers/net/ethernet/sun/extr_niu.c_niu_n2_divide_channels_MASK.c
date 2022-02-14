
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {int num_ports; int* rxchan_per_port; int* txchan_per_port; int index; } ;


 int FUNC_0 (char*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct niu_parent *VAR_0)
{
 int VAR_1 = VAR_0->num_ports;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_0->rxchan_per_port[VAR_2] = (16 / VAR_1);
  VAR_0->txchan_per_port[VAR_2] = (16 / VAR_1);

  FUNC_0("niu%d: Port %u [%u RX chans] [%u TX chans]\n",
   VAR_0->index, VAR_2,
   VAR_0->rxchan_per_port[VAR_2],
   VAR_0->txchan_per_port[VAR_2]);
 }
}
