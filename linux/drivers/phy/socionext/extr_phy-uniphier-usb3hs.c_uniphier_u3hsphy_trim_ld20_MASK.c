
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_u3hsphy_trim_param {int hs_i; int sel_t; int rterm; } ;
struct uniphier_u3hsphy_priv {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct uniphier_u3hsphy_priv *VAR_3,
           u32 *VAR_4,
           struct uniphier_u3hsphy_trim_param *VAR_5)
{
 *VAR_4 &= ~VAR_1;
 *VAR_4 |= FUNC_0(VAR_1, VAR_5->rterm);

 *VAR_4 &= ~VAR_2;
 *VAR_4 |= FUNC_0(VAR_2, VAR_5->sel_t);

 *VAR_4 &= ~VAR_0;
 *VAR_4 |= FUNC_0(VAR_0, VAR_5->hs_i);
}
