
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipheth_device {TYPE_1__* tx_urb; TYPE_1__* rx_urb; int tx_buf; int udev; int rx_buf; } ;
struct TYPE_2__ {int transfer_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ipheth_device *VAR_1)
{
 FUNC_0(VAR_1->udev, VAR_0, VAR_1->rx_buf,
     VAR_1->rx_urb->transfer_dma);
 FUNC_0(VAR_1->udev, VAR_0, VAR_1->tx_buf,
     VAR_1->tx_urb->transfer_dma);
 FUNC_1(VAR_1->rx_urb);
 FUNC_1(VAR_1->tx_urb);
}
