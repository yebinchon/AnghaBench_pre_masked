
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int type; int device; } ;
struct thermal_cooling_device {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (struct thermal_zone_device*,int ,struct thermal_cooling_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_3,
      struct thermal_cooling_device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_4,
            VAR_1,
            VAR_1,
            VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_3->device,
   "binding zone %s with cdev %s failed:%d\n",
   VAR_3->type, VAR_4->type, VAR_5);
  return VAR_5;
 }

 return 0;
}
