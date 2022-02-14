
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct mtk_pin_drv_grp {unsigned long pin; } ;
struct TYPE_2__ {int n_pin_drv_grps; struct mtk_pin_drv_grp* pin_drv_grp; } ;



__attribute__((used)) static const struct mtk_pin_drv_grp *FUNC_0(
  struct mtk_pinctrl *VAR_0, unsigned long VAR_1) {
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->devdata->n_pin_drv_grps; VAR_2++) {
  const struct mtk_pin_drv_grp *VAR_3 =
    VAR_0->devdata->pin_drv_grp + VAR_2;
  if (VAR_1 == VAR_3->pin)
   return VAR_3;
 }

 return ((void*)0);
}
