
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__* hdev; } ;
struct usb_hcd {int wireless; } ;
struct TYPE_2__ {int bus; int * parent; } ;


 struct usb_hcd* FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(struct usb_hub *VAR_0)
{
 struct usb_hcd *VAR_1;
 if (VAR_0->hdev->parent != ((void*)0))
  return 0;
 VAR_1 = FUNC_0(VAR_0->hdev->bus);
 return VAR_1->wireless;
}
