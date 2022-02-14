
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned long) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct pinctrl_dev *VAR_0,
      struct seq_file *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, &VAR_3);
 if (VAR_4)
  return;

 FUNC_0(VAR_1, "0x%lx", VAR_3);
}
