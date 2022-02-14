
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbduxfast_private {void* inbuf; int urb; void* duxbuf; int mut; } ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {scalar_t__ speed; int dev; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int cancel; int do_cmd; int do_cmdtest; int insn_read; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int class_dev; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct usbduxfast_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int *,int ,int ,int ) ;
 struct usb_device* FUNC_3 (struct comedi_device*) ;
 struct usb_interface* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct usb_device*,int ,int) ;
 int FUNC_10 (struct usb_interface*,struct usbduxfast_private*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_17,
      unsigned long VAR_18)
{
 struct usb_interface *VAR_19 = FUNC_4(VAR_17);
 struct usb_device *VAR_20 = FUNC_3(VAR_17);
 struct usbduxfast_private *VAR_21;
 struct comedi_subdevice *VAR_22;
 int VAR_23;

 if (VAR_20->speed != VAR_10) {
  FUNC_5(VAR_17->class_dev,
   "This driver needs USB 2.0 to operate. Aborting...\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_0(VAR_17, sizeof(*VAR_21));
 if (!VAR_21)
  return -VAR_2;

 FUNC_7(&VAR_21->mut);
 FUNC_10(VAR_19, VAR_21);

 VAR_21->duxbuf = FUNC_6(VAR_9, VAR_4);
 if (!VAR_21->duxbuf)
  return -VAR_2;

 VAR_23 = FUNC_9(VAR_20,
    VAR_19->altsetting->desc.bInterfaceNumber, 1);
 if (VAR_23 < 0) {
  FUNC_5(VAR_17->class_dev,
   "could not switch to alternate setting 1\n");
  return -VAR_1;
 }

 VAR_21->urb = FUNC_8(0, VAR_4);
 if (!VAR_21->urb)
  return -VAR_2;

 VAR_21->inbuf = FUNC_6(VAR_8, VAR_4);
 if (!VAR_21->inbuf)
  return -VAR_2;

 VAR_23 = FUNC_2(VAR_17, &VAR_20->dev, VAR_3,
       VAR_16, 0);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_1(VAR_17, 1);
 if (VAR_23)
  return VAR_23;


 VAR_22 = &VAR_17->subdevices[0];
 VAR_17->read_subdev = VAR_22;
 VAR_22->type = VAR_0;
 VAR_22->subdev_flags = VAR_7 | VAR_6 | VAR_5;
 VAR_22->n_chan = 16;
 VAR_22->maxdata = 0x1000;
 VAR_22->range_table = &VAR_11;
 VAR_22->insn_read = VAR_15;
 VAR_22->len_chanlist = VAR_22->n_chan;
 VAR_22->do_cmdtest = VAR_14;
 VAR_22->do_cmd = VAR_13;
 VAR_22->cancel = VAR_12;

 return 0;
}
