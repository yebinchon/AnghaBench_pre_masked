
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct owl_pinctrl {int dev; } ;


 int FUNC_0 (int ) ;
 struct owl_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_0,
    struct seq_file *VAR_1,
    unsigned int VAR_2)
{
 struct owl_pinctrl *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_1, "%s", FUNC_0(VAR_3->dev));
}
