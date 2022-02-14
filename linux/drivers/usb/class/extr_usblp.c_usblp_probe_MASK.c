
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usblp {int present; size_t current_protocol; int intf; struct usblp* device_id_string; struct usblp* statusbuf; struct usblp* readbuf; struct usb_device* dev; TYPE_3__* protocol; int ifnum; scalar_t__ bidir; int minor; int quirks; int urbs; int wwait; int rwait; int lock; int mut; int wmut; } ;
struct usb_interface {int dev; int minor; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_8__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_4__ descriptor; int devnum; } ;
struct TYPE_7__ {int alt_setting; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int ,char*,int ,int ,int ,size_t,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usblp*) ;
 void* FUNC_7 (int ,int ) ;
 struct usblp* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct usb_interface*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_interface*,int *) ;
 int FUNC_15 (struct usb_interface*,struct usblp*) ;
 int FUNC_16 (struct usblp*) ;
 int FUNC_17 (struct usblp*,int ) ;
 int VAR_7 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct usblp*) ;
 scalar_t__ FUNC_20 (struct usblp*,int) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_8,
         const struct usb_device_id *VAR_9)
{
 struct usb_device *VAR_10 = FUNC_5(VAR_8);
 struct usblp *VAR_11;
 int VAR_12;
 int VAR_13;



 VAR_11 = FUNC_8(sizeof(struct usblp), VAR_2);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto abort_ret;
 }
 VAR_11->dev = VAR_10;
 FUNC_10(&VAR_11->wmut);
 FUNC_10(&VAR_11->mut);
 FUNC_11(&VAR_11->lock);
 FUNC_4(&VAR_11->rwait);
 FUNC_4(&VAR_11->wwait);
 FUNC_3(&VAR_11->urbs);
 VAR_11->ifnum = VAR_8->cur_altsetting->desc.bInterfaceNumber;
 VAR_11->intf = FUNC_12(VAR_8);




 if (!(VAR_11->device_id_string = FUNC_7(VAR_5, VAR_2))) {
  VAR_13 = -VAR_1;
  goto abort;
 }






 if (!(VAR_11->readbuf = FUNC_7(VAR_4, VAR_2))) {
  VAR_13 = -VAR_1;
  goto abort;
 }


 VAR_11->statusbuf = FUNC_7(VAR_3, VAR_2);
 if (!VAR_11->statusbuf) {
  VAR_13 = -VAR_1;
  goto abort;
 }


 VAR_11->quirks = FUNC_18(
  FUNC_9(VAR_10->descriptor.idVendor),
  FUNC_9(VAR_10->descriptor.idProduct));


 VAR_12 = FUNC_19(VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(&VAR_8->dev,
   "incompatible printer-class device 0x%4.4X/0x%4.4X\n",
   FUNC_9(VAR_10->descriptor.idVendor),
   FUNC_9(VAR_10->descriptor.idProduct));
  VAR_13 = -VAR_0;
  goto abort;
 }


 if (FUNC_20(VAR_11, VAR_12) < 0) {
  VAR_13 = -VAR_0;
  goto abort;
 }


 FUNC_16(VAR_11);





 FUNC_15(VAR_8, VAR_11);

 VAR_11->present = 1;

 VAR_13 = FUNC_14(VAR_8, &VAR_7);
 if (VAR_13) {
  FUNC_1(&VAR_8->dev,
   "usblp: Not able to get a minor (base %u, slice default): %d\n",
   VAR_6, VAR_13);
  goto abort_intfdata;
 }
 VAR_11->minor = VAR_8->minor;
 FUNC_2(&VAR_8->dev,
  "usblp%d: USB %sdirectional printer dev %d if %d alt %d proto %d vid 0x%4.4X pid 0x%4.4X\n",
  VAR_11->minor, VAR_11->bidir ? "Bi" : "Uni", VAR_10->devnum,
  VAR_11->ifnum,
  VAR_11->protocol[VAR_11->current_protocol].alt_setting,
  VAR_11->current_protocol,
  FUNC_9(VAR_11->dev->descriptor.idVendor),
  FUNC_9(VAR_11->dev->descriptor.idProduct));

 return 0;

abort_intfdata:
 FUNC_15(VAR_8, ((void*)0));
abort:
 FUNC_6(VAR_11->readbuf);
 FUNC_6(VAR_11->statusbuf);
 FUNC_6(VAR_11->device_id_string);
 FUNC_13(VAR_11->intf);
 FUNC_6(VAR_11);
abort_ret:
 return VAR_13;
}
