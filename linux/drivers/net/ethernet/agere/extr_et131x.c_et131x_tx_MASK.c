
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_ring {int used; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct et131x_adapter {int flags; TYPE_2__* netdev; struct tx_ring tx_ring; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int tx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct et131x_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct et131x_adapter*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct et131x_adapter *VAR_5 = FUNC_1(VAR_4);
 struct tx_ring *VAR_6 = &VAR_5->tx_ring;


 if (VAR_6->used >= VAR_2 - 1 && !FUNC_3(VAR_4))
  FUNC_4(VAR_4);


 FUNC_5(VAR_4);


 if (VAR_6->used >= VAR_2)
  goto drop_err;

 if ((VAR_5->flags & VAR_0) ||
     !FUNC_2(VAR_4))
  goto drop_err;

 if (FUNC_6(VAR_3, VAR_5))
  goto drop_err;

 return VAR_1;

drop_err:
 FUNC_0(VAR_3);
 VAR_5->netdev->stats.tx_dropped++;
 return VAR_1;
}
