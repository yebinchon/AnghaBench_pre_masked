
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* governor; int type; int device; } ;
struct TYPE_2__ {int name; scalar_t__ (* bind_to_tz ) (struct thermal_zone_device*) ;} ;


 int FUNC_0 (int *,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_0,
       const char *VAR_1)
{
 if (VAR_0->governor && VAR_0->governor->bind_to_tz) {
  if (VAR_0->governor->bind_to_tz(VAR_0)) {
   FUNC_0(&VAR_0->device,
    "governor %s failed to bind and the previous one (%s) failed to bind again, thermal zone %s has no governor\n",
    VAR_1, VAR_0->governor->name, VAR_0->type);
   VAR_0->governor = ((void*)0);
  }
 }
}
