
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_pinctrl {int dev; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ reserved_gpios; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct msm_pinctrl *VAR_0)
{
 if (VAR_0->soc->reserved_gpios)
  return 1;

 return FUNC_0(VAR_0->dev, "gpios") > 0;
}
