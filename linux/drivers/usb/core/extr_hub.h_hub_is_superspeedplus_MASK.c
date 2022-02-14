
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bDeviceProtocol; int bcdUSB; } ;
struct usb_device {TYPE_2__* bos; TYPE_1__ descriptor; } ;
struct TYPE_4__ {scalar_t__ ssp_cap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct usb_device *VAR_1)
{
 return (VAR_1->descriptor.bDeviceProtocol == VAR_0 &&
  FUNC_0(VAR_1->descriptor.bcdUSB) >= 0x0310 &&
  VAR_1->bos->ssp_cap);
}
