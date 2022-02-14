
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_pinctrl {TYPE_2__* groups; TYPE_1__* functions; int dev; } ;
struct rockchip_pin_config {int func; } ;
struct rockchip_pin_bank {scalar_t__ pin_base; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {unsigned int* pins; int npins; int name; struct rockchip_pin_config* data; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 struct rockchip_pin_bank* FUNC_1 (struct rockchip_pinctrl*,unsigned int const) ;
 struct rockchip_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct rockchip_pin_bank*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0, unsigned VAR_1,
       unsigned VAR_2)
{
 struct rockchip_pinctrl *VAR_3 = FUNC_2(VAR_0);
 const unsigned int *VAR_4 = VAR_3->groups[VAR_2].pins;
 const struct rockchip_pin_config *VAR_5 = VAR_3->groups[VAR_2].data;
 struct rockchip_pin_bank *VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_0(VAR_3->dev, "enable function %s group %s\n",
  VAR_3->functions[VAR_1].name, VAR_3->groups[VAR_2].name);





 for (VAR_7 = 0; VAR_7 < VAR_3->groups[VAR_2].npins; VAR_7++) {
  VAR_6 = FUNC_1(VAR_3, VAR_4[VAR_7]);
  VAR_8 = FUNC_3(VAR_6, VAR_4[VAR_7] - VAR_6->pin_base,
           VAR_5[VAR_7].func);
  if (VAR_8)
   break;
 }

 if (VAR_8) {

  for (VAR_7--; VAR_7 >= 0; VAR_7--)
   FUNC_3(VAR_6, VAR_4[VAR_7] - VAR_6->pin_base, 0);

  return VAR_8;
 }

 return 0;
}
