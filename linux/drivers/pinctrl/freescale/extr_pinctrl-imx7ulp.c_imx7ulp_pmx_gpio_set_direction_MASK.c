
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl {scalar_t__ base; struct imx_pin_reg* pin_regs; } ;
struct imx_pin_reg {int mux_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct imx_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_3,
       struct pinctrl_gpio_range *VAR_4,
       unsigned VAR_5, bool VAR_6)
{
 struct imx_pinctrl *VAR_7 = FUNC_0(VAR_3);
 const struct imx_pin_reg *VAR_8;
 u32 VAR_9;

 VAR_8 = &VAR_7->pin_regs[VAR_5];
 if (VAR_8->mux_reg == -1)
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_7->base + VAR_8->mux_reg);
 if (VAR_6)
  VAR_9 = (VAR_9 & ~VAR_1) | VAR_0;
 else
  VAR_9 = (VAR_9 & ~VAR_0) | VAR_1;
 FUNC_2(VAR_9, VAR_7->base + VAR_8->mux_reg);

 return 0;
}
