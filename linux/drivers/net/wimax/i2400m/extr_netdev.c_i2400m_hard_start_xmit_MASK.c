
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct i2400m {scalar_t__ state; } ;
struct device {int dummy; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct sk_buff*,struct net_device*,int) ;
 int FUNC_1 (int,struct device*,char*,struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct net_device*,struct sk_buff*) ;
 int FUNC_5 (struct i2400m*,struct net_device*,struct sk_buff*) ;
 struct i2400m* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static
netdev_tx_t FUNC_8(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct i2400m *VAR_4 = FUNC_6(VAR_3);
 struct device *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = -1;

 FUNC_1(3, VAR_5, "(skb %p net_dev %p)\n", VAR_2, VAR_3);

 if (FUNC_7(VAR_2, 0))
  goto drop;

 if (VAR_4->state == VAR_0)
  VAR_6 = FUNC_5(VAR_4, VAR_3, VAR_2);
 else
  VAR_6 = FUNC_4(VAR_4, VAR_3, VAR_2);
 if (VAR_6 < 0) {
drop:
  VAR_3->stats.tx_dropped++;
 } else {
  VAR_3->stats.tx_packets++;
  VAR_3->stats.tx_bytes += VAR_2->len;
 }
 FUNC_2(VAR_2);
 FUNC_0(3, VAR_5, "(skb %p net_dev %p) = %d\n", VAR_2, VAR_3, VAR_6);
 return VAR_1;
}
