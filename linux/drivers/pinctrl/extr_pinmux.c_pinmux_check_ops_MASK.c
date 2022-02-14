
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_ops {unsigned int (* get_functions_count ) (struct pinctrl_dev*) ;char* (* get_function_name ) (struct pinctrl_dev*,unsigned int) ;int set_mux; int get_function_groups; } ;
struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinmux_ops* pmxops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (struct pinctrl_dev*) ;
 char* FUNC_2 (struct pinctrl_dev*,unsigned int) ;

int FUNC_3(struct pinctrl_dev *VAR_1)
{
 const struct pinmux_ops *VAR_2 = VAR_1->desc->pmxops;
 unsigned VAR_3;
 unsigned VAR_4 = 0;


 if (!VAR_2 ||
     !VAR_2->get_functions_count ||
     !VAR_2->get_function_name ||
     !VAR_2->get_function_groups ||
     !VAR_2->set_mux) {
  FUNC_0(VAR_1->dev, "pinmux ops lacks necessary functions\n");
  return -VAR_0;
 }

 VAR_3 = VAR_2->get_functions_count(VAR_1);
 while (VAR_4 < VAR_3) {
  const char *VAR_5 = VAR_2->get_function_name(VAR_1,
          VAR_4);
  if (!VAR_5) {
   FUNC_0(VAR_1->dev, "pinmux ops has no name for function%u\n",
    VAR_4);
   return -VAR_0;
  }
  VAR_4++;
 }

 return 0;
}
