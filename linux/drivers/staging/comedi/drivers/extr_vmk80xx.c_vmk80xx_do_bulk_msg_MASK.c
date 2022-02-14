
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmk80xx_private {int usb_rx_buf; TYPE_2__* ep_tx; int usb_tx_buf; TYPE_1__* ep_rx; } ;
struct usb_device {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;
typedef int __u8 ;
struct TYPE_4__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_3__ {int bEndpointAddress; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct usb_device*,unsigned int,int ,size_t,int *,int) ;
 size_t FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_1)
{
 struct vmk80xx_private *VAR_2 = VAR_1->private;
 struct usb_device *VAR_3 = FUNC_0(VAR_1);
 __u8 VAR_4;
 __u8 VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 size_t VAR_8;

 VAR_4 = VAR_2->ep_tx->bEndpointAddress;
 VAR_5 = VAR_2->ep_rx->bEndpointAddress;
 VAR_6 = FUNC_4(VAR_3, VAR_4);
 VAR_7 = FUNC_3(VAR_3, VAR_5);





 VAR_8 = FUNC_2(VAR_2->ep_tx);

 FUNC_1(VAR_3, VAR_6, VAR_2->usb_tx_buf,
       VAR_8, ((void*)0), VAR_2->ep_tx->bInterval);
 FUNC_1(VAR_3, VAR_7, VAR_2->usb_rx_buf, VAR_8, ((void*)0), VAR_0 * 10);
}
