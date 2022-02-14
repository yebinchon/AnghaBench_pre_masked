
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct TYPE_4__ {TYPE_1__* endpoint; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;



__attribute__((used)) static inline
struct usb_endpoint_descriptor *FUNC_0(struct usb_interface *VAR_0, int VAR_1)
{
 return &VAR_0->cur_altsetting->endpoint[VAR_1].desc;
}
