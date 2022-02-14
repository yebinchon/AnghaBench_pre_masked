
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipw_priv {struct clx2_tx_queue* txq; } ;
struct TYPE_2__ {scalar_t__ high_mark; } ;
struct clx2_tx_queue {TYPE_1__ q; } ;


 int FUNC_0 (struct ipw_priv*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct ipw_priv *VAR_2 = FUNC_2(VAR_0);




 struct clx2_tx_queue *VAR_3 = &VAR_2->txq[0];


 if (FUNC_1(&VAR_3->q) < VAR_3->q.high_mark)
  return 1;

 return 0;
}
