
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct pinctrl_dev *VAR_0, struct seq_file *VAR_1,
     unsigned VAR_2)
{
 FUNC_1(VAR_1, "%s", FUNC_0(VAR_0->dev));
}
