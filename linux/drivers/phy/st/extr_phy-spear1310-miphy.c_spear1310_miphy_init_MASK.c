
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear1310_miphy_priv {scalar_t__ mode; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct spear1310_miphy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (struct spear1310_miphy_priv*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_1)
{
 struct spear1310_miphy_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 if (VAR_2->mode == VAR_0)
  VAR_3 = FUNC_1(VAR_2);

 return VAR_3;
}
