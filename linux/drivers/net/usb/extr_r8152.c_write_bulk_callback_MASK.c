
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; struct tx_agg* context; } ;
struct tx_agg {int list; scalar_t__ skb_len; scalar_t__ skb_num; struct r8152* context; } ;
struct r8152 {int tx_tl; int tx_queue; int flags; int intf; int tx_lock; int tx_free; struct net_device* netdev; } ;
struct net_device_stats {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_2)
{
 struct net_device_stats *VAR_3;
 struct net_device *VAR_4;
 struct tx_agg *VAR_5;
 struct r8152 *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = VAR_2->status;

 VAR_5 = VAR_2->context;
 if (!VAR_5)
  return;

 VAR_6 = VAR_5->context;
 if (!VAR_6)
  return;

 VAR_4 = VAR_6->netdev;
 VAR_3 = &VAR_4->stats;
 if (VAR_8) {
  if (FUNC_1())
   FUNC_2(VAR_4, "Tx status %d\n", VAR_8);
  VAR_3->tx_errors += VAR_5->skb_num;
 } else {
  VAR_3->tx_packets += VAR_5->skb_num;
  VAR_3->tx_bytes += VAR_5->skb_len;
 }

 FUNC_5(&VAR_6->tx_lock, VAR_7);
 FUNC_0(&VAR_5->list, &VAR_6->tx_free);
 FUNC_6(&VAR_6->tx_lock, VAR_7);

 FUNC_9(VAR_6->intf);

 if (!FUNC_3(VAR_4))
  return;

 if (!FUNC_8(VAR_1, &VAR_6->flags))
  return;

 if (FUNC_8(VAR_0, &VAR_6->flags))
  return;

 if (!FUNC_4(&VAR_6->tx_queue))
  FUNC_7(&VAR_6->tx_tl);
}
