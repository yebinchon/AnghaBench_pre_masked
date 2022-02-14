
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct clock_cooling_device* devdata; } ;
struct clock_cooling_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct clock_cooling_device*,unsigned long,unsigned long*,int ) ;

unsigned long FUNC_1(struct thermal_cooling_device *VAR_2,
          unsigned long VAR_3)
{
 struct clock_cooling_device *VAR_4 = VAR_2->devdata;
 unsigned long VAR_5;

 if (FUNC_0(VAR_4, (unsigned long)VAR_3, &VAR_5,
           VAR_0))
  return VAR_1;

 return VAR_5;
}
