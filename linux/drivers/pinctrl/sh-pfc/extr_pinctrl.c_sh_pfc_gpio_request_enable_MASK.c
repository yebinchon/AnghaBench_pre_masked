
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_pinctrl {struct sh_pfc_pin_config* configs; struct sh_pfc* pfc; } ;
struct sh_pfc_pin_config {int gpio_enabled; } ;
struct sh_pfc_pin {int enum_id; } ;
struct sh_pfc {int lock; TYPE_1__* info; int gpio; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {struct sh_pfc_pin* pins; } ;


 int VAR_0 ;
 struct sh_pfc_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct sh_pfc*,int ,int ) ;
 int FUNC_2 (struct sh_pfc*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
          struct pinctrl_gpio_range *VAR_2,
          unsigned VAR_3)
{
 struct sh_pfc_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct sh_pfc *VAR_5 = VAR_4->pfc;
 int VAR_6 = FUNC_2(VAR_5, VAR_3);
 struct sh_pfc_pin_config *VAR_7 = &VAR_4->configs[VAR_6];
 unsigned long VAR_8;
 int VAR_9;

 FUNC_3(&VAR_5->lock, VAR_8);

 if (!VAR_5->gpio) {



  const struct sh_pfc_pin *VAR_10 = &VAR_5->info->pins[VAR_6];

  VAR_9 = FUNC_1(VAR_5, VAR_10->enum_id, VAR_0);
  if (VAR_9 < 0)
   goto done;
 }

 VAR_7->gpio_enabled = 1;

 VAR_9 = 0;

done:
 FUNC_4(&VAR_5->lock, VAR_8);

 return VAR_9;
}
