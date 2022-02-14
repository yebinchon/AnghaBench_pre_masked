
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct usbduxfast_private {int mut; scalar_t__ inbuf; scalar_t__ ai_cmd_running; } ;
struct usb_device {int dummy; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int class_dev; struct usbduxfast_private* private; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_device* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,int ,scalar_t__,int ,int*,int) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (struct comedi_device*,int,int,int,int,int) ;
 int FUNC_9 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       struct comedi_insn *VAR_8,
       unsigned int *VAR_9)
{
 struct usb_device *VAR_10 = FUNC_2(VAR_6);
 struct usbduxfast_private *VAR_11 = VAR_6->private;
 unsigned int VAR_12 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_13 = FUNC_1(VAR_8->chanspec);
 u8 VAR_14 = VAR_13 ? (0xff - 0x04) : 0xff;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 FUNC_4(&VAR_11->mut);

 if (VAR_11->ai_cmd_running) {
  FUNC_3(VAR_6->class_dev,
   "ai_insn_read not possible, async cmd is running\n");
  FUNC_5(&VAR_11->mut);
  return -VAR_1;
 }





 FUNC_8(VAR_6, 0, 0x01, 0x02, VAR_14, 0x00);


 FUNC_8(VAR_6, 1, 0x0c, 0x00, 0xfe & VAR_14, 0x00);
 FUNC_8(VAR_6, 2, 0x01, 0x00, 0xfe & VAR_14, 0x00);
 FUNC_8(VAR_6, 3, 0x01, 0x00, 0xfe & VAR_14, 0x00);
 FUNC_8(VAR_6, 4, 0x01, 0x00, 0xfe & VAR_14, 0x00);


 FUNC_8(VAR_6, 5, 0x0c, 0x00, VAR_14, 0x00);
 FUNC_8(VAR_6, 6, 0x01, 0x00, VAR_14, 0x00);

 VAR_19 = FUNC_9(VAR_6, VAR_4);
 if (VAR_19 < 0) {
  FUNC_5(&VAR_11->mut);
  return VAR_19;
 }

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_19 = FUNC_6(VAR_10, FUNC_7(VAR_10, VAR_0),
       VAR_11->inbuf, VAR_5,
       &VAR_18, 10000);
  if (VAR_19 < 0) {
   FUNC_3(VAR_6->class_dev, "insn timeout, no data\n");
   FUNC_5(&VAR_11->mut);
   return VAR_19;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_8->n;) {
  VAR_19 = FUNC_6(VAR_10, FUNC_7(VAR_10, VAR_0),
       VAR_11->inbuf, VAR_5,
       &VAR_18, 10000);
  if (VAR_19 < 0) {
   FUNC_3(VAR_6->class_dev, "insn data error: %d\n", VAR_19);
   FUNC_5(&VAR_11->mut);
   return VAR_19;
  }
  VAR_17 = VAR_18 / sizeof(u16);
  if ((VAR_17 % 16) != 0) {
   FUNC_3(VAR_6->class_dev, "insn data packet corrupted\n");
   FUNC_5(&VAR_11->mut);
   return -VAR_2;
  }
  for (VAR_16 = VAR_12; (VAR_16 < VAR_17) && (VAR_15 < VAR_8->n); VAR_16 = VAR_16 + 16) {
   VAR_9[VAR_15] = ((u16 *)(VAR_11->inbuf))[VAR_16];
   VAR_15++;
  }
 }

 FUNC_5(&VAR_11->mut);

 return VAR_8->n;
}
