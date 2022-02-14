
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int flags; unsigned long mux_mask; TYPE_1__* pins; } ;
struct imx_pinctrl {int base; int dev; struct imx_pin_reg* pin_regs; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin_reg {int conf_reg; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int ) ;
 struct imx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
    unsigned VAR_3, unsigned long *VAR_4,
    unsigned VAR_5)
{
 struct imx_pinctrl *VAR_6 = FUNC_2(VAR_2);
 const struct imx_pinctrl_soc_info *VAR_7 = VAR_6->info;
 const struct imx_pin_reg *VAR_8 = &VAR_6->pin_regs[VAR_3];
 int VAR_9;

 if (VAR_8->conf_reg == -1) {
  FUNC_1(VAR_6->dev, "Pin(%s) does not support config function\n",
   VAR_7->pins[VAR_3].name);
  return -VAR_0;
 }

 FUNC_0(VAR_6->dev, "pinconf set pin %s\n",
  VAR_7->pins[VAR_3].name);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_7->flags & VAR_1) {
   u32 VAR_10;
   VAR_10 = FUNC_3(VAR_6->base + VAR_8->conf_reg);
   VAR_10 &= VAR_7->mux_mask;
   VAR_10 |= VAR_4[VAR_9];
   FUNC_4(VAR_10, VAR_6->base + VAR_8->conf_reg);
   FUNC_0(VAR_6->dev, "write: offset 0x%x val 0x%x\n",
    VAR_8->conf_reg, VAR_10);
  } else {
   FUNC_4(VAR_4[VAR_9], VAR_6->base + VAR_8->conf_reg);
   FUNC_0(VAR_6->dev, "write: offset 0x%x val 0x%lx\n",
    VAR_8->conf_reg, VAR_4[VAR_9]);
  }
 }

 return 0;
}
