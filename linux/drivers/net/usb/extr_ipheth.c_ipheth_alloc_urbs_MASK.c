
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int transfer_dma; } ;
struct ipheth_device {int udev; int * rx_buf; int * tx_buf; struct urb* rx_urb; struct urb* tx_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ,int *) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static int FUNC_4(struct ipheth_device *VAR_3)
{
 struct urb *VAR_4 = ((void*)0);
 struct urb *VAR_5 = ((void*)0);
 u8 *VAR_6 = ((void*)0);
 u8 *VAR_7 = ((void*)0);

 VAR_4 = FUNC_1(0, VAR_1);
 if (VAR_4 == ((void*)0))
  goto error_nomem;

 VAR_5 = FUNC_1(0, VAR_1);
 if (VAR_5 == ((void*)0))
  goto free_tx_urb;

 VAR_6 = FUNC_0(VAR_3->udev, VAR_2,
        VAR_1, &VAR_4->transfer_dma);
 if (VAR_6 == ((void*)0))
  goto free_rx_urb;

 VAR_7 = FUNC_0(VAR_3->udev, VAR_2,
        VAR_1, &VAR_5->transfer_dma);
 if (VAR_7 == ((void*)0))
  goto free_tx_buf;


 VAR_3->tx_urb = VAR_4;
 VAR_3->rx_urb = VAR_5;
 VAR_3->tx_buf = VAR_6;
 VAR_3->rx_buf = VAR_7;
 return 0;

free_tx_buf:
 FUNC_2(VAR_3->udev, VAR_2, VAR_6,
     VAR_4->transfer_dma);
free_rx_urb:
 FUNC_3(VAR_5);
free_tx_urb:
 FUNC_3(VAR_4);
error_nomem:
 return -VAR_0;
}
