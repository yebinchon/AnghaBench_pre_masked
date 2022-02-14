
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmfx_pinctrl {int stmfx; int gpio_valid_mask; struct pinctrl_dev* pctl_dev; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pinctrl_gpio_range* FUNC_1 (struct pinctrl_dev*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct stmfx_pinctrl *VAR_3)
{
 struct pinctrl_gpio_range *VAR_4;
 struct pinctrl_dev *VAR_5 = VAR_3->pctl_dev;
 u32 VAR_6 = VAR_2;

 VAR_3->gpio_valid_mask = FUNC_0(15, 0);

 VAR_4 = FUNC_1(VAR_5, 16);
 if (VAR_4) {
  VAR_6 |= VAR_1;
  VAR_3->gpio_valid_mask |= FUNC_0(19, 16);
 }

 VAR_4 = FUNC_1(VAR_5, 20);
 if (VAR_4) {
  VAR_6 |= VAR_0;
  VAR_3->gpio_valid_mask |= FUNC_0(23, 20);
 }

 return FUNC_2(VAR_3->stmfx, VAR_6);
}
