
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pinctrl_priv {TYPE_1__* socdata; } ;
struct uniphier_pinctrl_group {int num_pins; int * muxvals; int * pins; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {struct uniphier_pinctrl_group* groups; } ;


 struct uniphier_pinctrl_priv* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
    unsigned VAR_1,
    unsigned VAR_2)
{
 struct uniphier_pinctrl_priv *VAR_3 = FUNC_0(VAR_0);
 const struct uniphier_pinctrl_group *VAR_4 =
     &VAR_3->socdata->groups[VAR_2];
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_pins; VAR_5++) {
  VAR_6 = FUNC_1(VAR_0, VAR_4->pins[VAR_5],
            VAR_4->muxvals[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
