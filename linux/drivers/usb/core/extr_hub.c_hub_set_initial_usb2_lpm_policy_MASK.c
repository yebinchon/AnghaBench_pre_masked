
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hub {TYPE_3__** ports; } ;
struct usb_device {int portnum; int usb2_hw_lpm_allowed; TYPE_2__* bos; int usb2_hw_lpm_capable; int parent; } ;
struct TYPE_6__ {int connect_type; } ;
struct TYPE_5__ {TYPE_1__* ext_cap; } ;
struct TYPE_4__ {int bmAttributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*) ;
 struct usb_hub* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_3)
{
 struct usb_hub *VAR_4 = FUNC_2(VAR_3->parent);
 int VAR_5 = VAR_2;

 if (!VAR_3->usb2_hw_lpm_capable || !VAR_3->bos)
  return;

 if (VAR_4)
  VAR_5 = VAR_4->ports[VAR_3->portnum - 1]->connect_type;

 if ((VAR_3->bos->ext_cap->bmAttributes & FUNC_0(VAR_0)) ||
   VAR_5 == VAR_1) {
  VAR_3->usb2_hw_lpm_allowed = 1;
  FUNC_1(VAR_3);
 }
}
