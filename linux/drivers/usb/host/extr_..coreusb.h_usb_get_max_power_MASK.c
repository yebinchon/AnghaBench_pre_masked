
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bMaxPower; } ;
struct usb_host_config {TYPE_1__ desc; } ;
struct usb_device {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(struct usb_device *VAR_1,
  struct usb_host_config *VAR_2)
{

 unsigned VAR_3 = (VAR_1->speed >= VAR_0 ? 8 : 2);

 return VAR_2->desc.bMaxPower * VAR_3;
}
