
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct usb_device *VAR_2)
{
 return ((FUNC_0(VAR_2->descriptor.idVendor) == VAR_1) &&
  (FUNC_0(VAR_2->descriptor.idProduct) == VAR_0));
}
