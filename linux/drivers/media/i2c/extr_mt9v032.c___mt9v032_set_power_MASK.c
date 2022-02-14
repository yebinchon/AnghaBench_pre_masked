
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mt9v032 {int ctrls; TYPE_2__* model; TYPE_3__* pdata; struct regmap* regmap; } ;
struct TYPE_6__ {scalar_t__ clk_pol; } ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int pclk_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt9v032*) ;
 int FUNC_1 (struct mt9v032*) ;
 int FUNC_2 (struct regmap*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mt9v032 *VAR_2, bool VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 int VAR_5;

 if (!VAR_3) {
  FUNC_0(VAR_2);
  return 0;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_2->pdata && VAR_2->pdata->clk_pol) {
  VAR_5 = FUNC_2(VAR_4, VAR_2->model->data->pclk_reg,
    VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_5 = FUNC_2(VAR_4, VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(&VAR_2->ctrls);
}
