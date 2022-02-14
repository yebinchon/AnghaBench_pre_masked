
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int last_temperature; int temperature; int device; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thermal_zone_device*,int*) ;
 int FUNC_5 (struct thermal_zone_device*) ;

__attribute__((used)) static void FUNC_6(struct thermal_zone_device *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 if (VAR_4) {
  if (VAR_4 != -VAR_0)
   FUNC_1(&VAR_2->device,
     "failed to read out thermal zone (%d)\n",
     VAR_4);
  return;
 }

 FUNC_2(&VAR_2->lock);
 VAR_2->last_temperature = VAR_2->temperature;
 VAR_2->temperature = VAR_3;
 FUNC_3(&VAR_2->lock);

 FUNC_5(VAR_2);
 if (VAR_2->last_temperature == VAR_1)
  FUNC_0(&VAR_2->device, "last_temperature N/A, current_temperature=%d\n",
   VAR_2->temperature);
 else
  FUNC_0(&VAR_2->device, "last_temperature=%d, current_temperature=%d\n",
   VAR_2->last_temperature, VAR_2->temperature);
}
