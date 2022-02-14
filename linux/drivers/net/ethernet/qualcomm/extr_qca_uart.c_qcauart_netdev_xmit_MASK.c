
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct qcauart {int tx_left; scalar_t__* tx_buffer; scalar_t__* tx_head; int lock; int serdev; int net_dev; } ;
struct net_device_stats {int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;
 struct qcauart* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_14(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_3->stats;
 struct qcauart *VAR_5 = FUNC_4(VAR_3);
 u8 VAR_6 = 0;
 int VAR_7;
 u8 *VAR_8;

 FUNC_12(&VAR_5->lock);

 FUNC_0(VAR_5->tx_left);

 if (!FUNC_6(VAR_3)) {
  FUNC_13(&VAR_5->lock);
  FUNC_5(VAR_5->net_dev, "xmit: iface is down\n");
  goto out;
 }

 VAR_8 = VAR_5->tx_buffer;

 if (VAR_2->len < VAR_1)
  VAR_6 = VAR_1 - VAR_2->len;

 VAR_8 += FUNC_10(VAR_8, VAR_2->len + VAR_6);

 FUNC_2(VAR_8, VAR_2->data, VAR_2->len);
 VAR_8 += VAR_2->len;

 if (VAR_6) {
  FUNC_3(VAR_8, 0, VAR_6);
  VAR_8 += VAR_6;
 }

 VAR_8 += FUNC_9(VAR_8);

 FUNC_7(VAR_5->net_dev);

 VAR_7 = FUNC_11(VAR_5->serdev, VAR_5->tx_buffer,
       VAR_8 - VAR_5->tx_buffer);
 if (VAR_7 > 0) {
  VAR_5->tx_left = (VAR_8 - VAR_5->tx_buffer) - VAR_7;
  VAR_5->tx_head = VAR_5->tx_buffer + VAR_7;
  VAR_4->tx_bytes += VAR_7;
 }
 FUNC_13(&VAR_5->lock);

 FUNC_8(VAR_3);
out:
 FUNC_1(VAR_2);
 return VAR_0;
}
