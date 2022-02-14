
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_wdog {TYPE_1__* syscfg; int regmap; int warm_reset; } ;
struct TYPE_2__ {int enable_mask; scalar_t__ enable_reg; int reset_type_mask; scalar_t__ reset_type_reg; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct st_wdog *VAR_0, bool VAR_1)
{

 if (VAR_0->syscfg->reset_type_reg)
  FUNC_0(VAR_0->regmap,
       VAR_0->syscfg->reset_type_reg,
       VAR_0->syscfg->reset_type_mask,
       VAR_0->warm_reset);


 FUNC_0(VAR_0->regmap,
      VAR_0->syscfg->enable_reg,
      VAR_0->syscfg->enable_mask,
      VAR_1 ? 0 : VAR_0->syscfg->enable_mask);
}
