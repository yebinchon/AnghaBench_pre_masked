
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct net_device {int dummy; } ;
struct kaweth_device {int intbufferhandle; scalar_t__ intbuffer; int dev; int rxbufferhandle; scalar_t__ rx_buf; int irq_urb; int tx_urb; int rx_urb; struct net_device* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,void*,int ) ;
 int FUNC_5 (int ) ;
 struct kaweth_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct kaweth_device *VAR_3 = FUNC_6(VAR_2);
 struct net_device *VAR_4;

 FUNC_7(VAR_2, ((void*)0));
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "unregistering non-existent device\n");
  return;
 }
 VAR_4 = VAR_3->net;

 FUNC_2(VAR_3->net, "Unregistering net device\n");
 FUNC_3(VAR_4);

 FUNC_5(VAR_3->rx_urb);
 FUNC_5(VAR_3->tx_urb);
 FUNC_5(VAR_3->irq_urb);

 FUNC_4(VAR_3->dev, VAR_1, (void *)VAR_3->rx_buf, VAR_3->rxbufferhandle);
 FUNC_4(VAR_3->dev, VAR_0, (void *)VAR_3->intbuffer, VAR_3->intbufferhandle);

 FUNC_1(VAR_4);
}
