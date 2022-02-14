
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netdev_private {int old_tx; int cur_tx; int speed; int tx_lock; struct sk_buff** tx_skbuff; TYPE_1__* tx_ring; int pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct netdev_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_12 (struct net_device *VAR_4, int VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = VAR_6->old_tx % VAR_3;
 int VAR_8 = 0;
 unsigned long VAR_9 = 0;

 if (VAR_5)
  FUNC_8(&VAR_6->tx_lock);
 else
  FUNC_9(&VAR_6->tx_lock, VAR_9);


 while (VAR_7 != VAR_6->cur_tx) {
  struct sk_buff *VAR_10;

  if (!(VAR_6->tx_ring[VAR_7].status & FUNC_0(VAR_1)))
   break;
  VAR_10 = VAR_6->tx_skbuff[VAR_7];
  FUNC_7 (VAR_6->pdev,
      FUNC_1(&VAR_6->tx_ring[VAR_7]),
      VAR_10->len, VAR_0);
  if (VAR_5)
   FUNC_2(VAR_10);
  else
   FUNC_3(VAR_10);

  VAR_6->tx_skbuff[VAR_7] = ((void*)0);
  VAR_7 = (VAR_7 + 1) % VAR_3;
  VAR_8++;
 }
 if (VAR_5)
  FUNC_10(&VAR_6->tx_lock);
 else
  FUNC_11(&VAR_6->tx_lock, VAR_9);
 VAR_6->old_tx = VAR_7;




 if (FUNC_5(VAR_4) &&
     ((VAR_6->cur_tx - VAR_6->old_tx + VAR_3) % VAR_3
     < VAR_2 - 1 || VAR_6->speed == 10)) {
  FUNC_6 (VAR_4);
 }
}
