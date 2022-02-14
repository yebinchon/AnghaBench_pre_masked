
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5300_priv {int dummy; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct w5300_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct w5300_priv*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct w5300_priv*,int ) ;
 int FUNC_5 (struct w5300_priv*,int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct w5300_priv *VAR_5 = FUNC_1(VAR_4);

 FUNC_3(VAR_4);

 FUNC_5(VAR_5, VAR_3->data, VAR_3->len);
 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes += VAR_3->len;
 FUNC_0(VAR_3);
 FUNC_2(VAR_5, VAR_2, VAR_4, "tx queued\n");

 FUNC_4(VAR_5, VAR_1);

 return VAR_0;
}
