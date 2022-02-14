
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pci_dev {int dummy; } ;
struct nx_host_tx_ring {size_t sw_consumer; int * hw_consumer; int num_desc; struct netxen_cmd_buffer* cmd_buf_arr; } ;
struct netxen_skb_frag {unsigned long long dma; int length; } ;
struct netxen_cmd_buffer {int frag_count; int * skb; struct netxen_skb_frag* frag_array; } ;
struct TYPE_2__ {int xmitfinished; } ;
struct netxen_adapter {int tx_clean_lock; scalar_t__ tx_timeo_cnt; TYPE_1__ stats; struct nx_host_tx_ring* tx_ring; struct net_device* netdev; struct pci_dev* pdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct nx_host_tx_ring*) ;
 int FUNC_8 (struct pci_dev*,unsigned long long,int ,int ) ;
 int FUNC_9 (struct pci_dev*,unsigned long long,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct netxen_adapter *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7;
 struct netxen_cmd_buffer *VAR_8;
 struct pci_dev *VAR_9 = VAR_3->pdev;
 struct net_device *VAR_10 = VAR_3->netdev;
 struct netxen_skb_frag *VAR_11;
 int VAR_12 = 0;
 struct nx_host_tx_ring *VAR_13 = VAR_3->tx_ring;

 if (!FUNC_11(&VAR_3->tx_clean_lock))
  return 1;

 VAR_4 = VAR_13->sw_consumer;
 VAR_5 = FUNC_2(*(VAR_13->hw_consumer));

 while (VAR_4 != VAR_5) {
  VAR_8 = &VAR_13->cmd_buf_arr[VAR_4];
  if (VAR_8->skb) {
   VAR_11 = &VAR_8->frag_array[0];
   FUNC_9(VAR_9, VAR_11->dma, VAR_11->length,
      VAR_1);
   VAR_11->dma = 0ULL;
   for (VAR_7 = 1; VAR_7 < VAR_8->frag_count; VAR_7++) {
    VAR_11++;
    FUNC_8(VAR_9, VAR_11->dma, VAR_11->length,
            VAR_1);
    VAR_11->dma = 0ULL;
   }

   VAR_3->stats.xmitfinished++;
   FUNC_0(VAR_8->skb);
   VAR_8->skb = ((void*)0);
  }

  VAR_4 = FUNC_1(VAR_4, VAR_13->num_desc);
  if (++VAR_6 >= VAR_0)
   break;
 }

 VAR_13->sw_consumer = VAR_4;

 if (VAR_6 && FUNC_5(VAR_10)) {
  FUNC_10();

  if (FUNC_4(VAR_10) && FUNC_3(VAR_10))
   if (FUNC_7(VAR_13) > VAR_2)
    FUNC_6(VAR_10);
  VAR_3->tx_timeo_cnt = 0;
 }
 VAR_5 = FUNC_2(*(VAR_13->hw_consumer));
 VAR_12 = (VAR_4 == VAR_5);
 FUNC_12(&VAR_3->tx_clean_lock);

 return VAR_12;
}
