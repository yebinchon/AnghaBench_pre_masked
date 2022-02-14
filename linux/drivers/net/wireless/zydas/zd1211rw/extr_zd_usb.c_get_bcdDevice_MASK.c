
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int bcdDevice; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(const struct usb_device *VAR_0)
{
 return FUNC_0(VAR_0->descriptor.bcdDevice);
}
