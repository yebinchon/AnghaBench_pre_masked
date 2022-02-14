
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_u3ssphy_priv {int clk_parent; int clk_parent_gio; int rst_parent; TYPE_1__* data; int rst_parent_gio; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {int nparams; int * param; scalar_t__ is_legacy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uniphier_u3ssphy_priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uniphier_u3ssphy_priv*,int *) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_0)
{
 struct uniphier_u3ssphy_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_1->clk_parent);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1->clk_parent_gio);
 if (VAR_3)
  goto out_clk_disable;

 VAR_3 = FUNC_4(VAR_1->rst_parent);
 if (VAR_3)
  goto out_clk_gio_disable;

 VAR_3 = FUNC_4(VAR_1->rst_parent_gio);
 if (VAR_3)
  goto out_rst_assert;

 if (VAR_1->data->is_legacy)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->data->nparams; VAR_2++)
  FUNC_5(VAR_1, &VAR_1->data->param[VAR_2]);

 return 0;

out_rst_assert:
 FUNC_3(VAR_1->rst_parent);
out_clk_gio_disable:
 FUNC_0(VAR_1->clk_parent_gio);
out_clk_disable:
 FUNC_0(VAR_1->clk_parent);

 return VAR_3;
}
