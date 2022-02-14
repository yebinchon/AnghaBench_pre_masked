
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bDeviceClass; } ;
struct usb_device {scalar_t__ speed; int hub_delay; TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

int FUNC_2(struct usb_device *VAR_7)
{

 if (VAR_7->descriptor.bDeviceClass == VAR_0)
  return 0;


 if (VAR_7->speed < VAR_5)
  return 0;

 return FUNC_0(VAR_7, FUNC_1(VAR_7, 0),
   VAR_4,
   VAR_2 | VAR_6 | VAR_3,
   VAR_7->hub_delay, 0, ((void*)0), 0,
   VAR_1);
}
