
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; } ;
struct ucan_priv {int udev; } ;
struct ucan_message_out {int dummy; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct ucan_priv *VAR_0, struct urb *VAR_1)
{
 FUNC_0(VAR_0->udev, sizeof(struct ucan_message_out),
     VAR_1->transfer_buffer, VAR_1->transfer_dma);
 FUNC_1(VAR_1);
}
