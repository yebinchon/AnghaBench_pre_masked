
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl_group {int pin; } ;
struct mtk_pinctrl {int dev; struct mtk_pinctrl_group* groups; } ;
struct mtk_desc_function {int muxval; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct mtk_desc_function* FUNC_1 (struct mtk_pinctrl*,int ,unsigned int) ;
 int FUNC_2 (struct mtk_pinctrl*,int ,unsigned int) ;
 int FUNC_3 (struct pinctrl_dev*,int ,int ) ;
 struct mtk_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
       unsigned VAR_2,
       unsigned VAR_3)
{
 bool VAR_4;
 const struct mtk_desc_function *VAR_5;
 struct mtk_pinctrl *VAR_6 = FUNC_4(VAR_1);
 struct mtk_pinctrl_group *VAR_7 = VAR_6->groups + VAR_3;

 VAR_4 = FUNC_2(VAR_6, VAR_7->pin, VAR_2);
 if (!VAR_4) {
  FUNC_0(VAR_6->dev, "invalid function %d on group %d .\n",
    VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_6, VAR_7->pin, VAR_2);
 if (!VAR_5)
  return -VAR_0;
 FUNC_3(VAR_1, VAR_7->pin, VAR_5->muxval);
 return 0;
}
