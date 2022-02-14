
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct ixgb_rx_desc {scalar_t__ status; int buff_addr; } ;
struct ixgb_desc_ring {unsigned int next_to_use; unsigned int count; struct ixgb_buffer* buffer_info; } ;
struct ixgb_buffer {int dma; int length; struct sk_buff* skb; } ;
struct ixgb_adapter {int hw; int alloc_rx_buff_failed; int rx_buffer_len; struct pci_dev* pdev; struct net_device* netdev; struct ixgb_desc_ring rx_ring; } ;


 int VAR_0 ;
 long FUNC_0 (struct ixgb_desc_ring*) ;
 struct ixgb_rx_desc* FUNC_1 (struct ixgb_desc_ring,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int) ;
 struct sk_buff* FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(struct ixgb_adapter *VAR_2, int VAR_3)
{
 struct ixgb_desc_ring *VAR_4 = &VAR_2->rx_ring;
 struct net_device *VAR_5 = VAR_2->netdev;
 struct pci_dev *VAR_6 = VAR_2->pdev;
 struct ixgb_rx_desc *VAR_7;
 struct ixgb_buffer *VAR_8;
 struct sk_buff *VAR_9;
 unsigned int VAR_10;
 long VAR_11;

 VAR_10 = VAR_4->next_to_use;
 VAR_8 = &VAR_4->buffer_info[VAR_10];
 VAR_11 = FUNC_0(VAR_4);



 while (--VAR_11 > 2 && VAR_3--) {

  VAR_9 = VAR_8->skb;
  if (VAR_9) {
   FUNC_8(VAR_9, 0);
   goto map_skb;
  }

  VAR_9 = FUNC_7(VAR_5, VAR_2->rx_buffer_len);
  if (FUNC_9(!VAR_9)) {

   VAR_2->alloc_rx_buff_failed++;
   break;
  }

  VAR_8->skb = VAR_9;
  VAR_8->length = VAR_2->rx_buffer_len;
map_skb:
  VAR_8->dma = FUNC_4(&VAR_6->dev,
                                    VAR_9->data,
                                    VAR_2->rx_buffer_len,
        VAR_0);
  if (FUNC_5(&VAR_6->dev, VAR_8->dma)) {
   VAR_2->alloc_rx_buff_failed++;
   break;
  }

  VAR_7 = FUNC_1(*VAR_4, VAR_10);
  VAR_7->buff_addr = FUNC_3(VAR_8->dma);



  VAR_7->status = 0;


  if (++VAR_10 == VAR_4->count)
   VAR_10 = 0;
  VAR_8 = &VAR_4->buffer_info[VAR_10];
 }

 if (FUNC_6(VAR_4->next_to_use != VAR_10)) {
  VAR_4->next_to_use = VAR_10;
  if (FUNC_9(VAR_10-- == 0))
   VAR_10 = (VAR_4->count - 1);





  FUNC_10();
  FUNC_2(&VAR_2->hw, VAR_1, VAR_10);
 }
}
