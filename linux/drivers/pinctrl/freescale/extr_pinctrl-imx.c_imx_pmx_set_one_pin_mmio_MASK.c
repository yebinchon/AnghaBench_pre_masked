
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct imx_pinctrl_soc_info {int flags; int mux_mask; int mux_shift; TYPE_2__* pins; } ;
struct imx_pinctrl {int base; int input_sel_base; int dev; struct imx_pin_reg* pin_regs; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin_reg {int mux_reg; } ;
struct imx_pin_mmio {int mux_mode; int input_val; int input_reg; } ;
struct TYPE_3__ {struct imx_pin_mmio mmio; } ;
struct imx_pin {unsigned int pin; TYPE_1__ conf; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct imx_pinctrl *VAR_1,
        struct imx_pin *VAR_2)
{
 const struct imx_pinctrl_soc_info *VAR_3 = VAR_1->info;
 struct imx_pin_mmio *VAR_4 = &VAR_2->conf.mmio;
 const struct imx_pin_reg *VAR_5;
 unsigned int VAR_6;

 VAR_6 = VAR_2->pin;
 VAR_5 = &VAR_1->pin_regs[VAR_6];

 if (VAR_5->mux_reg == -1) {
  FUNC_0(VAR_1->dev, "Pin(%s) does not support mux function\n",
   VAR_3->pins[VAR_6].name);
  return 0;
 }

 if (VAR_3->flags & VAR_0) {
  u32 VAR_7;

  VAR_7 = FUNC_1(VAR_1->base + VAR_5->mux_reg);
  VAR_7 &= ~VAR_3->mux_mask;
  VAR_7 |= (VAR_4->mux_mode << VAR_3->mux_shift);
  FUNC_2(VAR_7, VAR_1->base + VAR_5->mux_reg);
  FUNC_0(VAR_1->dev, "write: offset 0x%x val 0x%x\n",
   VAR_5->mux_reg, VAR_7);
 } else {
  FUNC_2(VAR_4->mux_mode, VAR_1->base + VAR_5->mux_reg);
  FUNC_0(VAR_1->dev, "write: offset 0x%x val 0x%x\n",
   VAR_5->mux_reg, VAR_4->mux_mode);
 }
 if (VAR_4->input_val >> 24 == 0xff) {
  u32 VAR_8 = VAR_4->input_val;
  u8 VAR_9 = VAR_8 & 0xff;
  u8 VAR_10 = (VAR_8 >> 8) & 0xff;
  u8 VAR_11 = (VAR_8 >> 16) & 0xff;
  u32 VAR_12 = ((1 << VAR_10) - 1) << VAR_11;




  VAR_8 = FUNC_1(VAR_1->base + VAR_4->input_reg);
  VAR_8 &= ~VAR_12;
  VAR_8 |= VAR_9 << VAR_11;
  FUNC_2(VAR_8, VAR_1->base + VAR_4->input_reg);
 } else if (VAR_4->input_reg) {




  if (VAR_1->input_sel_base)
   FUNC_2(VAR_4->input_val, VAR_1->input_sel_base +
     VAR_4->input_reg);
  else
   FUNC_2(VAR_4->input_val, VAR_1->base +
     VAR_4->input_reg);
  FUNC_0(VAR_1->dev,
   "==>select_input: offset 0x%x val 0x%x\n",
   VAR_4->input_reg, VAR_4->input_val);
 }

 return 0;
}
