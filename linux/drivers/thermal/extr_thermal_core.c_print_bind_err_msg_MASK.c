
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int type; int device; } ;
struct thermal_cooling_device {int type; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;

__attribute__((used)) static inline
void FUNC_1(struct thermal_zone_device *VAR_0,
   struct thermal_cooling_device *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0->device, "binding zone %s with cdev %s failed:%d\n",
  VAR_0->type, VAR_1->type, VAR_2);
}
