
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ni6501_private {int usb_tx_buf; int usb_rx_buf; int mut; } ;
struct comedi_device {struct ni6501_private* private; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);
 struct ni6501_private *VAR_2 = VAR_0->private;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->mut);

 FUNC_3(VAR_1, ((void*)0));

 FUNC_1(VAR_2->usb_rx_buf);
 FUNC_1(VAR_2->usb_tx_buf);
}
