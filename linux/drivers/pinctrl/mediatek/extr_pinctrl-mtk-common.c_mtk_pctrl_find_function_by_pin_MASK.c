
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct mtk_desc_pin {struct mtk_desc_function* functions; } ;
struct mtk_desc_function {int muxval; scalar_t__ name; } ;
struct TYPE_2__ {struct mtk_desc_pin* pins; } ;



__attribute__((used)) static const struct mtk_desc_function *FUNC_0(
  struct mtk_pinctrl *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct mtk_desc_pin *VAR_3 = VAR_0->devdata->pins + VAR_1;
 const struct mtk_desc_function *VAR_4 = VAR_3->functions;

 while (VAR_4 && VAR_4->name) {
  if (VAR_4->muxval == VAR_2)
   return VAR_4;
  VAR_4++;
 }

 return ((void*)0);
}
