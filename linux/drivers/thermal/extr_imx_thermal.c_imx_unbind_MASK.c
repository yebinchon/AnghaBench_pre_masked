
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int type; int device; } ;
struct thermal_cooling_device {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (struct thermal_zone_device*,int ,struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
        struct thermal_cooling_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->device,
   "unbinding zone %s with cdev %s failed:%d\n",
   VAR_1->type, VAR_2->type, VAR_3);
  return VAR_3;
 }

 return 0;
}
