
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx_pinctrl {int gpio_chip; } ;
struct seq_file {int dummy; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 struct stmfx_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct stmfx_pinctrl*,unsigned int) ;
 int FUNC_7 (struct stmfx_pinctrl*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct pinctrl_dev *VAR_0,
       struct seq_file *VAR_1, unsigned int VAR_2)
{
 struct stmfx_pinctrl *VAR_3 = FUNC_0(VAR_0);
 struct pinctrl_gpio_range *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_5(&VAR_3->gpio_chip, VAR_2);
 if (VAR_5 < 0)
  return;
 VAR_6 = FUNC_7(VAR_3, VAR_2);
 if (VAR_6 < 0)
  return;
 VAR_7 = FUNC_6(VAR_3, VAR_2);
 if (VAR_7 < 0)
  return;
 VAR_8 = FUNC_4(&VAR_3->gpio_chip, VAR_2);
 if (VAR_8 < 0)
  return;

 if (!VAR_5) {
  FUNC_2(VAR_1, "output %s ", VAR_8 ? "high" : "low");
  if (VAR_6)
   FUNC_2(VAR_1, "open drain %s internal pull-up ",
       VAR_7 ? "with" : "without");
  else
   FUNC_3(VAR_1, "push pull no pull ");
 } else {
  FUNC_2(VAR_1, "input %s ", VAR_8 ? "high" : "low");
  if (VAR_6)
   FUNC_2(VAR_1, "with internal pull-%s ",
       VAR_7 ? "up" : "down");
  else
   FUNC_2(VAR_1, "%s ", VAR_7 ? "floating" : "analog");
 }
}
