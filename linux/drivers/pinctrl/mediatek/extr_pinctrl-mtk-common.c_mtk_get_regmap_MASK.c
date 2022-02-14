
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mtk_pinctrl {struct regmap* regmap1; struct regmap* regmap2; TYPE_1__* devdata; } ;
struct TYPE_2__ {unsigned long type1_start; unsigned long type1_end; } ;



__attribute__((used)) static struct regmap *FUNC_0(struct mtk_pinctrl *VAR_0,
  unsigned long VAR_1)
{
 if (VAR_1 >= VAR_0->devdata->type1_start && VAR_1 < VAR_0->devdata->type1_end)
  return VAR_0->regmap2;
 return VAR_0->regmap1;
}
