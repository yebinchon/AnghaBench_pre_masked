
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int flags; unsigned long mux_mask; TYPE_1__* pins; } ;
struct imx_pinctrl {scalar_t__ base; int dev; struct imx_pin_reg* pin_regs; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin_reg {int conf_reg; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct imx_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2, unsigned VAR_3,
    unsigned long *VAR_4)
{
 struct imx_pinctrl *VAR_5 = FUNC_1(VAR_2);
 const struct imx_pinctrl_soc_info *VAR_6 = VAR_5->info;
 const struct imx_pin_reg *VAR_7 = &VAR_5->pin_regs[VAR_3];

 if (VAR_7->conf_reg == -1) {
  FUNC_0(VAR_5->dev, "Pin(%s) does not support config function\n",
   VAR_6->pins[VAR_3].name);
  return -VAR_0;
 }

 *VAR_4 = FUNC_2(VAR_5->base + VAR_7->conf_reg);

 if (VAR_6->flags & VAR_1)
  *VAR_4 &= ~VAR_6->mux_mask;

 return 0;
}
