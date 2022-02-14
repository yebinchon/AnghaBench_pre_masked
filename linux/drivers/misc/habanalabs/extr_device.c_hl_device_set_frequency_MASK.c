
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {scalar_t__ pm_mng_profile; int curr_pll_profile; TYPE_1__* asic_funcs; int dev; } ;
typedef enum hl_pll_frequency { ____Placeholder_hl_pll_frequency } hl_pll_frequency ;
struct TYPE_2__ {int (* set_pll_profile ) (struct hl_device*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct hl_device*,int) ;

int FUNC_2(struct hl_device *VAR_2, enum hl_pll_frequency VAR_3)
{
 if ((VAR_2->pm_mng_profile == VAR_1) ||
   (VAR_2->curr_pll_profile == VAR_3))
  return 0;

 FUNC_0(VAR_2->dev, "Changing device frequency to %s\n",
  VAR_3 == VAR_0 ? "high" : "low");

 VAR_2->asic_funcs->set_pll_profile(VAR_2, VAR_3);

 VAR_2->curr_pll_profile = VAR_3;

 return 1;
}
