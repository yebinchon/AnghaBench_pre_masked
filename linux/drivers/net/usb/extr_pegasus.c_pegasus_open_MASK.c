
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_8__ {int intr_urb; int rx_urb; int usb; int net; int intr_interval; int intr_buff; TYPE_7__* rx_skb; } ;
typedef TYPE_1__ pegasus_t ;
struct TYPE_9__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,int ,struct net_device*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ,int ,int,int ,TYPE_1__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_9)
{
 pegasus_t *VAR_10 = FUNC_2(VAR_9);
 int VAR_11=-VAR_2;

 if (VAR_10->rx_skb == ((void*)0))
  VAR_10->rx_skb = FUNC_0(VAR_10->net,
             VAR_5,
             VAR_4);
 if (!VAR_10->rx_skb)
  goto exit;

 VAR_11 = FUNC_7(VAR_10, VAR_3, 6, VAR_9->dev_addr);

 FUNC_8(VAR_10->rx_urb, VAR_10->usb,
     FUNC_11(VAR_10->usb, 1),
     VAR_10->rx_skb->data, VAR_5,
     VAR_8, VAR_10);
 if ((VAR_11 = FUNC_13(VAR_10->rx_urb, VAR_4))) {
  if (VAR_11 == -VAR_1)
   FUNC_4(VAR_10->net);
  FUNC_3(VAR_10, VAR_6, VAR_9, "failed rx_urb, %d\n", VAR_11);
  goto exit;
 }

 FUNC_9(VAR_10->intr_urb, VAR_10->usb,
    FUNC_12(VAR_10->usb, 3),
    VAR_10->intr_buff, sizeof(VAR_10->intr_buff),
    VAR_7, VAR_10, VAR_10->intr_interval);
 if ((VAR_11 = FUNC_13(VAR_10->intr_urb, VAR_4))) {
  if (VAR_11 == -VAR_1)
   FUNC_4(VAR_10->net);
  FUNC_3(VAR_10, VAR_6, VAR_9, "failed intr_urb, %d\n", VAR_11);
  FUNC_10(VAR_10->rx_urb);
  goto exit;
 }
 VAR_11 = FUNC_1(VAR_9, VAR_10->usb);
 if (VAR_11 < 0) {
  FUNC_3(VAR_10, VAR_6, VAR_9,
     "can't enable_net_traffic() - %d\n", VAR_11);
  VAR_11 = -VAR_0;
  FUNC_10(VAR_10->rx_urb);
  FUNC_10(VAR_10->intr_urb);
  goto exit;
 }
 FUNC_6(VAR_9);
 FUNC_5(VAR_9);
 FUNC_3(VAR_10, VAR_6, VAR_9, "open\n");
 VAR_11 = 0;
exit:
 return VAR_11;
}
