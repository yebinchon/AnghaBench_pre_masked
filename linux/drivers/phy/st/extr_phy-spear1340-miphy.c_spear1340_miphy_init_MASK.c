
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear1340_miphy_priv {scalar_t__ mode; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct spear1340_miphy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (struct spear1340_miphy_priv*) ;
 int FUNC_2 (struct spear1340_miphy_priv*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_2)
{
 struct spear1340_miphy_priv *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 if (VAR_3->mode == VAR_1)
  VAR_4 = FUNC_2(VAR_3);
 else if (VAR_3->mode == VAR_0)
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
