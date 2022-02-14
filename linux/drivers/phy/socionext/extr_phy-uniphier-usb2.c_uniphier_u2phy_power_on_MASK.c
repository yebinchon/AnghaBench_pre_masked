
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_u2phy_priv {scalar_t__ vbus; } ;
struct phy {int dummy; } ;


 struct uniphier_u2phy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct uniphier_u2phy_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->vbus)
  VAR_2 = FUNC_1(VAR_1->vbus);

 return VAR_2;
}
