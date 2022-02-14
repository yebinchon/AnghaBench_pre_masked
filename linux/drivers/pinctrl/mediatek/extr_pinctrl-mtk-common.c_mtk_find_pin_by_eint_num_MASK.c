
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_4__ {unsigned int eintnum; } ;
struct mtk_desc_pin {TYPE_2__ eint; } ;
struct TYPE_3__ {int npins; struct mtk_desc_pin* pins; } ;



__attribute__((used)) static const struct mtk_desc_pin *
FUNC_0(struct mtk_pinctrl *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 const struct mtk_desc_pin *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->devdata->npins; VAR_2++) {
  VAR_3 = VAR_0->devdata->pins + VAR_2;
  if (VAR_3->eint.eintnum == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
