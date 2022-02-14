
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_thermal_sensor {int thres_temp; int id; int tzd; struct hisi_thermal_data* data; } ;
struct hisi_thermal_data {TYPE_2__* pdev; TYPE_1__* ops; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* get_temp ) (struct hisi_thermal_sensor*) ;} ;


 int FUNC_0 (int *,char*,int ,int ,int,int ) ;
 int FUNC_1 (struct hisi_thermal_sensor*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int *VAR_1)
{
 struct hisi_thermal_sensor *VAR_2 = VAR_0;
 struct hisi_thermal_data *VAR_3 = VAR_2->data;

 *VAR_1 = VAR_3->ops->get_temp(VAR_2);

 FUNC_0(&VAR_3->pdev->dev, "tzd=%p, id=%d, temp=%d, thres=%d\n",
  VAR_2->tzd, VAR_2->id, *VAR_1, VAR_2->thres_temp);

 return 0;
}
