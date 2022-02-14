
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3560_flash {int regmap; int led_mode; TYPE_1__* pdata; } ;
struct TYPE_2__ {int peak; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lm3560_flash*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct lm3560_flash *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;


 VAR_4 = FUNC_2(VAR_3->regmap,
      VAR_1, 0x60, VAR_3->pdata->peak);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->led_mode = VAR_2;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->regmap, VAR_0, &VAR_5);
 return VAR_4;
}
