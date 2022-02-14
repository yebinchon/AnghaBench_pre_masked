
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; struct ca8210_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_platform_data {int gpio_reset; } ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 int VAR_1;
 struct ca8210_platform_data *VAR_2 = VAR_0->dev.platform_data;

 VAR_2->gpio_reset = FUNC_2(
  VAR_0->dev.of_node,
  "reset-gpio",
  0
 );

 VAR_1 = FUNC_1(VAR_2->gpio_reset, 1);
 if (VAR_1 < 0) {
  FUNC_0(
   &VAR_0->dev,
   "Reset GPIO %d did not set to output mode\n",
   VAR_2->gpio_reset
  );
 }

 return VAR_1;
}
