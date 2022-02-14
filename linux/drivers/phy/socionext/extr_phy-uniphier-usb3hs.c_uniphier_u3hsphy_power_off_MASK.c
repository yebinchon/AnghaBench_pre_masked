
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_u3hsphy_priv {int clk_ext; int clk; int rst; scalar_t__ vbus; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uniphier_u3hsphy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct uniphier_u3hsphy_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->vbus)
  FUNC_2(VAR_1->vbus);

 FUNC_3(VAR_1->rst);
 FUNC_0(VAR_1->clk);
 FUNC_0(VAR_1->clk_ext);

 return 0;
}
