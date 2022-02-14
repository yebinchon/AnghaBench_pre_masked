
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_hcd {struct vhci_device* vdev; } ;
struct vhci_device {int ud; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 struct vhci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct usb_hcd *VAR_3)
{
 struct vhci_hcd *VAR_4 = FUNC_3(VAR_3);
 int VAR_5, VAR_6;

 FUNC_6("stop VHCI controller\n");


 VAR_5 = FUNC_2(FUNC_1(VAR_3));
 if (VAR_5 == 0 && FUNC_5(VAR_3)) {
  FUNC_4(&FUNC_0(VAR_3)->kobj, &VAR_2);
  FUNC_9();
 }


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct vhci_device *VAR_7 = &VAR_4->vdev[VAR_6];

  FUNC_7(&VAR_7->ud, VAR_0);
  FUNC_8(&VAR_7->ud);
 }
}
