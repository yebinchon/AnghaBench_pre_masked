
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {scalar_t__ ports_max; int uwb_rc; int set_gtk; int set_ptk; int set_num_dnts; int bwa_set; int dev_info_set; int mmcie_rm; int mmcie_add; int stop; int start; int mmcies_max; struct device* dev; } ;
struct whc {scalar_t__ n_devices; struct umc_dev* umc; int n_mmc_ies; } ;
struct TYPE_2__ {int sg_tablesize; int controller; } ;
struct usb_hcd {int wireless; TYPE_1__ self; } ;
struct device {int parent; } ;
struct umc_dev {int irq; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_4 (int *,struct device*,char*) ;
 struct wusbhc* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (struct whc*) ;
 int FUNC_11 (struct whc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct whc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct wusbhc*) ;
 int FUNC_14 (struct wusbhc*) ;
 int FUNC_15 (struct wusbhc*) ;
 struct whc* FUNC_16 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_17(struct umc_dev *VAR_14)
{
 int VAR_15;
 struct usb_hcd *VAR_16;
 struct wusbhc *VAR_17;
 struct whc *VAR_18;
 struct device *VAR_19 = &VAR_14->dev;

 VAR_16 = FUNC_4(&VAR_6, VAR_19, "whci");
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_19, "unable to create hcd\n");
  return -VAR_1;
 }

 VAR_16->wireless = 1;
 VAR_16->self.sg_tablesize = 2048;

 VAR_17 = FUNC_5(VAR_16);
 VAR_18 = FUNC_16(VAR_17);
 VAR_18->umc = VAR_14;

 VAR_15 = FUNC_12(VAR_18);
 if (VAR_15)
  goto error_whc_init;

 VAR_17->dev = VAR_19;
 VAR_17->uwb_rc = FUNC_8(VAR_14->dev.parent);
 if (!VAR_17->uwb_rc) {
  VAR_15 = -VAR_0;
  FUNC_0(VAR_19, "cannot get radio controller\n");
  goto error_uwb_rc;
 }

 if (VAR_18->n_devices > VAR_3) {
  FUNC_1(VAR_19, "USB_MAXCHILDREN too low for WUSB adapter (%u ports)\n",
    VAR_18->n_devices);
  VAR_17->ports_max = VAR_3;
 } else
  VAR_17->ports_max = VAR_18->n_devices;
 VAR_17->mmcies_max = VAR_18->n_mmc_ies;
 VAR_17->start = VAR_12;
 VAR_17->stop = VAR_13;
 VAR_17->mmcie_add = VAR_7;
 VAR_17->mmcie_rm = VAR_8;
 VAR_17->dev_info_set = VAR_5;
 VAR_17->bwa_set = VAR_4;
 VAR_17->set_num_dnts = VAR_10;
 VAR_17->set_ptk = VAR_11;
 VAR_17->set_gtk = VAR_9;

 VAR_15 = FUNC_14(VAR_17);
 if (VAR_15)
  goto error_wusbhc_create;

 VAR_15 = FUNC_3(VAR_16, VAR_18->umc->irq, VAR_2);
 if (VAR_15) {
  FUNC_0(VAR_19, "cannot add HCD: %d\n", VAR_15);
  goto error_usb_add_hcd;
 }
 FUNC_2(VAR_16->self.controller);

 VAR_15 = FUNC_13(VAR_17);
 if (VAR_15) {
  FUNC_0(VAR_19, "WUSBHC phase B setup failed: %d\n", VAR_15);
  goto error_wusbhc_b_create;
 }

 FUNC_11(VAR_18);

 return 0;

error_wusbhc_b_create:
 FUNC_7(VAR_16);
error_usb_add_hcd:
 FUNC_15(VAR_17);
error_wusbhc_create:
 FUNC_9(VAR_17->uwb_rc);
error_uwb_rc:
 FUNC_10(VAR_18);
error_whc_init:
 FUNC_6(VAR_16);
 return VAR_15;
}
