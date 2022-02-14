
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct mcba_usb_msg {int dummy; } ;
struct mcba_usb_ctx {int dummy; } ;
struct mcba_priv {int netdev; int udev; int tx_submitted; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct mcba_usb_msg*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int ,int ,int ,int *) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*,int ,int ,int *,int ,int ,struct mcba_usb_ctx*) ;
 int FUNC_8 (int ,int ,int *,int ) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct mcba_priv *VAR_7,
     struct mcba_usb_msg *VAR_8,
     struct mcba_usb_ctx *VAR_9)
{
 struct urb *VAR_10;
 u8 *VAR_11;
 int VAR_12;


 VAR_10 = FUNC_5(0, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_7->udev, VAR_4, VAR_2,
     &VAR_10->transfer_dma);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto nomembuf;
 }

 FUNC_0(VAR_11, VAR_8, VAR_4);

 FUNC_7(VAR_10, VAR_7->udev,
     FUNC_10(VAR_7->udev, VAR_3), VAR_11,
     VAR_4, VAR_6,
     VAR_9);

 VAR_10->transfer_flags |= VAR_5;
 FUNC_6(VAR_10, &VAR_7->tx_submitted);

 VAR_12 = FUNC_11(VAR_10, VAR_2);
 if (FUNC_3(VAR_12))
  goto failed;




 FUNC_9(VAR_10);

 return 0;

failed:
 FUNC_12(VAR_10);
 FUNC_8(VAR_7->udev, VAR_4, VAR_11,
     VAR_10->transfer_dma);

 if (VAR_12 == -VAR_0)
  FUNC_2(VAR_7->netdev);
 else
  FUNC_1(VAR_7->netdev, "failed tx_urb %d\n", VAR_12);

nomembuf:
 FUNC_9(VAR_10);

 return VAR_12;
}
