
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int len; int * data; } ;
struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; int size; TYPE_2__* buffer_info; scalar_t__ dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int data; } ;
struct e1000_tx_desc {TYPE_4__ upper; TYPE_3__ lower; void* buffer_addr; } ;
struct e1000_tx_buffer {int dummy; } ;
struct e1000_rx_ring {int count; int size; TYPE_5__* buffer_info; scalar_t__ dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; } ;
struct e1000_rx_desc {void* buffer_addr; } ;
struct e1000_rx_buffer {int dummy; } ;
struct e1000_hw {int mc_filter_type; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_rx_ring test_rx_ring; struct e1000_tx_ring test_tx_ring; struct e1000_hw hw; } ;
struct TYPE_6__ {int * data; } ;
struct TYPE_10__ {void* dma; TYPE_1__ rxbuf; } ;
struct TYPE_7__ {int length; void* dma; struct sk_buff* skb; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct e1000_rx_desc* FUNC_1 (struct e1000_rx_ring,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct e1000_tx_desc* FUNC_2 (struct e1000_tx_ring,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct sk_buff* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (int *,int,scalar_t__*,int ) ;
 void* FUNC_7 (int *,int *,int,int ) ;
 scalar_t__ FUNC_8 (int *,void*) ;
 int FUNC_9 (struct e1000_adapter*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 void* FUNC_12 (int,int,int ) ;
 int * FUNC_13 (int,int ) ;
 int FUNC_14 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct e1000_adapter *VAR_35)
{
 struct e1000_hw *VAR_36 = &VAR_35->hw;
 struct e1000_tx_ring *VAR_37 = &VAR_35->test_tx_ring;
 struct e1000_rx_ring *VAR_38 = &VAR_35->test_rx_ring;
 struct pci_dev *VAR_39 = VAR_35->pdev;
 u32 VAR_40;
 int VAR_41, VAR_42;



 if (!VAR_37->count)
  VAR_37->count = VAR_6;

 VAR_37->buffer_info = FUNC_12(VAR_37->count, sizeof(struct e1000_tx_buffer),
        VAR_20);
 if (!VAR_37->buffer_info) {
  VAR_42 = 1;
  goto err_nomem;
 }

 VAR_37->size = VAR_37->count * sizeof(struct e1000_tx_desc);
 VAR_37->size = FUNC_0(VAR_37->size, 4096);
 VAR_37->desc = FUNC_6(&VAR_39->dev, VAR_37->size, &VAR_37->dma,
     VAR_20);
 if (!VAR_37->desc) {
  VAR_42 = 2;
  goto err_nomem;
 }
 VAR_37->next_to_use = VAR_37->next_to_clean = 0;

 FUNC_11(VAR_31, ((u64)VAR_37->dma & 0x00000000FFFFFFFF));
 FUNC_11(VAR_30, ((u64)VAR_37->dma >> 32));
 FUNC_11(VAR_33, VAR_37->count * sizeof(struct e1000_tx_desc));
 FUNC_11(VAR_32, 0);
 FUNC_11(VAR_34, 0);
 FUNC_11(VAR_29, VAR_16 | VAR_15 |
      VAR_3 << VAR_4 |
      VAR_7 << VAR_2);

 for (VAR_41 = 0; VAR_41 < VAR_37->count; VAR_41++) {
  struct e1000_tx_desc *VAR_43 = FUNC_2(*VAR_37, VAR_41);
  struct sk_buff *VAR_44;
  unsigned int VAR_45 = 1024;

  VAR_44 = FUNC_3(VAR_45, VAR_20);
  if (!VAR_44) {
   VAR_42 = 3;
   goto err_nomem;
  }
  FUNC_14(VAR_44, VAR_45);
  VAR_37->buffer_info[VAR_41].skb = VAR_44;
  VAR_37->buffer_info[VAR_41].length = VAR_44->len;
  VAR_37->buffer_info[VAR_41].dma =
   FUNC_7(&VAR_39->dev, VAR_44->data, VAR_44->len,
           VAR_1);
  if (FUNC_8(&VAR_39->dev, VAR_37->buffer_info[VAR_41].dma)) {
   VAR_42 = 4;
   goto err_nomem;
  }
  VAR_43->buffer_addr = FUNC_5(VAR_37->buffer_info[VAR_41].dma);
  VAR_43->lower.data = FUNC_4(VAR_44->len);
  VAR_43->lower.data |= FUNC_4(VAR_17 |
         VAR_18 |
         VAR_19);
  VAR_43->upper.data = 0;
 }



 if (!VAR_38->count)
  VAR_38->count = VAR_5;

 VAR_38->buffer_info = FUNC_12(VAR_38->count, sizeof(struct e1000_rx_buffer),
        VAR_20);
 if (!VAR_38->buffer_info) {
  VAR_42 = 5;
  goto err_nomem;
 }

 VAR_38->size = VAR_38->count * sizeof(struct e1000_rx_desc);
 VAR_38->desc = FUNC_6(&VAR_39->dev, VAR_38->size, &VAR_38->dma,
     VAR_20);
 if (!VAR_38->desc) {
  VAR_42 = 6;
  goto err_nomem;
 }
 VAR_38->next_to_use = VAR_38->next_to_clean = 0;

 VAR_40 = FUNC_10(VAR_23);
 FUNC_11(VAR_23, VAR_40 & ~VAR_9);
 FUNC_11(VAR_25, ((u64)VAR_38->dma & 0xFFFFFFFF));
 FUNC_11(VAR_24, ((u64)VAR_38->dma >> 32));
 FUNC_11(VAR_27, VAR_38->size);
 FUNC_11(VAR_26, 0);
 FUNC_11(VAR_28, 0);
 VAR_40 = VAR_9 | VAR_8 | VAR_13 |
  VAR_10 | VAR_12 |
  (VAR_36->mc_filter_type << VAR_11);
 FUNC_11(VAR_23, VAR_40);

 for (VAR_41 = 0; VAR_41 < VAR_38->count; VAR_41++) {
  struct e1000_rx_desc *VAR_46 = FUNC_1(*VAR_38, VAR_41);
  u8 *VAR_47;

  VAR_47 = FUNC_13(VAR_14 + VAR_22 + VAR_21,
         VAR_20);
  if (!VAR_47) {
   VAR_42 = 7;
   goto err_nomem;
  }
  VAR_38->buffer_info[VAR_41].rxbuf.data = VAR_47;

  VAR_38->buffer_info[VAR_41].dma =
   FUNC_7(&VAR_39->dev,
           VAR_47 + VAR_22 + VAR_21,
           VAR_14, VAR_0);
  if (FUNC_8(&VAR_39->dev, VAR_38->buffer_info[VAR_41].dma)) {
   VAR_42 = 8;
   goto err_nomem;
  }
  VAR_46->buffer_addr = FUNC_5(VAR_38->buffer_info[VAR_41].dma);
 }

 return 0;

err_nomem:
 FUNC_9(VAR_35);
 return VAR_42;
}
