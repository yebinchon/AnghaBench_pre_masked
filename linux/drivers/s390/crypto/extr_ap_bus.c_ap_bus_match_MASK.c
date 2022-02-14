
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ap_driver {struct ap_device_id* ids; } ;
struct ap_device_id {int match_flags; scalar_t__ dev_type; } ;
struct TYPE_2__ {scalar_t__ device_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (struct device*) ;
 struct ap_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct device_driver *VAR_3)
{
 struct ap_driver *VAR_4 = FUNC_3(VAR_3);
 struct ap_device_id *VAR_5;





 for (VAR_5 = VAR_4->ids; VAR_5->match_flags; VAR_5++) {
  if (FUNC_0(VAR_2) &&
      VAR_5->match_flags & VAR_0 &&
      VAR_5->dev_type == FUNC_2(VAR_2)->device_type)
   return 1;
  if (FUNC_1(VAR_2) &&
      VAR_5->match_flags & VAR_1 &&
      VAR_5->dev_type == FUNC_2(VAR_2)->device_type)
   return 1;
 }
 return 0;
}
