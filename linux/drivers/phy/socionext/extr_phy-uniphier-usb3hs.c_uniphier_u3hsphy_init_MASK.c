
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct uniphier_u3hsphy_priv {int clk_parent; int rst_parent; TYPE_1__* data; scalar_t__ base; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {int nparams; int * param; scalar_t__ config1; scalar_t__ config0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct uniphier_u3hsphy_priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uniphier_u3hsphy_priv*,int *) ;
 int FUNC_6 (struct uniphier_u3hsphy_priv*,scalar_t__*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_2)
{
 struct uniphier_u3hsphy_priv *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_3->clk_parent);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_3->rst_parent);
 if (VAR_7)
  goto out_clk_disable;

 if (!VAR_3->data->config0 && !VAR_3->data->config1)
  return 0;

 VAR_4 = VAR_3->data->config0;
 VAR_5 = VAR_3->data->config1;

 VAR_7 = FUNC_6(VAR_3, &VAR_4);
 if (VAR_7)
  goto out_rst_assert;

 FUNC_7(VAR_4, VAR_3->base + VAR_0);
 FUNC_7(VAR_5, VAR_3->base + VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3->data->nparams; VAR_6++)
  FUNC_5(VAR_3, &VAR_3->data->param[VAR_6]);

 return 0;

out_rst_assert:
 FUNC_3(VAR_3->rst_parent);
out_clk_disable:
 FUNC_0(VAR_3->clk_parent);

 return VAR_7;
}
