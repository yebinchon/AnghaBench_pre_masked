
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rfkill {int dummy; } ;
struct asus_wmi {TYPE_3__* driver; TYPE_1__* platform_device; } ;
struct asus_rfkill {int dev_id; struct asus_wmi* asus; struct rfkill* rfkill; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
struct TYPE_6__ {TYPE_2__* quirks; } ;
struct TYPE_5__ {scalar_t__ wapf; scalar_t__ hotplug_wireless; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asus_wmi*,int) ;
 struct rfkill* FUNC_1 (char const*,int *,int,int *,struct asus_rfkill*) ;
 int FUNC_2 (struct rfkill*) ;
 int FUNC_3 (struct rfkill*,int) ;
 int FUNC_4 (struct rfkill*) ;
 int FUNC_5 (struct rfkill*,char*) ;

__attribute__((used)) static int FUNC_6(struct asus_wmi *VAR_4,
      struct asus_rfkill *VAR_5,
      const char *VAR_6, enum rfkill_type VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_0(VAR_4, VAR_8);
 struct rfkill **VAR_10 = &VAR_5->rfkill;

 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->dev_id = VAR_8;
 VAR_5->asus = VAR_4;

 if (VAR_8 == VAR_0 &&
     VAR_4->driver->quirks->hotplug_wireless)
  *VAR_10 = FUNC_1(VAR_6, &VAR_4->platform_device->dev, VAR_7,
           &VAR_3, VAR_5);
 else
  *VAR_10 = FUNC_1(VAR_6, &VAR_4->platform_device->dev, VAR_7,
           &VAR_2, VAR_5);

 if (!*VAR_10)
  return -VAR_1;

 if ((VAR_8 == VAR_0) &&
   (VAR_4->driver->quirks->wapf > 0))
  FUNC_5(*VAR_10, "asus-wlan");

 FUNC_3(*VAR_10, !VAR_9);
 VAR_9 = FUNC_4(*VAR_10);
 if (VAR_9) {
  FUNC_2(*VAR_10);
  *VAR_10 = ((void*)0);
  return VAR_9;
 }
 return 0;
}
