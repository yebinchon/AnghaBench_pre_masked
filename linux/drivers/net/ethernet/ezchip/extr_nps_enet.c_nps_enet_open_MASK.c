
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_enet_priv {int ge_mac_cfg_3_value; int napi; int irq; scalar_t__ ge_mac_cfg_2_value; int * tx_skb; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct nps_enet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static s32 FUNC_7(struct net_device *VAR_5)
{
 struct nps_enet_priv *VAR_6 = FUNC_1(VAR_5);
 s32 VAR_7;


 VAR_6->tx_skb = ((void*)0);
 VAR_6->ge_mac_cfg_2_value = 0;
 VAR_6->ge_mac_cfg_3_value = 0;


 VAR_6->ge_mac_cfg_3_value |=
   VAR_3 << VAR_1;

 VAR_6->ge_mac_cfg_3_value |=
   VAR_2 << VAR_0;


 FUNC_3(VAR_5);


 VAR_7 = FUNC_6(VAR_6->irq, VAR_4,
     0, "enet-rx-tx", VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6->napi);


 FUNC_5(VAR_5);
 FUNC_4(VAR_5);

 FUNC_2(VAR_5);

 return 0;
}
