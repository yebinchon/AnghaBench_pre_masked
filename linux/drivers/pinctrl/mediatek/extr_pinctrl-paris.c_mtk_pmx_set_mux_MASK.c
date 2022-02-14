
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl_group {size_t pin; } ;
struct mtk_pinctrl {TYPE_1__* soc; int dev; struct mtk_pinctrl_group* groups; } ;
struct mtk_pin_desc {int dummy; } ;
struct mtk_func_desc {int muxval; } ;
struct TYPE_2__ {int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int ) ;
 struct mtk_func_desc* FUNC_2 (struct mtk_pinctrl*,size_t,unsigned int) ;
 int FUNC_3 (struct mtk_pinctrl*,size_t,unsigned int) ;
 struct mtk_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
      unsigned VAR_3,
      unsigned VAR_4)
{
 struct mtk_pinctrl *VAR_5 = FUNC_4(VAR_2);
 struct mtk_pinctrl_group *VAR_6 = VAR_5->groups + VAR_4;
 const struct mtk_func_desc *VAR_7;
 const struct mtk_pin_desc *VAR_8;
 bool VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_6->pin, VAR_3);
 if (!VAR_9) {
  FUNC_0(VAR_5->dev, "invalid function %d on group %d .\n",
   VAR_3, VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6->pin, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = (const struct mtk_pin_desc *)&VAR_5->soc->pins[VAR_6->pin];
 FUNC_1(VAR_5, VAR_8, VAR_1, VAR_7->muxval);

 return 0;
}
