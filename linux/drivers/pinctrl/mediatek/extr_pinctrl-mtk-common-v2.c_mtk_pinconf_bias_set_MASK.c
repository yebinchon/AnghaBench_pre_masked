
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

int FUNC_1(struct mtk_pinctrl *VAR_2,
    const struct mtk_pin_desc *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_4 ? 1 : 2;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_6 & 1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0,
          !!(VAR_6 & 2));
 if (VAR_5)
  return VAR_5;

 return 0;
}
