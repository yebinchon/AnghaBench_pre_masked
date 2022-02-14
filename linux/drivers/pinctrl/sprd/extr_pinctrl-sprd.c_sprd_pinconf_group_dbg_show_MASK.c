
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl_soc_info {unsigned int ngroups; struct sprd_pin_group* groups; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct sprd_pin_group {int npins; unsigned int* pins; } ;
struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 char* FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 struct sprd_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct seq_file*,char*,char const*,unsigned long) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct pinctrl_dev*,unsigned int,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_0,
     struct seq_file *VAR_1,
     unsigned int VAR_2)
{
 struct sprd_pinctrl *VAR_3 = FUNC_1(VAR_0);
 struct sprd_pinctrl_soc_info *VAR_4 = VAR_3->info;
 struct sprd_pin_group *VAR_5;
 unsigned long VAR_6;
 const char *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 >= VAR_4->ngroups)
  return;

 VAR_5 = &VAR_4->groups[VAR_2];

 FUNC_3(VAR_1, '\n');
 for (VAR_8 = 0; VAR_8 < VAR_5->npins; VAR_8++, VAR_6++) {
  unsigned int VAR_10 = VAR_5->pins[VAR_8];

  VAR_7 = FUNC_0(VAR_0, VAR_10);
  VAR_9 = FUNC_4(VAR_0, VAR_10, &VAR_6);
  if (VAR_9)
   return;

  FUNC_2(VAR_1, "%s: 0x%lx ", VAR_7, VAR_6);
 }
}
