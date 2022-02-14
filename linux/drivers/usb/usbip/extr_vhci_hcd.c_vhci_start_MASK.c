
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vhci_hcd {int seqnum; struct vhci_device* vdev; TYPE_1__* vhci; } ;
struct vhci_device {int rhport; } ;
struct TYPE_6__ {int otg_port; } ;
struct usb_hcd {int uses_new_polling; TYPE_2__ self; scalar_t__ power_budget; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_5__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 TYPE_3__* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ) ;
 struct vhci_hcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (struct usb_hcd*) ;
 int FUNC_11 (char*) ;
 int VAR_2 ;
 int FUNC_12 (struct vhci_device*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct usb_hcd *VAR_3)
{
 struct vhci_hcd *VAR_4 = FUNC_5(VAR_3);
 int VAR_5, VAR_6;
 int VAR_7;

 FUNC_11("enter vhci_start\n");

 if (FUNC_10(VAR_3))
  FUNC_8(&VAR_4->vhci->lock);



 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct vhci_device *VAR_8 = &VAR_4->vdev[VAR_6];

  FUNC_12(VAR_8);
  VAR_8->rhport = VAR_6;
 }

 FUNC_0(&VAR_4->seqnum, 0);

 VAR_3->power_budget = 0;
 VAR_3->uses_new_polling = 1;





 VAR_5 = FUNC_4(FUNC_3(VAR_3));
 if (VAR_5 < 0) {
  FUNC_6("invalid vhci name %s\n", FUNC_3(VAR_3));
  return -VAR_0;
 }


 if (VAR_5 == 0 && FUNC_10(VAR_3)) {
  VAR_7 = FUNC_14();
  if (VAR_7) {
   FUNC_1(FUNC_2(VAR_3), "init attr group failed, err = %d\n", VAR_7);
   return VAR_7;
  }
  VAR_7 = FUNC_9(&FUNC_2(VAR_3)->kobj, &VAR_2);
  if (VAR_7) {
   FUNC_1(FUNC_2(VAR_3), "create sysfs files failed, err = %d\n", VAR_7);
   FUNC_13();
   return VAR_7;
  }
  FUNC_7("created sysfs %s\n", FUNC_3(VAR_3));
 }

 return 0;
}
