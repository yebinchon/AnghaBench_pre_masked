
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk32k_src; } ;
struct arizona {int clk32k_ref; int clk_lock; int regmap; int * mclk; int dev; TYPE_1__ pdata; } ;




 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

int FUNC_6(struct arizona *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_4->clk_lock);

 VAR_4->clk32k_ref++;

 if (VAR_4->clk32k_ref == 1) {
  switch (VAR_4->pdata.clk32k_src) {
  case 129:
   VAR_5 = FUNC_3(VAR_4->dev);
   if (VAR_5 != 0)
    goto err_ref;
   VAR_5 = FUNC_0(VAR_4->mclk[VAR_2]);
   if (VAR_5 != 0) {
    FUNC_4(VAR_4->dev);
    goto err_ref;
   }
   break;
  case 128:
   VAR_5 = FUNC_0(VAR_4->mclk[VAR_3]);
   if (VAR_5 != 0)
    goto err_ref;
   break;
  }

  VAR_5 = FUNC_5(VAR_4->regmap, VAR_1,
      VAR_0,
      VAR_0);
 }

err_ref:
 if (VAR_5 != 0)
  VAR_4->clk32k_ref--;

 FUNC_2(&VAR_4->clk_lock);

 return VAR_5;
}
