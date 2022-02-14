
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl3501_card {int tx_buffer_cnt; int lock; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wl3501_card*) ;
 int FUNC_6 (struct wl3501_card*,int ,scalar_t__) ;
 int FUNC_7 (struct wl3501_card*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_1,
      struct net_device *VAR_2)
{
 int VAR_3, VAR_4;
 struct wl3501_card *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 VAR_3 = FUNC_5(VAR_5);
 VAR_4 = FUNC_6(VAR_5, VAR_1->data, VAR_1->len);
 if (VAR_3)
  FUNC_7(VAR_5);
 if (VAR_4) {
  ++VAR_2->stats.tx_dropped;
  FUNC_2(VAR_2);
 } else {
  ++VAR_2->stats.tx_packets;
  VAR_2->stats.tx_bytes += VAR_1->len;
  FUNC_0(VAR_1);

  if (VAR_5->tx_buffer_cnt < 2)
   FUNC_2(VAR_2);
 }
 FUNC_4(&VAR_5->lock, VAR_6);
 return VAR_0;
}
