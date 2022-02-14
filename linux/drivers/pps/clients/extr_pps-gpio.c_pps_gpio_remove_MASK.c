
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_gpio_device_data {int irq; scalar_t__ echo_pin; int echo_timer; int pps; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct pps_gpio_device_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct pps_gpio_device_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->pps);
 if (VAR_1->echo_pin) {
  FUNC_0(&VAR_1->echo_timer);

  FUNC_2(VAR_1->echo_pin, 0);
 }
 FUNC_1(&VAR_0->dev, "removed IRQ %d as PPS source\n", VAR_1->irq);
 return 0;
}
