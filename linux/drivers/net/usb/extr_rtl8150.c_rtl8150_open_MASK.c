
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int dev; int dev_addr; } ;
struct TYPE_9__ {int rx_urb; int netdev; int intr_urb; int intr_interval; int intr_buff; int udev; TYPE_5__* rx_skb; } ;
typedef TYPE_1__ rtl8150_t ;
struct TYPE_10__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 TYPE_5__* FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_8)
{
 rtl8150_t *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;

 if (VAR_9->rx_skb == ((void*)0))
  VAR_9->rx_skb = FUNC_5(VAR_9);
 if (!VAR_9->rx_skb)
  return -VAR_1;

 FUNC_7(VAR_9, VAR_3, 6, VAR_8->dev_addr);

 FUNC_8(VAR_9->rx_urb, VAR_9->udev, FUNC_11(VAR_9->udev, 1),
        VAR_9->rx_skb->data, VAR_5, VAR_7, VAR_9);
 if ((VAR_10 = FUNC_13(VAR_9->rx_urb, VAR_2))) {
  if (VAR_10 == -VAR_0)
   FUNC_3(VAR_9->netdev);
  FUNC_0(&VAR_8->dev, "rx_urb submit failed: %d\n", VAR_10);
  return VAR_10;
 }
 FUNC_9(VAR_9->intr_urb, VAR_9->udev, FUNC_12(VAR_9->udev, 3),
       VAR_9->intr_buff, VAR_4, VAR_6,
       VAR_9, VAR_9->intr_interval);
 if ((VAR_10 = FUNC_13(VAR_9->intr_urb, VAR_2))) {
  if (VAR_10 == -VAR_0)
   FUNC_3(VAR_9->netdev);
  FUNC_0(&VAR_8->dev, "intr_urb submit failed: %d\n", VAR_10);
  FUNC_10(VAR_9->rx_urb);
  return VAR_10;
 }
 FUNC_1(VAR_9);
 FUNC_6(VAR_8);
 FUNC_4(VAR_8);

 return VAR_10;
}
