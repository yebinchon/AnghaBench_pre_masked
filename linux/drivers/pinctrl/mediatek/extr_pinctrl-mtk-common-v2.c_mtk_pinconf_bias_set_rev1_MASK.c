
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

int FUNC_1(struct mtk_pinctrl *VAR_5,
         const struct mtk_pin_desc *VAR_6, bool VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = VAR_7 ? VAR_2 : VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_3,
          VAR_0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_4, VAR_9);
 if (VAR_8)
  return VAR_8;

 return 0;
}
