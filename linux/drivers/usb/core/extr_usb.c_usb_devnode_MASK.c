
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct usb_device {int devnum; TYPE_1__* bus; } ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {int busnum; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ,int ) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1,
    umode_t *VAR_2, kuid_t *VAR_3, kgid_t *VAR_4)
{
 struct usb_device *VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 return FUNC_0(VAR_0, "bus/usb/%03d/%03d",
    VAR_5->bus->busnum, VAR_5->devnum);
}
