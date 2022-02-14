
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* data; } ;
struct net_device {int dummy; } ;
struct korina_private {void* rx_chain_status; scalar_t__ rx_chain_tail; scalar_t__ rx_chain_head; scalar_t__ rx_next_done; TYPE_2__* rd_ring; struct sk_buff** rx_skb; void* tx_chain_status; scalar_t__ tx_count; scalar_t__ tx_full; scalar_t__ tx_chain_tail; scalar_t__ tx_chain_head; scalar_t__ tx_next_done; TYPE_1__* td_ring; } ;
struct TYPE_4__ {int control; void* link; void* ca; scalar_t__ devcs; } ;
struct TYPE_3__ {int devcs; scalar_t__ link; scalar_t__ ca; int control; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 struct sk_buff* FUNC_2 (struct net_device*,int ) ;
 struct korina_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_10)
{
 struct korina_private *VAR_11 = FUNC_3(VAR_10);
 struct sk_buff *VAR_12;
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_11->td_ring[VAR_13].control = VAR_2;
  VAR_11->td_ring[VAR_13].devcs = VAR_4 | VAR_5;
  VAR_11->td_ring[VAR_13].ca = 0;
  VAR_11->td_ring[VAR_13].link = 0;
 }
 VAR_11->tx_next_done = VAR_11->tx_chain_head = VAR_11->tx_chain_tail =
   VAR_11->tx_full = VAR_11->tx_count = 0;
 VAR_11->tx_chain_status = VAR_9;


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_12 = FUNC_2(VAR_10, VAR_8);
  if (!VAR_12)
   return -VAR_3;
  VAR_11->rx_skb[VAR_13] = VAR_12;
  VAR_11->rd_ring[VAR_13].control = VAR_1 |
    FUNC_1(VAR_8);
  VAR_11->rd_ring[VAR_13].devcs = 0;
  VAR_11->rd_ring[VAR_13].ca = FUNC_0(VAR_12->data);
  VAR_11->rd_ring[VAR_13].link = FUNC_0(&VAR_11->rd_ring[VAR_13+1]);
 }



 VAR_11->rd_ring[VAR_13 - 1].link = FUNC_0(&VAR_11->rd_ring[0]);
 VAR_11->rd_ring[VAR_13 - 1].control |= VAR_0;

 VAR_11->rx_next_done = 0;
 VAR_11->rx_chain_head = 0;
 VAR_11->rx_chain_tail = 0;
 VAR_11->rx_chain_status = VAR_9;

 return 0;
}
