
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni6501_private {void* usb_tx_buf; int ep_tx; void* usb_rx_buf; int ep_rx; } ;
struct comedi_device {struct ni6501_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2)
{
 struct ni6501_private *VAR_3 = VAR_2->private;
 size_t VAR_4;

 VAR_4 = FUNC_1(VAR_3->ep_rx);
 VAR_3->usb_rx_buf = FUNC_0(VAR_4, VAR_1);
 if (!VAR_3->usb_rx_buf)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->ep_tx);
 VAR_3->usb_tx_buf = FUNC_0(VAR_4, VAR_1);
 if (!VAR_3->usb_tx_buf)
  return -VAR_0;

 return 0;
}
