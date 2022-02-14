
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct TYPE_6__ {int netdev; int tx_urb; int udev; struct sk_buff* tx_skb; } ;
typedef TYPE_2__ rtl8150_t ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ,int,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_4,
         struct net_device *VAR_5)
{
 rtl8150_t *VAR_6 = FUNC_1(VAR_5);
 int VAR_7, VAR_8;

 FUNC_4(VAR_5);
 VAR_7 = (VAR_4->len < 60) ? 60 : VAR_4->len;
 VAR_7 = (VAR_7 & 0x3f) ? VAR_7 : VAR_7 + 1;
 VAR_6->tx_skb = VAR_4;
 FUNC_6(VAR_6->tx_urb, VAR_6->udev, FUNC_7(VAR_6->udev, 2),
        VAR_4->data, VAR_7, VAR_3, VAR_6);
 if ((VAR_8 = FUNC_8(VAR_6->tx_urb, VAR_1))) {

  if (VAR_8 == -VAR_0)
   FUNC_2(VAR_6->netdev);
  else {
   FUNC_0(&VAR_5->dev, "failed tx_urb %d\n", VAR_8);
   VAR_5->stats.tx_errors++;
   FUNC_3(VAR_5);
  }
 } else {
  VAR_5->stats.tx_packets++;
  VAR_5->stats.tx_bytes += VAR_4->len;
  FUNC_5(VAR_5);
 }

 return VAR_2;
}
