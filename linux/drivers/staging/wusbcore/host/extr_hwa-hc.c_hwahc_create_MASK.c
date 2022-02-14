
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int ports_max; int set_gtk; int set_ptk; int set_num_dnts; int bwa_set; int dev_info_set; int mmcie_rm; int mmcie_add; int stop; int start; int mmcies_max; int * uwb_rc; struct device* dev; } ;
struct wahc {struct wusbhc* wusb; TYPE_1__* wa_descr; int usb_iface; int usb_dev; } ;
struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct usb_device {int dummy; } ;
struct hwahc {struct wusbhc wusbhc; struct wahc wa; } ;
typedef int kernel_ulong_t ;
struct TYPE_2__ {scalar_t__ bNumPorts; int bNumMMCIEs; } ;


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
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hwahc*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct wahc*,struct usb_interface*,int ) ;
 int FUNC_8 (struct wahc*) ;
 int FUNC_9 (struct wusbhc*) ;
 int FUNC_10 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_11(struct hwahc *VAR_10, struct usb_interface *VAR_11,
 kernel_ulong_t VAR_12)
{
 int VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 struct wusbhc *VAR_15 = &VAR_10->wusbhc;
 struct wahc *VAR_16 = &VAR_10->wa;
 struct usb_device *VAR_17 = FUNC_2(VAR_11);

 VAR_16->usb_dev = FUNC_3(VAR_17);
 VAR_16->usb_iface = FUNC_4(VAR_11);
 VAR_15->dev = VAR_14;


 VAR_15->uwb_rc = ((void*)0);
 VAR_13 = FUNC_8(VAR_16);
 if (VAR_13 < 0)
  goto error_fill_descriptor;
 if (VAR_16->wa_descr->bNumPorts > VAR_0) {
  FUNC_0(VAR_14, "FIXME: USB_MAXCHILDREN too low for WUSB "
   "adapter (%u ports)\n", VAR_16->wa_descr->bNumPorts);
  VAR_15->ports_max = VAR_0;
 } else {
  VAR_15->ports_max = VAR_16->wa_descr->bNumPorts;
 }
 VAR_15->mmcies_max = VAR_16->wa_descr->bNumMMCIEs;
 VAR_15->start = VAR_8;
 VAR_15->stop = VAR_9;
 VAR_15->mmcie_add = VAR_3;
 VAR_15->mmcie_rm = VAR_4;
 VAR_15->dev_info_set = VAR_2;
 VAR_15->bwa_set = VAR_1;
 VAR_15->set_num_dnts = VAR_6;
 VAR_15->set_ptk = VAR_7;
 VAR_15->set_gtk = VAR_5;
 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(VAR_14, "Can't initialize security: %d\n", VAR_13);
  goto error_security_create;
 }
 VAR_16->wusb = VAR_15;
 VAR_13 = FUNC_9(&VAR_10->wusbhc);
 if (VAR_13 < 0) {
  FUNC_0(VAR_14, "Can't create WUSB HC structures: %d\n", VAR_13);
  goto error_wusbhc_create;
 }
 VAR_13 = FUNC_7(&VAR_10->wa, VAR_11, VAR_12);
 if (VAR_13 < 0)
  goto error_wa_create;
 return 0;

error_wa_create:
 FUNC_10(&VAR_10->wusbhc);
error_wusbhc_create:

error_security_create:
error_fill_descriptor:
 FUNC_6(VAR_11);
 FUNC_5(VAR_17);
 return VAR_13;
}
