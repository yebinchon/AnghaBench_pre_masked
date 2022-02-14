
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; struct ems_tx_urb_context* context; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ems_usb {int active_tx_urbs; struct net_device* netdev; } ;
struct ems_tx_urb_context {int echo_index; scalar_t__ dlc; struct ems_usb* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_1)
{
 struct ems_tx_urb_context *VAR_2 = VAR_1->context;
 struct ems_usb *VAR_3;
 struct net_device *VAR_4;

 FUNC_0(!VAR_2);

 VAR_3 = VAR_2->dev;
 VAR_4 = VAR_3->netdev;


 FUNC_6(VAR_1->dev, VAR_1->transfer_buffer_length,
     VAR_1->transfer_buffer, VAR_1->transfer_dma);

 FUNC_1(&VAR_3->active_tx_urbs);

 if (!FUNC_4(VAR_4))
  return;

 if (VAR_1->status)
  FUNC_3(VAR_4, "Tx URB aborted (%d)\n", VAR_1->status);

 FUNC_5(VAR_4);


 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes += VAR_2->dlc;

 FUNC_2(VAR_4, VAR_2->echo_index);


 VAR_2->echo_index = VAR_0;

}
