
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slg51000 {int dev; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {struct gpio_desc* ena_gpiod; struct slg51000* driver_data; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_1 (int ,struct device_node*,char*,int ,int,char*) ;
 int FUNC_2 (int ,struct gpio_desc*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_2,
    const struct regulator_desc *VAR_3,
    struct regulator_config *VAR_4)
{
 struct slg51000 *VAR_5 = VAR_4->driver_data;
 struct gpio_desc *VAR_6;
 enum gpiod_flags VAR_7 = VAR_1 | VAR_0;

 VAR_6 = FUNC_1(VAR_5->dev, VAR_2,
      "enable-gpios", 0,
      VAR_7, "gpio-en-ldo");
 if (!FUNC_0(VAR_6)) {
  VAR_4->ena_gpiod = VAR_6;
  FUNC_2(VAR_5->dev, VAR_4->ena_gpiod);
 }

 return 0;
}
