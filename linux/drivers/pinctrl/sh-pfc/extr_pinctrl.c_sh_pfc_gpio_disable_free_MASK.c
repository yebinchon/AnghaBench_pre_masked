
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc_pinctrl {struct sh_pfc_pin_config* configs; struct sh_pfc* pfc; } ;
struct sh_pfc_pin_config {int gpio_enabled; int mux_mark; scalar_t__ mux_set; } ;
struct sh_pfc {int lock; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct sh_pfc_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct sh_pfc*,int ,int ) ;
 int FUNC_2 (struct sh_pfc*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_1,
         struct pinctrl_gpio_range *VAR_2,
         unsigned VAR_3)
{
 struct sh_pfc_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct sh_pfc *VAR_5 = VAR_4->pfc;
 int VAR_6 = FUNC_2(VAR_5, VAR_3);
 struct sh_pfc_pin_config *VAR_7 = &VAR_4->configs[VAR_6];
 unsigned long VAR_8;

 FUNC_3(&VAR_5->lock, VAR_8);
 VAR_7->gpio_enabled = 0;

 if (VAR_7->mux_set)
  FUNC_1(VAR_5, VAR_7->mux_mark, VAR_0);
 FUNC_4(&VAR_5->lock, VAR_8);
}
