
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int flags; } ;
struct imx_pinctrl {scalar_t__ base; struct imx_pin_reg* pin_regs; int dev; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin_reg {int conf_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 struct imx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct seq_file*,char*,unsigned long) ;
 int FUNC_6 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_7(struct pinctrl_dev *VAR_1,
       struct seq_file *VAR_2, unsigned VAR_3)
{
 struct imx_pinctrl *VAR_4 = FUNC_3(VAR_1);
 const struct imx_pinctrl_soc_info *VAR_5 = VAR_4->info;
 const struct imx_pin_reg *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_5->flags & VAR_0) {
  VAR_8 = FUNC_1(VAR_1, VAR_3, &VAR_7);
  if (VAR_8) {
   FUNC_0(VAR_4->dev, "failed to get %s pinconf\n",
    FUNC_2(VAR_1, VAR_3));
   FUNC_6(VAR_2, "N/A");
   return;
  }
 } else {
  VAR_6 = &VAR_4->pin_regs[VAR_3];
  if (VAR_6->conf_reg == -1) {
   FUNC_6(VAR_2, "N/A");
   return;
  }

  VAR_7 = FUNC_4(VAR_4->base + VAR_6->conf_reg);
 }

 FUNC_5(VAR_2, "0x%lx", VAR_7);
}
