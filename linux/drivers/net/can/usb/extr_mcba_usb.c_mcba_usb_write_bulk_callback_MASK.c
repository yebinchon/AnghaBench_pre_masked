
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; struct mcba_usb_ctx* context; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct mcba_usb_ctx {int ndx; scalar_t__ dlc; scalar_t__ can; TYPE_1__* priv; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct mcba_usb_ctx*) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_1)
{
 struct mcba_usb_ctx *VAR_2 = VAR_1->context;
 struct net_device *VAR_3;

 FUNC_0(!VAR_2);

 VAR_3 = VAR_2->priv->netdev;


 FUNC_6(VAR_1->dev, VAR_1->transfer_buffer_length,
     VAR_1->transfer_buffer, VAR_1->transfer_dma);

 if (VAR_2->can) {
  if (!FUNC_5(VAR_3))
   return;

  VAR_3->stats.tx_packets++;
  VAR_3->stats.tx_bytes += VAR_2->dlc;

  FUNC_2(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_2->ndx);
 }

 if (VAR_1->status)
  FUNC_4(VAR_3, "Tx URB aborted (%d)\n", VAR_1->status);


 FUNC_3(VAR_2);
}
