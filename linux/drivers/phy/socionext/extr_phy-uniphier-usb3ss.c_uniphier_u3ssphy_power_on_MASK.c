
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_u3ssphy_priv {int clk_ext; int clk; int rst; scalar_t__ vbus; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uniphier_u3ssphy_priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_0)
{
 struct uniphier_u3ssphy_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_ext);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2)
  goto out_clk_ext_disable;

 VAR_2 = FUNC_5(VAR_1->rst);
 if (VAR_2)
  goto out_clk_disable;

 if (VAR_1->vbus) {
  VAR_2 = FUNC_3(VAR_1->vbus);
  if (VAR_2)
   goto out_rst_assert;
 }

 return 0;

out_rst_assert:
 FUNC_4(VAR_1->rst);
out_clk_disable:
 FUNC_0(VAR_1->clk);
out_clk_ext_disable:
 FUNC_0(VAR_1->clk_ext);

 return VAR_2;
}
