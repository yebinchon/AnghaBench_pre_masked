
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
 int VAR_2 ;
 struct mtk_drive_desc* VAR_3 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

int FUNC_1(struct mtk_pinctrl *VAR_4,
     const struct mtk_pin_desc *VAR_5, u32 VAR_6)
{
 const struct mtk_drive_desc *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = &VAR_3[VAR_5->drv_n];





 if ((VAR_6 >= VAR_7->min && VAR_6 <= VAR_7->max) && !(VAR_6 % VAR_7->step)) {
  VAR_6 = (VAR_6 / VAR_7->step - 1) * VAR_7->scal;
  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_1,
           VAR_6 & 0x1);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_2,
           (VAR_6 & 0x2) >> 1);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_8;
}
