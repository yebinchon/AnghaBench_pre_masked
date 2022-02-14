
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; struct ca8210_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_platform_data {int gpio_irq; scalar_t__ irq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int,int ,int ,char*,int ) ;
 int FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_2)
{
 int VAR_3;
 struct ca8210_platform_data *VAR_4 = VAR_2->dev.platform_data;

 VAR_4->gpio_irq = FUNC_4(
  VAR_2->dev.of_node,
  "irq-gpio",
  0
 );

 VAR_4->irq_id = FUNC_2(VAR_4->gpio_irq);
 if (VAR_4->irq_id < 0) {
  FUNC_0(
   &VAR_2->dev,
   "Could not get irq for gpio pin %d\n",
   VAR_4->gpio_irq
  );
  FUNC_1(VAR_4->gpio_irq);
  return VAR_4->irq_id;
 }

 VAR_3 = FUNC_5(
  VAR_4->irq_id,
  VAR_1,
  VAR_0,
  "ca8210-irq",
  FUNC_6(VAR_2)
 );
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "request_irq %d failed\n", VAR_4->irq_id);
  FUNC_3(VAR_4->gpio_irq);
  FUNC_1(VAR_4->gpio_irq);
 }

 return VAR_3;
}
