
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bInterfaceSubClass; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int desc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct usb_host_interface *VAR_0)
{


 if (VAR_0->desc.bInterfaceSubClass != 0 &&
     VAR_0->desc.bInterfaceSubClass != 1)
  return 0;


 if (VAR_0->desc.bNumEndpoints != 1)
  return 0;


 if (!FUNC_0(&VAR_0->endpoint[0].desc))
  return 0;

        return 1;
}
