
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_desc {size_t drv_n; } ;
struct mtk_drive_desc {int scal; int step; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_drive_desc* VAR_2 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int*) ;

int FUNC_1(struct mtk_pinctrl *VAR_3,
     const struct mtk_pin_desc *VAR_4, int *VAR_5)
{
 const struct mtk_drive_desc *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = &VAR_2[VAR_4->drv_n];

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_9);
 if (VAR_7)
  return VAR_7;




 *VAR_5 = (((VAR_9 << 1) + VAR_8) / VAR_6->scal + 1) * VAR_6->step;

 return 0;
}
