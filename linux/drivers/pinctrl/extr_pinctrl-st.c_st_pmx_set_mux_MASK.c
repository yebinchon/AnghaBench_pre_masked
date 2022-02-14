
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_pio_control {int dummy; } ;
struct st_pinctrl {TYPE_1__* groups; } ;
struct st_pinconf {int altfunc; int pin; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int npins; struct st_pinconf* pin_conf; } ;


 struct st_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct st_pio_control* FUNC_1 (struct pinctrl_dev*,int ) ;
 int FUNC_2 (struct st_pio_control*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0, unsigned VAR_1,
   unsigned VAR_2)
{
 struct st_pinctrl *VAR_3 = FUNC_0(VAR_0);
 struct st_pinconf *VAR_4 = VAR_3->groups[VAR_2].pin_conf;
 struct st_pio_control *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->groups[VAR_2].npins; VAR_6++) {
  VAR_5 = FUNC_1(VAR_0, VAR_4[VAR_6].pin);
  FUNC_2(VAR_5, VAR_4[VAR_6].pin, VAR_4[VAR_6].altfunc);
 }

 return 0;
}
