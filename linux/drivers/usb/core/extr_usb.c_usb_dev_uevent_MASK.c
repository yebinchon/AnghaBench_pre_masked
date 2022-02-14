
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int devnum; TYPE_1__* bus; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int busnum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct usb_device *VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "BUSNUM=%03d", VAR_3->bus->busnum))
  return -VAR_0;

 if (FUNC_0(VAR_2, "DEVNUM=%03d", VAR_3->devnum))
  return -VAR_0;

 return 0;
}
