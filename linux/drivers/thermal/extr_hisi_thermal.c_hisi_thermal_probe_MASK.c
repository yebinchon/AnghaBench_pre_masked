
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hisi_thermal_sensor {int irq_name; } ;
struct hisi_thermal_data {int nr_sensors; TYPE_1__* ops; struct hisi_thermal_sensor* sensor; int regs; struct platform_device* pdev; } ;
struct TYPE_2__ {int (* probe ) (struct hisi_thermal_data*) ;int (* enable_sensor ) (struct hisi_thermal_sensor*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct hisi_thermal_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int *,int ,int ,int ,struct hisi_thermal_sensor*) ;
 int VAR_4 ;
 int FUNC_6 (struct platform_device*,struct hisi_thermal_sensor*) ;
 int FUNC_7 (struct hisi_thermal_sensor*,int) ;
 TYPE_1__* FUNC_8 (struct device*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct hisi_thermal_data*) ;
 int FUNC_12 (struct hisi_thermal_data*) ;
 int FUNC_13 (struct hisi_thermal_sensor*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct hisi_thermal_data *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_4(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pdev = VAR_5;
 FUNC_11(VAR_5, VAR_6);
 VAR_6->ops = FUNC_8(VAR_7);

 VAR_8 = FUNC_10(VAR_5, VAR_2, 0);
 VAR_6->regs = FUNC_3(VAR_7, VAR_8);
 if (FUNC_0(VAR_6->regs)) {
  FUNC_2(VAR_7, "failed to get io address\n");
  return FUNC_1(VAR_6->regs);
 }

 VAR_10 = VAR_6->ops->probe(VAR_6);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6->nr_sensors; VAR_9++) {
  struct hisi_thermal_sensor *VAR_11 = &VAR_6->sensor[VAR_9];

  VAR_10 = FUNC_6(VAR_5, VAR_11);
  if (VAR_10) {
   FUNC_2(VAR_7, "failed to register thermal sensor: %d\n",
    VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_9(VAR_5, 0);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_5(VAR_7, VAR_10, ((void*)0),
      VAR_4,
      VAR_3, VAR_11->irq_name,
      VAR_11);
  if (VAR_10 < 0) {
   FUNC_2(VAR_7, "Failed to request alarm irq: %d\n", VAR_10);
   return VAR_10;
  }

  VAR_10 = VAR_6->ops->enable_sensor(VAR_11);
  if (VAR_10) {
   FUNC_2(VAR_7, "Failed to setup the sensor: %d\n", VAR_10);
   return VAR_10;
  }

  FUNC_7(VAR_11, 1);
 }

 return 0;
}
