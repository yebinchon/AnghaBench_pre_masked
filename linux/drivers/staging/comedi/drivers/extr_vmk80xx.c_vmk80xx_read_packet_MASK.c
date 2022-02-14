
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {scalar_t__ model; int usb_rx_buf; struct usb_endpoint_descriptor* ep_rx; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;
 int FUNC_2 (struct usb_device*,unsigned int,int ,int ,int *,int) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2)
{
 struct vmk80xx_private *VAR_3 = VAR_2->private;
 struct usb_device *VAR_4 = FUNC_0(VAR_2);
 struct usb_endpoint_descriptor *VAR_5;
 unsigned int VAR_6;

 if (VAR_3->model == VAR_1) {
  FUNC_4(VAR_2);
  return 0;
 }

 VAR_5 = VAR_3->ep_rx;
 VAR_6 = FUNC_3(VAR_4, VAR_5->bEndpointAddress);
 return FUNC_2(VAR_4, VAR_6, VAR_3->usb_rx_buf,
     FUNC_1(VAR_5), ((void*)0),
     VAR_0 * 10);
}
