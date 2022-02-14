
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_ops {scalar_t__ strict; } ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct pin_desc {int gpio_owner; scalar_t__ mux_usecount; } ;
struct TYPE_2__ {struct pinmux_ops* pmxops; } ;


 struct pin_desc* FUNC_0 (struct pinctrl_dev*,unsigned int) ;

bool FUNC_1(struct pinctrl_dev *VAR_0, unsigned VAR_1)
{
 struct pin_desc *VAR_2 = FUNC_0(VAR_0, VAR_1);
 const struct pinmux_ops *VAR_3 = VAR_0->desc->pmxops;


 if (!VAR_2)
  return 1;

 if (VAR_3->strict && VAR_2->mux_usecount)
  return 0;

 return !(VAR_3->strict && !!VAR_2->gpio_owner);
}
