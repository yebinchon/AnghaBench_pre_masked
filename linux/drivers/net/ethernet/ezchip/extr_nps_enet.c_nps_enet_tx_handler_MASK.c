
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nps_enet_priv {int * tx_skb; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct nps_enet_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nps_enet_priv*) ;
 int FUNC_5 (struct nps_enet_priv*,int ) ;
 int FUNC_6 (struct nps_enet_priv*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5)
{
 struct nps_enet_priv *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = FUNC_5(VAR_6, VAR_0);
 u32 VAR_8 = (VAR_7 & VAR_1) >> VAR_2;
 u32 VAR_9 = (VAR_7 & VAR_3) >> VAR_4;


 if (!FUNC_4(VAR_6))
  return;


 FUNC_6(VAR_6, VAR_0, 0);


 if (FUNC_7(VAR_8)) {
  VAR_5->stats.tx_errors++;
 } else {
  VAR_5->stats.tx_packets++;
  VAR_5->stats.tx_bytes += VAR_9;
 }

 FUNC_0(VAR_6->tx_skb);
 VAR_6->tx_skb = ((void*)0);

 if (FUNC_2(VAR_5))
  FUNC_3(VAR_5);
}
