
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_agg {int list; scalar_t__ skb_num; } ;
struct r8152 {int tx_lock; int tx_free; struct net_device* netdev; int tx_queue; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct r8152*,int ,struct net_device*,char*,int) ;
 struct tx_agg* FUNC_3 (struct r8152*) ;
 int FUNC_4 (struct r8152*,struct tx_agg*) ;
 int FUNC_5 (struct r8152*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct r8152 *VAR_2)
{
 int VAR_3;

 do {
  struct tx_agg *VAR_4;

  if (FUNC_6(&VAR_2->tx_queue))
   break;

  VAR_4 = FUNC_3(VAR_2);
  if (!VAR_4)
   break;

  VAR_3 = FUNC_4(VAR_2, VAR_4);
  if (VAR_3) {
   struct net_device *VAR_5 = VAR_2->netdev;

   if (VAR_3 == -VAR_0) {
    FUNC_5(VAR_2);
    FUNC_1(VAR_5);
   } else {
    struct net_device_stats *VAR_6 = &VAR_5->stats;
    unsigned long VAR_7;

    FUNC_2(VAR_2, VAR_1, VAR_5,
        "failed tx_urb %d\n", VAR_3);
    VAR_6->tx_dropped += VAR_4->skb_num;

    FUNC_7(&VAR_2->tx_lock, VAR_7);
    FUNC_0(&VAR_4->list, &VAR_2->tx_free);
    FUNC_8(&VAR_2->tx_lock, VAR_7);
   }
  }
 } while (VAR_3 == 0);
}
