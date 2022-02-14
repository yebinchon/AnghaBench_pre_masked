
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int ge_mac_cfg_2_value; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nps_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nps_enet_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8)
{
 struct nps_enet_priv *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10 = VAR_9->ge_mac_cfg_2_value;

 if (VAR_8->flags & VAR_4) {
  VAR_10 = (VAR_10 & ~VAR_0)
    | VAR_5 << VAR_1;
  VAR_10 = (VAR_10 & ~VAR_2)
    | VAR_5 << VAR_3;

 } else {
  VAR_10 = (VAR_10 & ~VAR_0)
    | VAR_6 << VAR_1;
  VAR_10 = (VAR_10 & ~VAR_2)
    | VAR_6 << VAR_3;
 }

 FUNC_1(VAR_9, VAR_7, VAR_10);
}
