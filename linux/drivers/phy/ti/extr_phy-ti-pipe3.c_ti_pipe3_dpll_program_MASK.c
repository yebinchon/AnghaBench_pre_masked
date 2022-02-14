
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pipe3 {int pll_ctrl_base; } ;
struct pipe3_dpll_params {int n; int freq; int m; int mf; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ti_pipe3*) ;
 struct pipe3_dpll_params* FUNC_1 (struct ti_pipe3*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ti_pipe3 *VAR_17)
{
 u32 VAR_18;
 struct pipe3_dpll_params *VAR_19;

 VAR_19 = FUNC_1(VAR_17);
 if (!VAR_19)
  return -VAR_0;

 VAR_18 = FUNC_2(VAR_17->pll_ctrl_base, VAR_1);
 VAR_18 &= ~VAR_10;
 VAR_18 |= VAR_19->n << VAR_11;
 FUNC_3(VAR_17->pll_ctrl_base, VAR_1, VAR_18);

 VAR_18 = FUNC_2(VAR_17->pll_ctrl_base, VAR_2);
 VAR_18 &= ~VAR_14;
 VAR_18 |= VAR_19->freq << VAR_15;
 FUNC_3(VAR_17->pll_ctrl_base, VAR_2, VAR_18);

 VAR_18 = FUNC_2(VAR_17->pll_ctrl_base, VAR_1);
 VAR_18 &= ~VAR_8;
 VAR_18 |= VAR_19->m << VAR_9;
 FUNC_3(VAR_17->pll_ctrl_base, VAR_1, VAR_18);

 VAR_18 = FUNC_2(VAR_17->pll_ctrl_base, VAR_4);
 VAR_18 &= ~VAR_6;
 VAR_18 |= VAR_19->mf << VAR_7;
 FUNC_3(VAR_17->pll_ctrl_base, VAR_4, VAR_18);

 VAR_18 = FUNC_2(VAR_17->pll_ctrl_base, VAR_3);
 VAR_18 &= ~VAR_12;
 VAR_18 |= VAR_19->sd << VAR_13;
 FUNC_3(VAR_17->pll_ctrl_base, VAR_3, VAR_18);

 FUNC_3(VAR_17->pll_ctrl_base, VAR_5, VAR_16);

 return FUNC_0(VAR_17);
}
