
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gpio_backlight {int gpiod; int def_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2,
       struct gpio_backlight *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;

 VAR_3->def_value = FUNC_3(VAR_4, "default-on");

 VAR_3->gpiod = FUNC_4(VAR_4, ((void*)0), VAR_1);
 if (FUNC_0(VAR_3->gpiod)) {
  VAR_5 = FUNC_1(VAR_3->gpiod);

  if (VAR_5 != -VAR_0) {
   FUNC_2(VAR_4,
    "Error: The gpios parameter is missing or invalid.\n");
  }
  return VAR_5;
 }

 return 0;
}
