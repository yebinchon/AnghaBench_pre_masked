
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_chip {int rtc; int adc; } ;
struct i2c_client {int dummy; } ;


 struct max8925_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct max8925_chip*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct max8925_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->adc);
 FUNC_1(VAR_1->rtc);
 return 0;
}
