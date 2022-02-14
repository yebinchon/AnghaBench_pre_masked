
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp3943_reg_cfg {int shift; int mask; int reg; } ;
struct lp3943_pwm_map {int num_outputs; int* output; } ;
struct lp3943_pwm {struct lp3943* lp3943; } ;
struct lp3943 {struct lp3943_reg_cfg* mux_cfg; } ;


 int FUNC_0 (struct lp3943*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct lp3943_pwm *VAR_0,
          struct lp3943_pwm_map *VAR_1,
          u8 VAR_2)
{
 struct lp3943 *VAR_3 = VAR_0->lp3943;
 const struct lp3943_reg_cfg *VAR_4 = VAR_3->mux_cfg;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_outputs; VAR_5++) {
  VAR_6 = VAR_1->output[VAR_5];
  VAR_7 = FUNC_0(VAR_3, VAR_4[VAR_6].reg,
      VAR_4[VAR_6].mask,
      VAR_2 << VAR_4[VAR_6].shift);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
