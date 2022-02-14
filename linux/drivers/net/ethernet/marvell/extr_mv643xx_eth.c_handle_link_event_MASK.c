
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_queue {int tx_ring_size; } ;
struct net_device {int dummy; } ;
struct mv643xx_eth_private {int txq_count; struct tx_queue* txq; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mv643xx_eth_private*,int ) ;
 int FUNC_5 (struct tx_queue*,int ,int) ;
 int FUNC_6 (struct tx_queue*) ;

__attribute__((used)) static void FUNC_7(struct mv643xx_eth_private *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 u32 VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_5, VAR_4);
 if (!(VAR_7 & VAR_2)) {
  if (FUNC_2(VAR_6)) {
   int VAR_11;

   FUNC_0(VAR_6, "link down\n");

   FUNC_1(VAR_6);

   for (VAR_11 = 0; VAR_11 < VAR_5->txq_count; VAR_11++) {
    struct tx_queue *VAR_12 = VAR_5->txq + VAR_11;

    FUNC_5(VAR_12, VAR_12->tx_ring_size, 1);
    FUNC_6(VAR_12);
   }
  }
  return;
 }

 switch (VAR_7 & VAR_3) {
 case 130:
  VAR_8 = 10;
  break;
 case 129:
  VAR_8 = 100;
  break;
 case 128:
  VAR_8 = 1000;
  break;
 default:
  VAR_8 = -1;
  break;
 }
 VAR_9 = (VAR_7 & VAR_1) ? 1 : 0;
 VAR_10 = (VAR_7 & VAR_0) ? 1 : 0;

 FUNC_0(VAR_6, "link up, %d Mb/s, %s duplex, flow control %sabled\n",
      VAR_8, VAR_9 ? "full" : "half", VAR_10 ? "en" : "dis");

 if (!FUNC_2(VAR_6))
  FUNC_3(VAR_6);
}
