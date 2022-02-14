
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hisi_thermal_data {int nr_sensors; TYPE_1__* sensor; int clk; struct platform_device* pdev; } ;
struct TYPE_2__ {char* irq_name; struct hisi_thermal_data* data; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 TYPE_1__* FUNC_4 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct hisi_thermal_data *VAR_4)
{
 struct platform_device *VAR_5 = VAR_4->pdev;
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;

 VAR_4->clk = FUNC_3(VAR_6, "thermal_clk");
 if (FUNC_0(VAR_4->clk)) {
  VAR_7 = FUNC_1(VAR_4->clk);
  if (VAR_7 != -VAR_1)
   FUNC_2(VAR_6, "failed to get thermal clk: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_4->sensor = FUNC_4(VAR_6, sizeof(*VAR_4->sensor), VAR_2);
 if (!VAR_4->sensor)
  return -VAR_0;

 VAR_4->sensor[0].id = VAR_3;
 VAR_4->sensor[0].irq_name = "tsensor_intr";
 VAR_4->sensor[0].data = VAR_4;
 VAR_4->nr_sensors = 1;

 return 0;
}
