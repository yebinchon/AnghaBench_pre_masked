
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_ops {int (* free ) (struct pinctrl_dev*,int) ;int (* gpio_disable_free ) (struct pinctrl_dev*,struct pinctrl_gpio_range*,int) ;} ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int owner; int dev; TYPE_1__* desc; } ;
struct pin_desc {char* gpio_owner; char* mux_owner; int * mux_setting; scalar_t__ mux_usecount; } ;
struct TYPE_2__ {struct pinmux_ops* pmxops; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct pin_desc* FUNC_3 (struct pinctrl_dev*,int) ;
 int FUNC_4 (struct pinctrl_dev*,struct pinctrl_gpio_range*,int) ;
 int FUNC_5 (struct pinctrl_dev*,int) ;

__attribute__((used)) static const char *FUNC_6(struct pinctrl_dev *VAR_0, int VAR_1,
       struct pinctrl_gpio_range *VAR_2)
{
 const struct pinmux_ops *VAR_3 = VAR_0->desc->pmxops;
 struct pin_desc *VAR_4;
 const char *VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0->dev,
   "pin is not registered so it cannot be freed\n");
  return ((void*)0);
 }

 if (!VAR_2) {



  if (FUNC_0(!VAR_4->mux_usecount))
   return ((void*)0);
  VAR_4->mux_usecount--;
  if (VAR_4->mux_usecount)
   return ((void*)0);
 }





 if (VAR_2 && VAR_3->gpio_disable_free)
  VAR_3->gpio_disable_free(VAR_0, VAR_2, VAR_1);
 else if (VAR_3->free)
  VAR_3->free(VAR_0, VAR_1);

 if (VAR_2) {
  VAR_5 = VAR_4->gpio_owner;
  VAR_4->gpio_owner = ((void*)0);
 } else {
  VAR_5 = VAR_4->mux_owner;
  VAR_4->mux_owner = ((void*)0);
  VAR_4->mux_setting = ((void*)0);
 }

 FUNC_2(VAR_0->owner);

 return VAR_5;
}
