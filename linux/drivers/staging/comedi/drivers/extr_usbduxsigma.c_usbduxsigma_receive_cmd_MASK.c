
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int* insn_buf; } ;
struct usb_device {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct usb_device*,int ,int*,int ,int*,int ) ;
 int FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, int VAR_5)
{
 struct usb_device *VAR_6 = FUNC_0(VAR_4);
 struct usbduxsigma_private *VAR_7 = VAR_4->private;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = FUNC_1(VAR_6, FUNC_2(VAR_6, 8),
       VAR_7->insn_buf, VAR_3,
       &VAR_8, VAR_0);
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_7->insn_buf[0] == VAR_5)
   return 0;
 }




 return -VAR_1;
}
