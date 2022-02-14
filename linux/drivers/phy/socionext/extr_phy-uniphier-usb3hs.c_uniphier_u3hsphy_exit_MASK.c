
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_u3hsphy_priv {int clk_parent; int rst_parent; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uniphier_u3hsphy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct uniphier_u3hsphy_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->rst_parent);
 FUNC_0(VAR_1->clk_parent);

 return 0;
}
