
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_pinctrl {void* pinctrl; void* state_idle; void* state_default; } ;
struct fimc_md {struct fimc_pinctrl pinctl; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*) ;
 void* FUNC_3 (void*,int ) ;

__attribute__((used)) static int FUNC_4(struct fimc_md *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 struct fimc_pinctrl *VAR_4 = &VAR_2->pinctl;

 VAR_4->pinctrl = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4->pinctrl))
  return FUNC_1(VAR_4->pinctrl);

 VAR_4->state_default = FUNC_3(VAR_4->pinctrl,
     VAR_0);
 if (FUNC_0(VAR_4->state_default))
  return FUNC_1(VAR_4->state_default);

 VAR_4->state_idle = FUNC_3(VAR_4->pinctrl,
     VAR_1);
 return 0;
}
