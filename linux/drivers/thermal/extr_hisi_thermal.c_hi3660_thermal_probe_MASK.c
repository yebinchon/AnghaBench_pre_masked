
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hisi_thermal_data {int nr_sensors; TYPE_1__* sensor; struct platform_device* pdev; } ;
struct TYPE_2__ {char* irq_name; struct hisi_thermal_data* data; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_thermal_data *VAR_4)
{
 struct platform_device *VAR_5 = VAR_4->pdev;
 struct device *VAR_6 = &VAR_5->dev;

 VAR_4->nr_sensors = 1;

 VAR_4->sensor = FUNC_0(VAR_6, sizeof(*VAR_4->sensor) *
        VAR_4->nr_sensors, VAR_1);
 if (!VAR_4->sensor)
  return -VAR_0;

 VAR_4->sensor[0].id = VAR_2;
 VAR_4->sensor[0].irq_name = "tsensor_a73";
 VAR_4->sensor[0].data = VAR_4;

 VAR_4->sensor[1].id = VAR_3;
 VAR_4->sensor[1].irq_name = "tsensor_a53";
 VAR_4->sensor[1].data = VAR_4;

 return 0;
}
