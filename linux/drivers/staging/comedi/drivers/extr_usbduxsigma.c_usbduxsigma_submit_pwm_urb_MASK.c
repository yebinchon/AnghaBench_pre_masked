
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int pwm_buf_sz; struct urb* pwm_urb; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_buffer; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct urb*,struct usb_device*,int ,int ,int ,int ,struct comedi_device*) ;
 int FUNC_2 (struct usb_device*,int) ;
 int FUNC_3 (struct urb*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_0(VAR_2);
 struct usbduxsigma_private *VAR_4 = VAR_2->private;
 struct urb *VAR_5 = VAR_4->pwm_urb;


 FUNC_1(VAR_5, VAR_3, FUNC_2(VAR_3, 4),
     VAR_5->transfer_buffer, VAR_4->pwm_buf_sz,
     VAR_1, VAR_2);

 return FUNC_3(VAR_5, VAR_0);
}
