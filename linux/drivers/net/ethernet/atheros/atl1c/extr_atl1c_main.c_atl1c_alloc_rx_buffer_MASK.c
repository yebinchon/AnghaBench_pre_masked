
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {void* data; } ;
struct pci_dev {int dev; } ;
struct atl1c_rx_free_desc {int buffer_addr; } ;
struct atl1c_rfd_ring {size_t next_to_use; size_t count; struct atl1c_buffer* buffer_info; } ;
struct atl1c_buffer {int flags; int dma; scalar_t__ length; struct sk_buff* skb; } ;
struct atl1c_adapter {int hw; int netdev; scalar_t__ rx_buffer_len; struct pci_dev* pdev; struct atl1c_rfd_ring rfd_ring; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atl1c_rx_free_desc* FUNC_0 (struct atl1c_rfd_ring*,size_t) ;
 int FUNC_1 (struct atl1c_buffer*,int) ;
 int FUNC_2 (struct atl1c_buffer*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (struct atl1c_adapter*) ;
 int FUNC_9 (struct atl1c_adapter*,int ,int ,char*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,void*,scalar_t__,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct atl1c_adapter *VAR_8)
{
 struct atl1c_rfd_ring *VAR_9 = &VAR_8->rfd_ring;
 struct pci_dev *VAR_10 = VAR_8->pdev;
 struct atl1c_buffer *VAR_11, *VAR_12;
 struct sk_buff *VAR_13;
 void *VAR_14 = ((void*)0);
 u16 VAR_15 = 0;
 u16 VAR_16, VAR_17;
 struct atl1c_rx_free_desc *VAR_18;
 dma_addr_t VAR_19;

 VAR_17 = VAR_16 = VAR_9->next_to_use;
 if (++VAR_17 == VAR_9->count)
  VAR_17 = 0;
 VAR_11 = &VAR_9->buffer_info[VAR_16];
 VAR_12 = &VAR_9->buffer_info[VAR_17];

 while (VAR_12->flags & VAR_1) {
  VAR_18 = FUNC_0(VAR_9, VAR_16);

  VAR_13 = FUNC_4(VAR_8);
  if (FUNC_12(!VAR_13)) {
   if (FUNC_8(VAR_8))
    FUNC_7(&VAR_10->dev, "alloc rx buffer failed\n");
   break;
  }






  VAR_14 = VAR_13->data;
  FUNC_1(VAR_11, VAR_0);
  VAR_11->skb = VAR_13;
  VAR_11->length = VAR_8->rx_buffer_len;
  VAR_19 = FUNC_11(VAR_10, VAR_14,
      VAR_11->length,
      VAR_5);
  if (FUNC_12(FUNC_10(VAR_10, VAR_19))) {
   FUNC_6(VAR_13);
   VAR_11->skb = ((void*)0);
   VAR_11->length = 0;
   FUNC_1(VAR_11, VAR_1);
   FUNC_9(VAR_8, VAR_7, VAR_8->netdev, "RX pci_map_single failed");
   break;
  }
  VAR_11->dma = VAR_19;
  FUNC_2(VAR_11, VAR_3,
   VAR_2);
  VAR_18->buffer_addr = FUNC_5(VAR_11->dma);
  VAR_16 = VAR_17;
  if (++VAR_17 == VAR_9->count)
   VAR_17 = 0;
  VAR_11 = &VAR_9->buffer_info[VAR_16];
  VAR_12 = &VAR_9->buffer_info[VAR_17];
  VAR_15++;
 }

 if (VAR_15) {

  FUNC_13();
  VAR_9->next_to_use = VAR_16;
  FUNC_3(&VAR_8->hw, VAR_6,
   VAR_9->next_to_use & VAR_4);
 }

 return VAR_15;
}
