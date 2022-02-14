
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct __thermal_zone*) ;

int FUNC_1(struct thermal_zone_device *VAR_1)
{
 struct __thermal_zone *VAR_2 = VAR_1->devdata;

 if (!VAR_2 || FUNC_0(VAR_2))
  return -VAR_0;

 return VAR_2->ntrips;
}
