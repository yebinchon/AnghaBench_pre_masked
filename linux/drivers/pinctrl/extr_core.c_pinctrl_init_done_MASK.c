
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct dev_pin_info* pins; } ;
struct dev_pin_info {scalar_t__ init_state; scalar_t__ default_state; TYPE_1__* p; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

int FUNC_3(struct device *VAR_0)
{
 struct dev_pin_info *VAR_1 = VAR_0->pins;
 int VAR_2;

 if (!VAR_1)
  return 0;

 if (FUNC_0(VAR_1->init_state))
  return 0;

 if (VAR_1->p->state != VAR_1->init_state)
  return 0;

 if (FUNC_0(VAR_1->default_state))
  return 0;

 VAR_2 = FUNC_2(VAR_1->p, VAR_1->default_state);
 if (VAR_2)
  FUNC_1(VAR_0, "failed to activate default pinctrl state\n");

 return VAR_2;
}
