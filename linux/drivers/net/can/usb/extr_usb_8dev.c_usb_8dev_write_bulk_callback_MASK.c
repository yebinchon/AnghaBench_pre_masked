
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_8dev_tx_urb_context {int echo_index; scalar_t__ dlc; struct usb_8dev_priv* priv; } ;
struct usb_8dev_priv {int active_tx_urbs; struct net_device* netdev; } ;
struct urb {int status; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; struct usb_8dev_tx_urb_context* context; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_2)
{
 struct usb_8dev_tx_urb_context *VAR_3 = VAR_2->context;
 struct usb_8dev_priv *VAR_4;
 struct net_device *VAR_5;

 FUNC_0(!VAR_3);

 VAR_4 = VAR_3->priv;
 VAR_5 = VAR_4->netdev;


 FUNC_7(VAR_2->dev, VAR_2->transfer_buffer_length,
     VAR_2->transfer_buffer, VAR_2->transfer_dma);

 FUNC_1(&VAR_4->active_tx_urbs);

 if (!FUNC_5(VAR_5))
  return;

 if (VAR_2->status)
  FUNC_4(VAR_5, "Tx URB aborted (%d)\n",
    VAR_2->status);

 VAR_5->stats.tx_packets++;
 VAR_5->stats.tx_bytes += VAR_3->dlc;

 FUNC_2(VAR_5, VAR_3->echo_index);

 FUNC_3(VAR_5, VAR_0);


 VAR_3->echo_index = VAR_1;

 FUNC_6(VAR_5);
}
