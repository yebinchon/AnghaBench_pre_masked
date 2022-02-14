
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3646_flash {unsigned int mode_reg; int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {int led1_torch_brt; int led1_flash_brt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct lm3646_flash*,int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct lm3646_flash *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_5->mode_reg = VAR_6 & 0xfc;


 VAR_7 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;





 VAR_7 = FUNC_4(VAR_5->regmap,
      VAR_2, 0x7F,
      FUNC_0
      (VAR_5->pdata->led1_flash_brt));

 if (VAR_7 < 0)
  return VAR_7;





 VAR_7 = FUNC_4(VAR_5->regmap,
      VAR_3, 0x7F,
      FUNC_1
      (VAR_5->pdata->led1_torch_brt));
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_3(VAR_5->regmap, VAR_1, &VAR_6);
}
