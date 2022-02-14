
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {struct mtk_func_desc* funcs; } ;
struct mtk_func_desc {int muxval; scalar_t__ name; } ;
struct TYPE_2__ {struct mtk_pin_desc* pins; } ;



__attribute__((used)) static const struct mtk_func_desc *
FUNC_0(struct mtk_pinctrl *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct mtk_pin_desc *VAR_3 = VAR_0->soc->pins + VAR_1;
 const struct mtk_func_desc *VAR_4 = VAR_3->funcs;

 while (VAR_4 && VAR_4->name) {
  if (VAR_4->muxval == VAR_2)
   return VAR_4;
  VAR_4++;
 }

 return ((void*)0);
}
