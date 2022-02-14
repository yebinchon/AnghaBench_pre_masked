
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct gpio_desc*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct gpio_desc *VAR_2;
 struct gpio_desc *VAR_3;

 VAR_2 = FUNC_2(&VAR_1->dev, "pdn", VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 if (VAR_2) {
  FUNC_3(VAR_2, 0);

  FUNC_4(20);
 }

 VAR_3 = FUNC_2(&VAR_1->dev, "reset", VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_3) {

  FUNC_5(500);
  FUNC_3(VAR_3, 0);

  FUNC_6(200, 250);
 }

 return 0;
}
