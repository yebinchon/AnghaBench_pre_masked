
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

int FUNC_1(struct mtk_pinctrl *VAR_3,
         const struct mtk_pin_desc *VAR_4, u32 VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5 & 1;
 int VAR_8 = !!(VAR_5 & 2);
 int VAR_9 = !!(VAR_5 & 4);

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_2, VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!VAR_7)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0, VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_9);
 if (VAR_6)
  return VAR_6;

 return VAR_6;
}
