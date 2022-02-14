
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {int maxchild; scalar_t__ state; int active_duration; } ;
struct TYPE_2__ {struct usb_device* child; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_hub* FUNC_0 (struct usb_device*) ;

__attribute__((used)) static void FUNC_1(struct usb_device *VAR_3)
{
 struct usb_hub *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->maxchild; ++VAR_5) {
  if (VAR_4->ports[VAR_5]->child)
   FUNC_1(VAR_4->ports[VAR_5]->child);
 }
 if (VAR_3->state == VAR_1)
  VAR_3->active_duration -= VAR_2;
 VAR_3->state = VAR_0;
}
