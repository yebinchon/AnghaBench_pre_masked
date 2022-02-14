
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int transfer_buffer; struct kvaser_usb_tx_urb_context* context; } ;
struct net_device {int dummy; } ;
struct kvaser_usb_tx_urb_context {struct kvaser_usb_net_priv* priv; } ;
struct kvaser_usb_net_priv {struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct kvaser_usb_tx_urb_context *VAR_1 = VAR_0->context;
 struct kvaser_usb_net_priv *VAR_2;
 struct net_device *VAR_3;

 if (FUNC_0(!VAR_1))
  return;

 VAR_2 = VAR_1->priv;
 VAR_3 = VAR_2->netdev;

 FUNC_1(VAR_0->transfer_buffer);

 if (!FUNC_3(VAR_3))
  return;

 if (VAR_0->status)
  FUNC_2(VAR_3, "Tx URB aborted (%d)\n", VAR_0->status);
}
