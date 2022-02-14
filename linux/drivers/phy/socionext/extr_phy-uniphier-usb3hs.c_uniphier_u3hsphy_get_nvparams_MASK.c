
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_u3hsphy_trim_param {int hs_i; int sel_t; int rterm; } ;
struct uniphier_u3hsphy_priv {int dummy; } ;


 int FUNC_0 (struct uniphier_u3hsphy_priv*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct uniphier_u3hsphy_priv *VAR_0,
      struct uniphier_u3hsphy_trim_param *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "rterm", &VAR_1->rterm);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, "sel_t", &VAR_1->sel_t);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, "hs_i", &VAR_1->hs_i);
 if (VAR_2)
  return VAR_2;

 return 0;
}
