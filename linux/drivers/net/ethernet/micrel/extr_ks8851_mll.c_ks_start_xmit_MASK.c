
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_packets; int tx_bytes; } ;
struct net_device {int irq; TYPE_1__ stats; } ;
struct ks_net {int statelock; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ks_net*) ;
 int FUNC_4 (struct ks_net*) ;
 scalar_t__ FUNC_5 (struct ks_net*) ;
 int FUNC_6 (struct ks_net*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 struct ks_net* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 netdev_tx_t VAR_4 = VAR_1;
 struct ks_net *VAR_5 = FUNC_8(VAR_3);

 FUNC_1(VAR_3->irq);
 FUNC_3(VAR_5);
 FUNC_9(&VAR_5->statelock);





 if (FUNC_7(FUNC_5(VAR_5) >= VAR_2->len + 12)) {
  FUNC_6(VAR_5, VAR_2->data, VAR_2->len);

  VAR_3->stats.tx_bytes += VAR_2->len;
  VAR_3->stats.tx_packets++;
  FUNC_0(VAR_2);
 } else
  VAR_4 = VAR_0;
 FUNC_10(&VAR_5->statelock);
 FUNC_4(VAR_5);
 FUNC_2(VAR_3->irq);
 return VAR_4;
}
