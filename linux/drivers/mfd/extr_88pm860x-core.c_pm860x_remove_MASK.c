
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {scalar_t__ companion; int regmap_companion; } ;
struct i2c_client {int dummy; } ;


 struct pm860x_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pm860x_chip*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct pm860x_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 if (VAR_1->companion) {
  FUNC_3(VAR_1->regmap_companion);
  FUNC_1(VAR_1->companion);
 }
 return 0;
}
