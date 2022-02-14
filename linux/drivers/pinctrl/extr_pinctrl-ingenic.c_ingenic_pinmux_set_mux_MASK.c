
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dev; } ;
struct ingenic_pinctrl {int dummy; } ;
struct group_desc {unsigned int num_pins; int* data; int * pins; int name; } ;
struct function_desc {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct ingenic_pinctrl*,int ,int) ;
 struct ingenic_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 struct group_desc* FUNC_3 (struct pinctrl_dev*,unsigned int) ;
 struct function_desc* FUNC_4 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct ingenic_pinctrl *VAR_4 = FUNC_2(VAR_1);
 struct function_desc *VAR_5;
 struct group_desc *VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_1->dev, "enable function %s group %s\n",
  VAR_5->name, VAR_6->name);

 for (VAR_7 = 0; VAR_7 < VAR_6->num_pins; VAR_7++) {
  int *VAR_8 = VAR_6->data;

  FUNC_1(VAR_4, VAR_6->pins[VAR_7], VAR_8[VAR_7]);
 }

 return 0;
}
