
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u132_udev {scalar_t__ enumeration; scalar_t__ usb_addr; int * usb_device; scalar_t__ udev_number; } ;
struct kref {int dummy; } ;


 struct u132_udev* FUNC_0 (struct kref*) ;

__attribute__((used)) static void FUNC_1(struct kref *VAR_0)
{
 struct u132_udev *VAR_1 = FUNC_0(VAR_0);
 VAR_1->udev_number = 0;
 VAR_1->usb_device = ((void*)0);
 VAR_1->usb_addr = 0;
 VAR_1->enumeration = 0;
}
