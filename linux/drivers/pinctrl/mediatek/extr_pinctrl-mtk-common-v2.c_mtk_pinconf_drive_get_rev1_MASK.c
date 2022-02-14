
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {size_t drv_n; } ;
struct mtk_drive_desc {int scal; int step; } ;


 int VAR_0 ;
 struct mtk_drive_desc* VAR_1 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int*) ;

int FUNC_1(struct mtk_pinctrl *VAR_2,
          const struct mtk_pin_desc *VAR_3, int *VAR_4)
{
 const struct mtk_drive_desc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = &VAR_1[VAR_3->drv_n];

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 *VAR_4 = ((VAR_7 & 0x7) / VAR_5->scal + 1) * VAR_5->step;

 return 0;
}
