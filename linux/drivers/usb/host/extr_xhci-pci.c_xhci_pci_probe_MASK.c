
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_hcd {int quirks; TYPE_1__* shared_hcd; int hcc_params; } ;
struct usb_hcd {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct hc_driver {int dummy; } ;
struct TYPE_4__ {int can_do_streams; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_hcd* FUNC_1 (int *) ;
 struct xhci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_8 (struct hc_driver*,int *,int ,struct usb_hcd*) ;
 int FUNC_9 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct xhci_hcd*) ;
 int FUNC_13 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 int VAR_7;
 struct xhci_hcd *VAR_8;
 struct hc_driver *VAR_9;
 struct usb_hcd *VAR_10;

 VAR_9 = (struct hc_driver *)VAR_6->driver_data;


 FUNC_5(&VAR_5->dev);







 VAR_7 = FUNC_9(VAR_5, VAR_6);

 if (VAR_7)
  goto put_runtime_pm;


 VAR_10 = FUNC_1(&VAR_5->dev);
 VAR_8 = FUNC_2(VAR_10);
 VAR_8->shared_hcd = FUNC_8(VAR_9, &VAR_5->dev,
    FUNC_3(VAR_5), VAR_10);
 if (!VAR_8->shared_hcd) {
  VAR_7 = -VAR_0;
  goto dealloc_usb2_hcd;
 }

 VAR_7 = FUNC_12(VAR_8);
 if (VAR_7)
  goto put_usb3_hcd;

 VAR_7 = FUNC_7(VAR_8->shared_hcd, VAR_5->irq,
   VAR_1);
 if (VAR_7)
  goto put_usb3_hcd;


 if (!(VAR_8->quirks & VAR_2) &&
   FUNC_0(VAR_8->hcc_params) >= 4)
  VAR_8->shared_hcd->can_do_streams = 1;

 if (VAR_8->quirks & VAR_4)
  FUNC_13(VAR_5);


 FUNC_6(&VAR_5->dev);

 if (VAR_8->quirks & VAR_3)
  FUNC_4(&VAR_5->dev);

 return 0;

put_usb3_hcd:
 FUNC_11(VAR_8->shared_hcd);
dealloc_usb2_hcd:
 FUNC_10(VAR_5);
put_runtime_pm:
 FUNC_6(&VAR_5->dev);
 return VAR_7;
}
