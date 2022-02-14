
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; } ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {int dummy; } ;
struct group_desc {int num_pins; int* data; int* pins; int name; } ;
struct function_desc {int name; } ;
struct TYPE_2__ {int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;
 struct mtk_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 struct group_desc* FUNC_3 (struct pinctrl_dev*,unsigned int) ;
 struct function_desc* FUNC_4 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 struct mtk_pinctrl *VAR_5 = FUNC_2(VAR_2);
 struct function_desc *VAR_6;
 struct group_desc *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_2->dev, "enable function %s group %s\n",
  VAR_6->name, VAR_7->name);

 for (VAR_8 = 0; VAR_8 < VAR_7->num_pins; VAR_8++) {
  const struct mtk_pin_desc *VAR_9;
  int *VAR_10 = VAR_7->data;
  int VAR_11 = VAR_7->pins[VAR_8];

  VAR_9 = (const struct mtk_pin_desc *)&VAR_5->soc->pins[VAR_11];

  FUNC_1(VAR_5, VAR_9, VAR_1,
     VAR_10[VAR_8]);
 }

 return 0;
}
