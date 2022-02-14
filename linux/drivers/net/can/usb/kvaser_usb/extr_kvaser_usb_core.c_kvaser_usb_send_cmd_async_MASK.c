
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct net_device {int dummy; } ;
struct kvaser_usb_net_priv {int tx_submitted; struct net_device* netdev; struct kvaser_usb* dev; } ;
struct kvaser_usb {TYPE_1__* bulk_out; int udev; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*,int *) ;
 int FUNC_3 (struct urb*,int ,int ,void*,int,int ,struct net_device*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

int FUNC_8(struct kvaser_usb_net_priv *VAR_3, void *VAR_4,
         int VAR_5)
{
 struct kvaser_usb *VAR_6 = VAR_3->dev;
 struct net_device *VAR_7 = VAR_3->netdev;
 struct urb *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(0, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_8, VAR_6->udev,
     FUNC_5(VAR_6->udev,
       VAR_6->bulk_out->bEndpointAddress),
     VAR_4, VAR_5, VAR_2, VAR_7);
 FUNC_2(VAR_8, &VAR_3->tx_submitted);

 VAR_9 = FUNC_6(VAR_8, VAR_1);
 if (VAR_9) {
  FUNC_0(VAR_7, "Error transmitting URB\n");
  FUNC_7(VAR_8);
 }
 FUNC_4(VAR_8);

 return 0;
}
