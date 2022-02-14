
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_field {int mask; int bitpos; int offset; int index; int next; } ;
struct mtk_pin_desc {int dummy; } ;


 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,struct mtk_pin_field*) ;
 int FUNC_1 (struct mtk_pinctrl*,struct mtk_pin_field*,int) ;
 int FUNC_2 (struct mtk_pinctrl*,int ,int ,int,int) ;

int FUNC_3(struct mtk_pinctrl *VAR_0, const struct mtk_pin_desc *VAR_1,
       int VAR_2, int VAR_3)
{
 struct mtk_pin_field VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4.next)
  FUNC_2(VAR_0, VAR_4.index, VAR_4.offset, VAR_4.mask << VAR_4.bitpos,
   (VAR_3 & VAR_4.mask) << VAR_4.bitpos);
 else
  FUNC_1(VAR_0, &VAR_4, VAR_3);

 return 0;
}
