
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct kaweth_device {int device_lock; int tx_urb; scalar_t__ end; int dev; struct sk_buff* tx_skb; int status; } ;
typedef int netdev_tx_t ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct kaweth_device*) ;
 int VAR_2 ;
 struct kaweth_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,int *,int ,int ,struct kaweth_device*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_3,
        struct net_device *VAR_4)
{
 struct kaweth_device *VAR_5 = FUNC_7(VAR_4);
 __le16 *VAR_6;

 int VAR_7;

 FUNC_11(&VAR_5->device_lock);

 FUNC_6(VAR_5);
 FUNC_9(VAR_4);
 if (FUNC_0(VAR_5->status)) {
  goto skip;
 }


 if (FUNC_10(VAR_3, 2)) {
  VAR_4->stats.tx_errors++;
  FUNC_8(VAR_4);
  FUNC_12(&VAR_5->device_lock);
  FUNC_3(VAR_3);
  return VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3, 2);
 *VAR_6 = FUNC_2(VAR_3->len-2);
 VAR_5->tx_skb = VAR_3;

 FUNC_13(VAR_5->tx_urb,
        VAR_5->dev,
        FUNC_14(VAR_5->dev, 2),
        VAR_6,
        VAR_3->len,
        VAR_2,
        VAR_5);
 VAR_5->end = 0;

 if((VAR_7 = FUNC_15(VAR_5->tx_urb, VAR_0)))
 {
  FUNC_5(&VAR_4->dev, "kaweth failed tx_urb %d\n", VAR_7);
skip:
  VAR_4->stats.tx_errors++;

  FUNC_8(VAR_4);
  FUNC_4(VAR_3);
 }
 else
 {
  VAR_4->stats.tx_packets++;
  VAR_4->stats.tx_bytes += VAR_3->len;
 }

 FUNC_12(&VAR_5->device_lock);

 return VAR_1;
}
