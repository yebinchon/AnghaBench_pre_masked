
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_platform_data {int pwm_ctrl; int leda_ctrl; int ledb_ctrl; int leda_init_brt; int ledb_init_brt; } ;
struct lm3630a_chip {int dev; struct lm3630a_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lm3630a_chip*,int ,int,int) ;
 int FUNC_2 (struct lm3630a_chip*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct lm3630a_chip *VAR_8)
{
 int VAR_9;
 struct lm3630a_platform_data *VAR_10 = VAR_8->pdata;

 FUNC_3(1000, 2000);

 VAR_9 = FUNC_2(VAR_8, VAR_5, 0x03);

 VAR_9 |= FUNC_1(VAR_8, VAR_3, 0x07, VAR_10->pwm_ctrl);

 VAR_9 |= FUNC_2(VAR_8, VAR_0, 0x38);

 VAR_9 |= FUNC_1(VAR_8, VAR_6, 0x1F, 0x1F);

 VAR_9 |= FUNC_2(VAR_8, VAR_7, 0x1F);

 VAR_9 |= FUNC_1(VAR_8, VAR_4, 0x14, VAR_10->leda_ctrl);
 VAR_9 |= FUNC_1(VAR_8, VAR_4, 0x0B, VAR_10->ledb_ctrl);
 FUNC_3(1000, 2000);

 VAR_9 |= FUNC_2(VAR_8, VAR_1, VAR_10->leda_init_brt);
 VAR_9 |= FUNC_2(VAR_8, VAR_2, VAR_10->ledb_init_brt);

 if (VAR_9 < 0)
  FUNC_0(VAR_8->dev, "i2c failed to access register\n");
 return VAR_9;
}
