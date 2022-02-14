
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct net_device {int dummy; } ;
struct mcba_priv {int udev; int rx_submitted; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mcba_priv*) ;
 int VAR_8 ;
 int FUNC_1 (struct mcba_priv*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int * FUNC_4 (int ,int ,int ,int *) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*,int ,int ,int *,int ,int ,struct mcba_priv*) ;
 int FUNC_8 (int ,int ,int *,int ) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct urb*) ;

__attribute__((used)) static int FUNC_13(struct mcba_priv *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->netdev;
 int VAR_11, VAR_12;

 FUNC_0(VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  struct urb *VAR_13 = ((void*)0);
  u8 *VAR_14;


  VAR_13 = FUNC_5(0, VAR_1);
  if (!VAR_13) {
   VAR_11 = -VAR_0;
   break;
  }

  VAR_14 = FUNC_4(VAR_9->udev, VAR_4,
      VAR_1, &VAR_13->transfer_dma);
  if (!VAR_14) {
   FUNC_2(VAR_10, "No memory left for USB buffer\n");
   FUNC_9(VAR_13);
   VAR_11 = -VAR_0;
   break;
  }

  FUNC_7(VAR_13, VAR_9->udev,
      FUNC_10(VAR_9->udev, VAR_3),
      VAR_14, VAR_4,
      VAR_8, VAR_9);
  VAR_13->transfer_flags |= VAR_7;
  FUNC_6(VAR_13, &VAR_9->rx_submitted);

  VAR_11 = FUNC_11(VAR_13, VAR_1);
  if (VAR_11) {
   FUNC_12(VAR_13);
   FUNC_8(VAR_9->udev, VAR_4,
       VAR_14, VAR_13->transfer_dma);
   FUNC_9(VAR_13);
   break;
  }


  FUNC_9(VAR_13);
 }


 if (VAR_12 == 0) {
  FUNC_3(VAR_10, "couldn't setup read URBs\n");
  return VAR_11;
 }


 if (VAR_12 < VAR_2)
  FUNC_3(VAR_10, "rx performance may be slow\n");

 FUNC_1(VAR_9, VAR_6);
 FUNC_1(VAR_9, VAR_5);

 return VAR_11;
}
