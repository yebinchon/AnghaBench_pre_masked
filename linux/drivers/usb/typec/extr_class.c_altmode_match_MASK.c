
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_device_id {scalar_t__ svid; scalar_t__ mode; } ;
struct typec_altmode {scalar_t__ svid; scalar_t__ mode; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct typec_altmode* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct typec_altmode *VAR_2 = FUNC_1(VAR_0);
 struct typec_device_id *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;

 return ((VAR_2->svid == VAR_3->svid) && (VAR_2->mode == VAR_3->mode));
}
