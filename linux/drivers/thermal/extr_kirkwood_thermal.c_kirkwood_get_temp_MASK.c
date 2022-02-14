
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int device; struct kirkwood_thermal_priv* devdata; } ;
struct kirkwood_thermal_priv {int sensor; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,char*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_5,
     int *VAR_6)
{
 unsigned long VAR_7;
 struct kirkwood_thermal_priv *VAR_8 = VAR_5->devdata;

 VAR_7 = FUNC_1(VAR_8->sensor);


 if (!((VAR_7 >> VAR_4) &
     VAR_3)) {
  FUNC_0(&VAR_5->device,
   "Temperature sensor reading not valid\n");
  return -VAR_0;
 }






 VAR_7 = (VAR_7 >> VAR_2) &
  VAR_1;
 *VAR_6 = ((3220000000UL - (10000000UL * VAR_7)) / 13625);

 return 0;
}
