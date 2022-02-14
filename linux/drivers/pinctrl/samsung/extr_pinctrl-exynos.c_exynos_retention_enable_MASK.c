
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {TYPE_1__* retention_ctrl; } ;
struct TYPE_2__ {scalar_t__ refcnt; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct samsung_pinctrl_drv_data *VAR_0)
{
 if (VAR_0->retention_ctrl->refcnt)
  FUNC_0(VAR_0->retention_ctrl->refcnt);
}
