
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {size_t drv_n; } ;
struct mtk_drive_desc {int min; int max; int step; int scal; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_drive_desc* VAR_2 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

int FUNC_1(struct mtk_pinctrl *VAR_3,
          const struct mtk_pin_desc *VAR_4, u32 VAR_5)
{
 const struct mtk_drive_desc *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = &VAR_2[VAR_4->drv_n];

 if ((VAR_5 >= VAR_6->min && VAR_5 <= VAR_6->max) && !(VAR_5 % VAR_6->step)) {
  VAR_5 = (VAR_5 / VAR_6->step - 1) * VAR_6->scal;

  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_1,
           VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_7;
}
