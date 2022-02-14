
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ccw_driver {struct ccw_device_id* ids; } ;
struct ccw_device_id {int driver_info; } ;
struct TYPE_2__ {int driver_info; } ;
struct ccw_device {TYPE_1__ id; } ;


 struct ccw_device_id* FUNC_0 (struct ccw_device_id const*,TYPE_1__*) ;
 struct ccw_device* FUNC_1 (struct device*) ;
 struct ccw_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int
FUNC_3 (struct device * VAR_0, struct device_driver * VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_1(VAR_0);
 struct ccw_driver *VAR_3 = FUNC_2(VAR_1);
 const struct ccw_device_id *VAR_4 = VAR_3->ids, *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4, &VAR_2->id);
 if (!VAR_5)
  return 0;

 VAR_2->id.driver_info = VAR_5->driver_info;

 return 1;
}
