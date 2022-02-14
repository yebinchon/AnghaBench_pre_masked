
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct bq25890_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int ,char*) ;
 struct gpio_desc* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct gpio_desc*) ;

__attribute__((used)) static int FUNC_5(struct bq25890_device *VAR_2)
{
 struct gpio_desc *VAR_3;

 VAR_3 = FUNC_3(VAR_2->dev, VAR_0, VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_2->dev, "Could not probe irq pin.\n");
  return FUNC_1(VAR_3);
 }

 return FUNC_4(VAR_3);
}
