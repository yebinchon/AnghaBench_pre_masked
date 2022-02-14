
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int* dux_commands; } ;
struct usb_device {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct usb_device*,int ,int*,int ,int*,int ) ;
 int FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, int VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_2);
 struct usbduxsigma_private *VAR_5 = VAR_2->private;
 int VAR_6;

 VAR_5->dux_commands[0] = VAR_3;

 return FUNC_1(VAR_4, FUNC_2(VAR_4, 1),
       VAR_5->dux_commands, VAR_1,
       &VAR_6, VAR_0);
}
