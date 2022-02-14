
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lan78xx_net {int bh; TYPE_3__* net; int txq_pend; TYPE_1__* udev; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {int tx_dropped; int tx_errors; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct lan78xx_net*,struct sk_buff*,int ) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lan78xx_net*,int ,TYPE_3__*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static netdev_tx_t
FUNC_8(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct lan78xx_net *VAR_6 = FUNC_1(VAR_5);
 struct sk_buff *VAR_7 = ((void*)0);

 if (VAR_4) {
  FUNC_6(VAR_4);
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_0);
 }

 if (VAR_7) {
  FUNC_5(&VAR_6->txq_pend, VAR_7);


  if ((VAR_6->udev->speed < VAR_2) &&
      (FUNC_4(&VAR_6->txq_pend) > 10))
   FUNC_3(VAR_5);
 } else {
  FUNC_2(VAR_6, VAR_3, VAR_6->net,
     "lan78xx_tx_prep return NULL\n");
  VAR_6->net->stats.tx_errors++;
  VAR_6->net->stats.tx_dropped++;
 }

 FUNC_7(&VAR_6->bh);

 return VAR_1;
}
