
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct imx1_pinctrl_soc_info {unsigned int ngroups; struct imx1_pin_group* groups; } ;
struct imx1_pinctrl {struct imx1_pinctrl_soc_info* info; } ;
struct imx1_pin_group {int npins; TYPE_1__* pins; } ;
struct TYPE_2__ {int pin_id; } ;


 int FUNC_0 (struct pinctrl_dev*,int ,unsigned long*) ;
 char* FUNC_1 (struct pinctrl_dev*,int ) ;
 struct imx1_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct seq_file*,char*,char const*,unsigned long) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_0,
      struct seq_file *VAR_1, unsigned VAR_2)
{
 struct imx1_pinctrl *VAR_3 = FUNC_2(VAR_0);
 const struct imx1_pinctrl_soc_info *VAR_4 = VAR_3->info;
 struct imx1_pin_group *VAR_5;
 unsigned long VAR_6;
 const char *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 >= VAR_4->ngroups)
  return;

 FUNC_4(VAR_1, "\n");
 VAR_5 = &VAR_4->groups[VAR_2];
 for (VAR_8 = 0; VAR_8 < VAR_5->npins; VAR_8++) {
  VAR_7 = FUNC_1(VAR_0, VAR_5->pins[VAR_8].pin_id);
  VAR_9 = FUNC_0(VAR_0, VAR_5->pins[VAR_8].pin_id, &VAR_6);
  if (VAR_9)
   return;
  FUNC_3(VAR_1, "%s: 0x%lx", VAR_7, VAR_6);
 }
}
