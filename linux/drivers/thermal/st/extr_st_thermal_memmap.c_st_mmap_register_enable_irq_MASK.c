
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {int irq; struct device* dev; } ;
struct platform_device {int dummy; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int *,int ,int,int ,struct st_thermal_sensor*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct st_thermal_sensor*) ;
 int VAR_2 ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct st_thermal_sensor *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct platform_device *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 VAR_3->irq = FUNC_2(VAR_5, 0);
 if (VAR_3->irq < 0) {
  FUNC_0(VAR_4, "failed to register IRQ\n");
  return VAR_3->irq;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_3->irq,
     ((void*)0), VAR_2,
     VAR_1 | VAR_0,
     VAR_4->driver->name, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_4, "failed to register IRQ %d\n", VAR_3->irq);
  return VAR_6;
 }

 return FUNC_3(VAR_3);
}
