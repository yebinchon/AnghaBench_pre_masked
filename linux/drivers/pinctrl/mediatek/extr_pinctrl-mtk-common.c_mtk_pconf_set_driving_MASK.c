
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct mtk_pin_drv_grp {scalar_t__ grp; unsigned int bit; int offset; } ;
struct mtk_drv_group_desc {unsigned char min_drv; unsigned char max_drv; unsigned char step; int high_bit; unsigned int low_bit; } ;
struct TYPE_2__ {unsigned int npins; scalar_t__ n_grp_cls; struct mtk_drv_group_desc* grp_desc; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct mtk_pin_drv_grp* FUNC_1 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_2 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mtk_pinctrl *VAR_1,
  unsigned int VAR_2, unsigned char VAR_3)
{
 const struct mtk_pin_drv_grp *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 const struct mtk_drv_group_desc *VAR_9;

 if (VAR_2 >= VAR_1->devdata->npins)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4 || VAR_4->grp > VAR_1->devdata->n_grp_cls)
  return -VAR_0;

 VAR_9 = VAR_1->devdata->grp_desc + VAR_4->grp;
 if (VAR_3 >= VAR_9->min_drv && VAR_3 <= VAR_9->max_drv
  && !(VAR_3 % VAR_9->step)) {
  VAR_5 = VAR_3 / VAR_9->step - 1;
  VAR_6 = VAR_9->high_bit - VAR_9->low_bit + 1;
  VAR_7 = FUNC_0(VAR_6) - 1;
  VAR_8 = VAR_4->bit + VAR_9->low_bit;
  VAR_7 <<= VAR_8;
  VAR_5 <<= VAR_8;
  return FUNC_3(FUNC_2(VAR_1, VAR_2),
    VAR_4->offset, VAR_7, VAR_5);
 }

 return -VAR_0;
}
