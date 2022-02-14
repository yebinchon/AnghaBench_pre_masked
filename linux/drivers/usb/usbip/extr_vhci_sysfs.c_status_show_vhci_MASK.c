
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vhci_hcd {struct vhci* vhci; } ;
struct TYPE_7__ {int lock; } ;
struct vhci_device {TYPE_3__ ud; } ;
struct vhci {int lock; TYPE_2__* vhci_hcd_ss; TYPE_1__* vhci_hcd_hs; } ;
struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {struct platform_device* pdev; } ;
struct TYPE_6__ {struct vhci_device* vdev; } ;
struct TYPE_5__ {struct vhci_device* vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vhci_hcd* FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (char**,int ,int,struct vhci_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static ssize_t FUNC_8(int VAR_5, char *VAR_6)
{
 struct platform_device *VAR_7 = VAR_4[VAR_5].pdev;
 struct vhci *VAR_8;
 struct usb_hcd *VAR_9;
 struct vhci_hcd *VAR_10;
 char *VAR_11 = VAR_6;
 int VAR_12;
 unsigned long VAR_13;

 if (!VAR_7 || !VAR_6) {
  FUNC_7("show status error\n");
  return 0;
 }

 VAR_9 = FUNC_1(VAR_7);
 VAR_10 = FUNC_0(VAR_9);
 VAR_8 = VAR_10->vhci;

 FUNC_4(&VAR_8->lock, VAR_13);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  struct vhci_device *VAR_14 = &VAR_8->vhci_hcd_hs->vdev[VAR_12];

  FUNC_3(&VAR_14->ud.lock);
  FUNC_2(&VAR_6, VAR_0,
          VAR_5 * VAR_3 + VAR_12, VAR_14);
  FUNC_5(&VAR_14->ud.lock);
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  struct vhci_device *VAR_15 = &VAR_8->vhci_hcd_ss->vdev[VAR_12];

  FUNC_3(&VAR_15->ud.lock);
  FUNC_2(&VAR_6, VAR_1,
          VAR_5 * VAR_3 + VAR_2 + VAR_12, VAR_15);
  FUNC_5(&VAR_15->ud.lock);
 }

 FUNC_6(&VAR_8->lock, VAR_13);

 return VAR_6 - VAR_11;
}
