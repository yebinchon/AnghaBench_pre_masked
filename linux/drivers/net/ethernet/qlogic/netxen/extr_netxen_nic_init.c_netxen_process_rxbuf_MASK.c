
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int ip_summed; } ;
struct nx_host_rds_ring {int dma_size; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int state; struct sk_buff* skb; int dma; } ;
struct TYPE_4__ {int csummed; } ;
struct netxen_adapter {TYPE_2__ stats; TYPE_1__* netdev; int pdev; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct netxen_adapter *VAR_6,
  struct nx_host_rds_ring *VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct netxen_rx_buffer *VAR_10;
 struct sk_buff *VAR_11;

 VAR_10 = &VAR_7->rx_buf_arr[VAR_8];

 FUNC_1(VAR_6->pdev, VAR_10->dma, VAR_7->dma_size,
   VAR_4);

 VAR_11 = VAR_10->skb;
 if (!VAR_11)
  goto no_skb;

 if (FUNC_0((VAR_6->netdev->features & VAR_2)
     && VAR_9 == VAR_5)) {
  VAR_6->stats.csummed++;
  VAR_11->ip_summed = VAR_1;
 } else
  VAR_11->ip_summed = VAR_0;

 VAR_10->skb = ((void*)0);
no_skb:
 VAR_10->state = VAR_3;
 return VAR_11;
}
