
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {scalar_t__ number; struct mtk_func_desc* funcs; } ;
struct mtk_func_desc {scalar_t__ muxval; scalar_t__ name; } ;
struct TYPE_2__ {int npins; struct mtk_pin_desc* pins; } ;



__attribute__((used)) static bool FUNC_0(struct mtk_pinctrl *VAR_0, u32 VAR_1,
     u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->soc->npins; VAR_3++) {
  const struct mtk_pin_desc *VAR_4 = VAR_0->soc->pins + VAR_3;

  if (VAR_4->number == VAR_1) {
   const struct mtk_func_desc *VAR_5 = VAR_4->funcs;

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
