
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {scalar_t__ phydev; } ;
struct fixed_phy_status {int link; } ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 struct bcmgenet_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct fixed_phy_status *VAR_3)
{
 struct bcmgenet_priv *VAR_4;
 u32 VAR_5;

 if (VAR_2 && VAR_2->phydev && VAR_3) {
  VAR_4 = FUNC_1(VAR_2);
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  VAR_3->link = !!(VAR_5 & VAR_0);
 }

 return 0;
}
