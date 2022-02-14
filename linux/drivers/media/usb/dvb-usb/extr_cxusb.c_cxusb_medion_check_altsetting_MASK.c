
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {int bEndpointAddress; int bmAttributes; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct usb_host_interface *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->desc.bNumEndpoints; VAR_5++) {
  if ((VAR_4->endpoint[VAR_5].desc.bEndpointAddress &
       VAR_1) != 2)
   continue;

  if (VAR_4->endpoint[VAR_5].desc.bEndpointAddress & VAR_0 &&
      ((VAR_4->endpoint[VAR_5].desc.bmAttributes &
        VAR_2) == VAR_3))
   return 1;

  break;
 }

 return 0;
}
