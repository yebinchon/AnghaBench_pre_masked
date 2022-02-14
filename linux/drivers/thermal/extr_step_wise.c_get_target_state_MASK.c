
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_instance {unsigned long target; unsigned long upper; unsigned long lower; int initialized; struct thermal_cooling_device* cdev; } ;
struct thermal_cooling_device {int device; TYPE_1__* ops; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;
struct TYPE_2__ {int (* get_cur_state ) (struct thermal_cooling_device*,unsigned long*) ;} ;


 unsigned long VAR_0 ;




 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (struct thermal_cooling_device*,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(struct thermal_instance *VAR_1,
    enum thermal_trend VAR_2, bool VAR_3)
{
 struct thermal_cooling_device *VAR_4 = VAR_1->cdev;
 unsigned long VAR_5;
 unsigned long VAR_6;






 VAR_4->ops->get_cur_state(VAR_4, &VAR_5);
 VAR_6 = VAR_1->target;
 FUNC_0(&VAR_4->device, "cur_state=%ld\n", VAR_5);

 if (!VAR_1->initialized) {
  if (VAR_3) {
   VAR_6 = (VAR_5 + 1) >= VAR_1->upper ?
     VAR_1->upper :
     ((VAR_5 + 1) < VAR_1->lower ?
     VAR_1->lower : (VAR_5 + 1));
  } else {
   VAR_6 = VAR_0;
  }

  return VAR_6;
 }

 switch (VAR_2) {
 case 128:
  if (VAR_3) {
   VAR_6 = VAR_5 < VAR_1->upper ?
        (VAR_5 + 1) : VAR_1->upper;
   if (VAR_6 < VAR_1->lower)
    VAR_6 = VAR_1->lower;
  }
  break;
 case 129:
  if (VAR_3)
   VAR_6 = VAR_1->upper;
  break;
 case 131:
  if (VAR_5 <= VAR_1->lower) {
   if (!VAR_3)
    VAR_6 = VAR_0;
  } else {
   if (!VAR_3) {
    VAR_6 = VAR_5 - 1;
    if (VAR_6 > VAR_1->upper)
     VAR_6 = VAR_1->upper;
   }
  }
  break;
 case 130:
  if (VAR_5 == VAR_1->lower) {
   if (!VAR_3)
    VAR_6 = VAR_0;
  } else
   VAR_6 = VAR_1->lower;
  break;
 default:
  break;
 }

 return VAR_6;
}
