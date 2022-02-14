
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct max8973_chip {scalar_t__ id; int irq; int dev; } ;
struct irq_data {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int ,unsigned long,int ,struct max8973_chip*) ;
 struct thermal_zone_device* FUNC_5 (int ,int ,struct max8973_chip*,int *) ;
 struct irq_data* FUNC_6 (int ) ;
 unsigned long FUNC_7 (struct irq_data*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct max8973_chip *VAR_5)
{
 struct thermal_zone_device *VAR_6;
 struct irq_data *VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9;

 if (VAR_5->id != VAR_2)
  return 0;

 VAR_6 = FUNC_5(VAR_5->dev, 0, VAR_5,
         &VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  FUNC_2(VAR_5->dev, "Failed to register thermal sensor: %d\n",
   VAR_9);
  return VAR_9;
 }

 if (VAR_5->irq <= 0)
  return 0;

 VAR_7 = FUNC_6(VAR_5->irq);
 if (VAR_7)
  VAR_8 = FUNC_7(VAR_7);

 VAR_9 = FUNC_4(VAR_5->dev, VAR_5->irq, ((void*)0),
     VAR_4,
     VAR_0 | VAR_1 | VAR_8,
     FUNC_3(VAR_5->dev), VAR_5);
 if (VAR_9 < 0) {
  FUNC_2(VAR_5->dev, "Failed to request irq %d, %d\n",
   VAR_5->irq, VAR_9);
  return VAR_9;
 }

 return 0;
}
