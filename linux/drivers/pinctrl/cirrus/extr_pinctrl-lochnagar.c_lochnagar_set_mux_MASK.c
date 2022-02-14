
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct lochnagar_pin_priv {int dev; TYPE_1__* pins; struct lochnagar_group* groups; struct lochnagar_func* funcs; } ;
struct lochnagar_pin {int name; } ;
struct lochnagar_group {size_t* pins; int name; } ;
struct lochnagar_func {int type; int op; int name; } ;
struct TYPE_2__ {struct lochnagar_pin* drv_data; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct lochnagar_pin_priv*,struct lochnagar_group const*,int ) ;
 int FUNC_2 (struct lochnagar_pin_priv*,struct lochnagar_pin const*,int ) ;
 struct lochnagar_pin_priv* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 struct lochnagar_pin_priv *VAR_4 = FUNC_3(VAR_1);
 const struct lochnagar_func *VAR_5 = &VAR_4->funcs[VAR_2];
 const struct lochnagar_group *VAR_6 = &VAR_4->groups[VAR_3];
 const struct lochnagar_pin *VAR_7;

 switch (VAR_5->type) {
 case 129:
  FUNC_0(VAR_4->dev, "Set group %s to %s\n",
   VAR_6->name, VAR_5->name);

  return FUNC_1(VAR_4, VAR_6, VAR_5->op);
 case 128:
  VAR_7 = VAR_4->pins[*VAR_6->pins].drv_data;

  FUNC_0(VAR_4->dev, "Set pin %s to %s\n", VAR_7->name, VAR_5->name);

  return FUNC_2(VAR_4, VAR_7, VAR_5->op);
 default:
  return -VAR_0;
 }
}
