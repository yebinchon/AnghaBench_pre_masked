
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {scalar_t__ state; int quirks; int dev; int active_duration; TYPE_2__* actconfig; scalar_t__ parent; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;
struct TYPE_3__ {int bmAttributes; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct usb_device *VAR_7,
  enum usb_device_state VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = -1;

 FUNC_2(&VAR_5, VAR_9);
 if (VAR_7->state == VAR_3)
  ;
 else if (VAR_8 != VAR_3) {




  if (VAR_7->parent) {
   if (VAR_7->state == VAR_4
     || VAR_8 == VAR_4)
    ;
   else if (VAR_8 == VAR_2)
    VAR_10 = (VAR_7->quirks &
     VAR_1) ? 0 :
     VAR_7->actconfig->desc.bmAttributes &
     VAR_0;
   else
    VAR_10 = 0;
  }
  if (VAR_7->state == VAR_4 &&
   VAR_8 != VAR_4)
   VAR_7->active_duration -= VAR_6;
  else if (VAR_8 == VAR_4 &&
    VAR_7->state != VAR_4)
   VAR_7->active_duration += VAR_6;
  VAR_7->state = VAR_8;
 } else
  FUNC_1(VAR_7);
 FUNC_3(&VAR_5, VAR_9);
 if (VAR_10 >= 0)
  FUNC_0(&VAR_7->dev, VAR_10);
}
