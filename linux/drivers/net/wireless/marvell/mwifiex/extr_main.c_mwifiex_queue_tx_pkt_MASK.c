
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {size_t priority; } ;
struct netdev_queue {int dummy; } ;
struct mwifiex_private {TYPE_1__* adapter; int netdev; int * wmm_tx_pending; } ;
struct TYPE_3__ {int tx_pending; int bypass_tx_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int* VAR_2 ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_6 (struct mwifiex_private*,struct sk_buff*) ;
 struct netdev_queue* FUNC_7 (int ,int) ;
 int FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;

int FUNC_10(struct mwifiex_private *VAR_3, struct sk_buff *VAR_4)
{
 struct netdev_queue *VAR_5;
 int VAR_6 = VAR_2[VAR_4->priority];

 if (FUNC_1(&VAR_3->wmm_tx_pending[VAR_6]) >= VAR_1) {
  VAR_5 = FUNC_7(VAR_3->netdev, VAR_6);
  if (!FUNC_8(VAR_5)) {
   FUNC_9(VAR_5);
   FUNC_3(VAR_3->adapter, VAR_0,
        "stop queue: %d\n", VAR_6);
  }
 }

 if (FUNC_2(VAR_3, VAR_4)) {
  FUNC_0(&VAR_3->adapter->tx_pending);
  FUNC_0(&VAR_3->adapter->bypass_tx_pending);
  FUNC_5(VAR_3, VAR_4);
  } else {
  FUNC_0(&VAR_3->adapter->tx_pending);
  FUNC_6(VAR_3, VAR_4);
  }

 FUNC_4(VAR_3->adapter);

 return 0;
}
