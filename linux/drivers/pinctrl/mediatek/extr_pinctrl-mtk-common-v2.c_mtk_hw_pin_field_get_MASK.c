
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dev; } ;
struct mtk_pin_field {int dummy; } ;
struct mtk_pin_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,struct mtk_pin_field*) ;

__attribute__((used)) static int FUNC_2(struct mtk_pinctrl *VAR_2,
    const struct mtk_pin_desc *VAR_3,
    int VAR_4, struct mtk_pin_field *VAR_5)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_1) {
  FUNC_0(VAR_2->dev, "Invalid Field %d\n", VAR_4);
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
