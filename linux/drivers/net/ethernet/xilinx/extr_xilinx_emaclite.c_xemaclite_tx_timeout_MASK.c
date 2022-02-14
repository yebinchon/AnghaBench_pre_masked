
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_local {int reset_lock; int * deferred_skb; TYPE_2__* ndev; } ;
struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (int *) ;
 struct net_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct net_local*) ;
 int FUNC_9 (struct net_local*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_2)
{
 struct net_local *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->ndev->dev, "Exceeded transmit timeout of %lu ms\n",
  VAR_1 * 1000UL / VAR_0);

 VAR_2->stats.tx_errors++;


 FUNC_6(&VAR_3->reset_lock, VAR_4);


 FUNC_3(VAR_2);

 FUNC_8(VAR_3);
 FUNC_9(VAR_3);

 if (VAR_3->deferred_skb) {
  FUNC_1(VAR_3->deferred_skb);
  VAR_3->deferred_skb = ((void*)0);
  VAR_2->stats.tx_errors++;
 }


 FUNC_4(VAR_2);


 FUNC_5(VAR_2);
 FUNC_7(&VAR_3->reset_lock, VAR_4);
}
