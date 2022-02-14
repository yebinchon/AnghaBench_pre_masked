
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {int amd_resume_bug; TYPE_1__ self; void* rsrc_len; void* rsrc_start; int * regs; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; scalar_t__ class; int dev; } ;
struct hc_driver {int flags; int description; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int *,struct usb_hcd*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,void*,void*) ;
 int FUNC_5 (int *,void*,void*,int ) ;
 scalar_t__ FUNC_6 (int *,void*,void*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct pci_dev*,struct usb_hcd*,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 scalar_t__ FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int) ;
 void* FUNC_15 (struct pci_dev*,int) ;
 void* FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_22 (struct hc_driver*,int *,int ) ;
 scalar_t__ FUNC_23 () ;
 scalar_t__ FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct usb_hcd*) ;

int FUNC_26(struct pci_dev *VAR_17, const struct pci_device_id *VAR_18)
{
 struct hc_driver *VAR_19;
 struct usb_hcd *VAR_20;
 int VAR_21;
 int VAR_22 = 0;

 if (FUNC_23())
  return -VAR_4;

 if (!VAR_18)
  return -VAR_3;
 VAR_19 = (struct hc_driver *)VAR_18->driver_data;
 if (!VAR_19)
  return -VAR_3;

 if (FUNC_12(VAR_17) < 0)
  return -VAR_4;





 if ((VAR_19->flags & VAR_6) < VAR_9) {
  if (!VAR_17->irq) {
   FUNC_1(&VAR_17->dev,
   "Found HC with no IRQ. Check BIOS/PCI %s setup!\n",
    FUNC_13(VAR_17));
   VAR_21 = -VAR_4;
   goto disable_pci;
  }
  VAR_22 = VAR_17->irq;
 }

 VAR_20 = FUNC_22(VAR_19, &VAR_17->dev, FUNC_13(VAR_17));
 if (!VAR_20) {
  VAR_21 = -VAR_5;
  goto disable_pci;
 }

 VAR_20->amd_resume_bug = (FUNC_24(VAR_17) &&
   VAR_19->flags & (VAR_8 | VAR_9)) ? 1 : 0;

 if (VAR_19->flags & VAR_7) {

  VAR_20->rsrc_start = FUNC_16(VAR_17, 0);
  VAR_20->rsrc_len = FUNC_15(VAR_17, 0);
  if (!FUNC_5(&VAR_17->dev, VAR_20->rsrc_start,
    VAR_20->rsrc_len, VAR_19->description)) {
   FUNC_0(&VAR_17->dev, "controller already in use\n");
   VAR_21 = -VAR_1;
   goto put_hcd;
  }
  VAR_20->regs = FUNC_4(&VAR_17->dev, VAR_20->rsrc_start,
    VAR_20->rsrc_len);
  if (VAR_20->regs == ((void*)0)) {
   FUNC_0(&VAR_17->dev, "error mapping memory\n");
   VAR_21 = -VAR_2;
   goto put_hcd;
  }

 } else {

  int VAR_23;

  for (VAR_23 = 0; VAR_23 < VAR_12; VAR_23++) {
   if (!(FUNC_14(VAR_17, VAR_23) &
     VAR_10))
    continue;

   VAR_20->rsrc_start = FUNC_16(VAR_17, VAR_23);
   VAR_20->rsrc_len = FUNC_15(VAR_17, VAR_23);
   if (FUNC_6(&VAR_17->dev, VAR_20->rsrc_start,
     VAR_20->rsrc_len, VAR_19->description))
    break;
  }
  if (VAR_23 == VAR_12) {
   FUNC_0(&VAR_17->dev, "no i/o regions available\n");
   VAR_21 = -VAR_1;
   goto put_hcd;
  }
 }

 FUNC_17(VAR_17);


 if (VAR_17->class == VAR_0) {
  FUNC_8(&VAR_13);
  FUNC_2(&VAR_17->dev, VAR_20);
  FUNC_9(VAR_17, VAR_20, VAR_15);
  VAR_21 = FUNC_21(VAR_20, VAR_22, VAR_11);
  if (VAR_21 != 0)
   FUNC_2(&VAR_17->dev, ((void*)0));
  FUNC_9(VAR_17, VAR_20, VAR_14);
  FUNC_20(&VAR_13);
 } else {
  FUNC_7(&VAR_13);
  FUNC_2(&VAR_17->dev, VAR_20);
  VAR_21 = FUNC_21(VAR_20, VAR_22, VAR_11);
  if (VAR_21 != 0)
   FUNC_2(&VAR_17->dev, ((void*)0));
  else
   FUNC_9(VAR_17, VAR_20, VAR_16);
  FUNC_19(&VAR_13);
 }

 if (VAR_21 != 0)
  goto put_hcd;
 FUNC_3(VAR_20->self.controller);

 if (FUNC_10(VAR_17))
  FUNC_18(&VAR_17->dev);
 return VAR_21;

put_hcd:
 FUNC_25(VAR_20);
disable_pci:
 FUNC_11(VAR_17);
 FUNC_1(&VAR_17->dev, "init %s fail, %d\n", FUNC_13(VAR_17), VAR_21);
 return VAR_21;
}
