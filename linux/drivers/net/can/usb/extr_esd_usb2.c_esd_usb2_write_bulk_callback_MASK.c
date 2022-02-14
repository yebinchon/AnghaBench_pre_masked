
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int transfer_dma; int transfer_buffer; int dev; struct esd_tx_urb_context* context; } ;
struct net_device {int dummy; } ;
struct esd_usb2_net_priv {struct net_device* netdev; } ;
struct esd_usb2_msg {int dummy; } ;
struct esd_tx_urb_context {struct esd_usb2_net_priv* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_0)
{
 struct esd_tx_urb_context *VAR_1 = VAR_0->context;
 struct esd_usb2_net_priv *VAR_2;
 struct net_device *VAR_3;
 size_t VAR_4 = sizeof(struct esd_usb2_msg);

 FUNC_0(!VAR_1);

 VAR_2 = VAR_1->priv;
 VAR_3 = VAR_2->netdev;


 FUNC_4(VAR_0->dev, VAR_4,
     VAR_0->transfer_buffer, VAR_0->transfer_dma);

 if (!FUNC_2(VAR_3))
  return;

 if (VAR_0->status)
  FUNC_1(VAR_3, "Tx URB aborted (%d)\n", VAR_0->status);

 FUNC_3(VAR_3);
}
