
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
 struct imx_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
     struct pinctrl_gpio_range *VAR_2,
     unsigned VAR_3, bool VAR_4)
{
 struct imx_pinctrl *VAR_5 = FUNC_0(VAR_1);
 const struct imx_pin_reg *VAR_6;
 u32 VAR_7;

 VAR_6 = &VAR_5->pin_regs[VAR_3];
 if (VAR_6->mux_reg == -1)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_5->base + VAR_6->mux_reg);
 if (VAR_4)
  VAR_7 &= ~0x2;
 else
  VAR_7 |= 0x2;
 FUNC_2(VAR_7, VAR_5->base + VAR_6->mux_reg);

 return 0;
}
