
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_device_id {scalar_t__ svid; scalar_t__ mode; } ;
struct typec_altmode_driver {struct typec_device_id* id_table; } ;
struct typec_altmode {scalar_t__ svid; scalar_t__ mode; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct typec_altmode_driver* FUNC_0 (struct device_driver*) ;
 struct typec_altmode* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct typec_altmode_driver *VAR_3 = FUNC_0(VAR_2);
 struct typec_altmode *VAR_4 = FUNC_1(VAR_1);
 const struct typec_device_id *VAR_5;

 for (VAR_5 = VAR_3->id_table; VAR_5->svid; VAR_5++)
  if (VAR_5->svid == VAR_4->svid &&
      (VAR_5->mode == VAR_0 || VAR_5->mode == VAR_4->mode))
   return 1;
 return 0;
}
