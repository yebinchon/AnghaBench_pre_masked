
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int device; struct dove_thermal_priv* devdata; } ;
struct dove_thermal_priv {scalar_t__ sensor; scalar_t__ control; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_5,
     int *VAR_6)
{
 unsigned long VAR_7;
 struct dove_thermal_priv *VAR_8 = VAR_5->devdata;


 VAR_7 = FUNC_1(VAR_8->control + VAR_4);
 if ((VAR_7 & VAR_3) == 0x0) {
  FUNC_0(&VAR_5->device,
   "Temperature sensor reading not valid\n");
  return -VAR_2;
 }






 VAR_7 = FUNC_1(VAR_8->sensor);
 VAR_7 = (VAR_7 >> VAR_1) & VAR_0;
 *VAR_6 = ((3220000000UL - (10000000UL * VAR_7)) / 13625);

 return 0;
}
