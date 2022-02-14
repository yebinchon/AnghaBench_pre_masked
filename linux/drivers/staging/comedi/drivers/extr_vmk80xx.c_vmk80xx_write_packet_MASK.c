
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int* usb_tx_buf; scalar_t__ model; struct usb_endpoint_descriptor* ep_tx; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;
 int FUNC_2 (struct usb_device*,unsigned int,int*,int ,int *,int) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2, int VAR_3)
{
 struct vmk80xx_private *VAR_4 = VAR_2->private;
 struct usb_device *VAR_5 = FUNC_0(VAR_2);
 struct usb_endpoint_descriptor *VAR_6;
 unsigned int VAR_7;

 VAR_4->usb_tx_buf[0] = VAR_3;

 if (VAR_4->model == VAR_1) {
  FUNC_4(VAR_2);
  return 0;
 }

 VAR_6 = VAR_4->ep_tx;
 VAR_7 = FUNC_3(VAR_5, VAR_6->bEndpointAddress);
 return FUNC_2(VAR_5, VAR_7, VAR_4->usb_tx_buf,
     FUNC_1(VAR_6), ((void*)0),
     VAR_0 * 10);
}
