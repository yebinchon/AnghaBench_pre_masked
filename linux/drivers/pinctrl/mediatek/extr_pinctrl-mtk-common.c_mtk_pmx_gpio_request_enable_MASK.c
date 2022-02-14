
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct mtk_pinctrl*,unsigned int,int,int ) ;
 int FUNC_2 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int) ;
 struct mtk_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
        struct pinctrl_gpio_range *VAR_3,
        unsigned VAR_4)
{
 int VAR_5;
 struct mtk_pinctrl *VAR_6 = FUNC_4(VAR_2);

 VAR_5 = FUNC_2(VAR_6, VAR_4);

 if (VAR_5 < 0) {
  FUNC_0(VAR_6->dev, "invalid gpio pin %d.\n", VAR_4);
  return -VAR_0;
 }

 FUNC_3(VAR_2, VAR_4, VAR_5);
 FUNC_1(VAR_6, VAR_4, 1, VAR_1);

 return 0;
}
