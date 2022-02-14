
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {struct mwifiex_pfu_buf_desc** rxbd_ring; scalar_t__ rxbd_ring_vbase; struct sk_buff** rx_buf_list; TYPE_1__ pcie; } ;
struct mwifiex_pfu_buf_desc {int flags; void* len; void* paddr; scalar_t__ offset; void* frag_len; } ;
struct mwifiex_pcie_card_reg {int ring_flag_eop; int ring_flag_sop; scalar_t__ pfu_enabled; } ;
struct mwifiex_pcie_buf_desc {int flags; void* len; void* paddr; scalar_t__ offset; void* frag_len; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mwifiex_adapter *VAR_7)
{
 struct pcie_service_card *VAR_8 = VAR_7->card;
 const struct mwifiex_pcie_card_reg *VAR_9 = VAR_8->pcie.reg;
 struct sk_buff *VAR_10;
 struct mwifiex_pcie_buf_desc *VAR_11;
 struct mwifiex_pfu_buf_desc *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {

  VAR_10 = FUNC_2(VAR_5,
        VAR_2);
  if (!VAR_10) {
   FUNC_3(VAR_7, VAR_1,
        "Unable to allocate skb for RX ring.\n");
   FUNC_1(VAR_8->rxbd_ring_vbase);
   return -VAR_0;
  }

  if (FUNC_4(VAR_7, VAR_10,
        VAR_5,
        VAR_6))
   return -1;

  VAR_13 = FUNC_0(VAR_10);

  FUNC_3(VAR_7, VAR_3,
       "info: RX ring: skb=%p len=%d data=%p buf_pa=%#x:%x\n",
       VAR_10, VAR_10->len, VAR_10->data, (u32)VAR_13,
       (u32)((u64)VAR_13 >> 32));

  VAR_8->rx_buf_list[VAR_14] = VAR_10;
  if (VAR_9->pfu_enabled) {
   VAR_8->rxbd_ring[VAR_14] = (void *)VAR_8->rxbd_ring_vbase +
          (sizeof(*VAR_12) * VAR_14);
   VAR_12 = VAR_8->rxbd_ring[VAR_14];
   VAR_12->paddr = VAR_13;
   VAR_12->len = (u16)VAR_10->len;
   VAR_12->frag_len = (u16)VAR_10->len;
   VAR_12->flags = VAR_9->ring_flag_eop | VAR_9->ring_flag_sop;
   VAR_12->offset = 0;
  } else {
   VAR_8->rxbd_ring[VAR_14] = (void *)(VAR_8->rxbd_ring_vbase +
          (sizeof(*VAR_11) * VAR_14));
   VAR_11 = VAR_8->rxbd_ring[VAR_14];
   VAR_11->paddr = VAR_13;
   VAR_11->len = (u16)VAR_10->len;
   VAR_11->flags = 0;
  }
 }

 return 0;
}
