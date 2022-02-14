
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int limit_sem; int usb_tx_buf; int usb_rx_buf; } ;
struct usb_interface {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);
 struct vmk80xx_private *VAR_2 = VAR_0->private;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_2->limit_sem);

 FUNC_4(VAR_1, ((void*)0));

 FUNC_2(VAR_2->usb_rx_buf);
 FUNC_2(VAR_2->usb_tx_buf);

 FUNC_3(&VAR_2->limit_sem);
}
