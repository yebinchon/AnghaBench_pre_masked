
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_4__ {scalar_t__ number; } ;
struct mtk_desc_pin {struct mtk_desc_function* functions; TYPE_2__ pin; } ;
struct mtk_desc_function {scalar_t__ muxval; scalar_t__ name; } ;
struct TYPE_3__ {int npins; struct mtk_desc_pin* pins; } ;



__attribute__((used)) static bool FUNC_0(struct mtk_pinctrl *VAR_0,
  u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->devdata->npins; VAR_3++) {
  const struct mtk_desc_pin *VAR_4 = VAR_0->devdata->pins + VAR_3;

  if (VAR_4->pin.number == VAR_1) {
   const struct mtk_desc_function *VAR_5 =
     VAR_4->functions;

   while (VAR_5 && VAR_5->name) {
    if (VAR_5->muxval == VAR_2)
     return 1;
    VAR_5++;
   }

   break;
  }
 }

 return 0;
}
