
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bDeviceProtocol; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct usb_device *VAR_1)
{
 return VAR_1->descriptor.bDeviceProtocol == VAR_0;
}
