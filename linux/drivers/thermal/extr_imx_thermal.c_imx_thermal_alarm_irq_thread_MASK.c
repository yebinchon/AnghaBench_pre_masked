
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_thermal_data {int alarm_temp; TYPE_1__* tz; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct imx_thermal_data *VAR_4 = VAR_3;

 FUNC_0(&VAR_4->tz->device, "THERMAL ALARM: T > %d\n",
  VAR_4->alarm_temp / 1000);

 FUNC_1(VAR_4->tz, VAR_1);

 return VAR_0;
}
