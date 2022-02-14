
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {struct soc_sensor_entry* devdata; } ;
struct soc_sensor_entry {void* mode; int locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_8)
{
 u32 VAR_9;
 struct soc_sensor_entry *VAR_10 = VAR_8->devdata;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_5, VAR_1,
       VAR_4, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_9 & VAR_3) {
  VAR_10->mode = VAR_7;
  return 0;
 }

 if (!VAR_10->locked) {
  VAR_9 |= VAR_3;
  VAR_11 = FUNC_1(VAR_5, VAR_2,
         VAR_4, VAR_9);
  if (VAR_11)
   return VAR_11;

  VAR_10->mode = VAR_7;
 } else {
  VAR_10->mode = VAR_6;
  FUNC_2("DTS is locked. Cannot enable DTS\n");
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
