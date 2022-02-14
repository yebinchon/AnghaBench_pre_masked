
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_thermal_sensor {int thres_temp; int id; int tzd; struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {TYPE_2__* pdev; TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* irq_handler ) (struct hisi_thermal_sensor*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (struct hisi_thermal_sensor*,int*) ;
 int FUNC_2 (struct hisi_thermal_sensor*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct hisi_thermal_sensor *VAR_4 = VAR_3;
 struct hisi_thermal_data *VAR_5 = VAR_4->data;
 int VAR_6 = 0;

 VAR_5->ops->irq_handler(VAR_4);

 FUNC_1(VAR_4, &VAR_6);

 if (VAR_6 >= VAR_4->thres_temp) {
  FUNC_0(&VAR_5->pdev->dev,
    "sensor <%d> THERMAL ALARM: %d > %d\n",
    VAR_4->id, VAR_6, VAR_4->thres_temp);

  FUNC_3(VAR_4->tzd,
        VAR_1);

 } else {
  FUNC_0(&VAR_5->pdev->dev,
    "sensor <%d> THERMAL ALARM stopped: %d < %d\n",
    VAR_4->id, VAR_6, VAR_4->thres_temp);
 }

 return VAR_0;
}
