
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {int maxchild; } ;
struct TYPE_2__ {scalar_t__ child; } ;


 int FUNC_0 (scalar_t__*) ;
 struct usb_hub* FUNC_1 (struct usb_device*) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_0)
{
 struct usb_hub *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->maxchild; VAR_2++) {
  if (VAR_1->ports[VAR_2]->child)
   FUNC_0(&VAR_1->ports[VAR_2]->child);
 }
}
