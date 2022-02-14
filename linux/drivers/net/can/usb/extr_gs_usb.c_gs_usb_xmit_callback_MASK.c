
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; scalar_t__ status; struct gs_tx_context* context; } ;
struct net_device {int dummy; } ;
struct gs_tx_context {int echo_id; struct gs_can* dev; } ;
struct gs_can {struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct gs_tx_context *VAR_1 = VAR_0->context;
 struct gs_can *VAR_2 = VAR_1->dev;
 struct net_device *VAR_3 = VAR_2->netdev;

 if (VAR_0->status)
  FUNC_0(VAR_3, "usb xmit fail %d\n", VAR_1->echo_id);

 FUNC_1(VAR_0->dev,
     VAR_0->transfer_buffer_length,
     VAR_0->transfer_buffer,
     VAR_0->transfer_dma);
}
