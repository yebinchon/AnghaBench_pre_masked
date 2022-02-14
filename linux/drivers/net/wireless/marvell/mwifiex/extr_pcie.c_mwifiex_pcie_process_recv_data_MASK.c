
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {size_t rxbd_wrptr; size_t rxbd_rdptr; size_t txbd_wrptr; struct mwifiex_pfu_buf_desc** rxbd_ring; struct sk_buff** rx_buf_list; TYPE_1__ pcie; } ;
struct mwifiex_pfu_buf_desc {int flags; int len; void* paddr; scalar_t__ offset; int frag_len; } ;
struct mwifiex_pcie_card_reg {size_t rx_mask; size_t rx_rollover_ind; int ring_flag_sop; int ring_flag_eop; size_t tx_wrap_mask; int rx_wrptr; int rx_rdptr; scalar_t__ pfu_enabled; } ;
struct mwifiex_pcie_buf_desc {int flags; int len; void* paddr; scalar_t__ offset; int frag_len; } ;
struct mwifiex_adapter {scalar_t__ intf_hdr_len; int data_received; int rx_pending; int rx_data_q; scalar_t__ rx_work_enabled; struct pcie_service_card* card; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_7 (struct mwifiex_adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct mwifiex_adapter*,struct sk_buff*,scalar_t__,int ) ;
 int FUNC_9 (struct mwifiex_adapter*) ;
 int FUNC_10 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_11 (struct mwifiex_adapter*,int ,size_t*) ;
 int FUNC_12 (struct mwifiex_adapter*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct mwifiex_adapter*,int ,size_t) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 int FUNC_16 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct mwifiex_adapter *VAR_8)
{
 struct pcie_service_card *VAR_9 = VAR_8->card;
 const struct mwifiex_pcie_card_reg *VAR_10 = VAR_9->pcie.reg;
 u32 VAR_11, VAR_12, VAR_13;
 dma_addr_t VAR_14;
 int VAR_15 = 0;
 struct sk_buff *VAR_16 = ((void*)0);
 struct mwifiex_pcie_buf_desc *VAR_17;
 struct mwifiex_pfu_buf_desc *VAR_18;

 if (!FUNC_9(VAR_8))
  FUNC_10(VAR_8);


 if (FUNC_11(VAR_8, VAR_10->rx_wrptr, &VAR_11)) {
  FUNC_6(VAR_8, VAR_2,
       "RECV DATA: failed to read reg->rx_wrptr\n");
  VAR_15 = -1;
  goto done;
 }
 VAR_9->rxbd_wrptr = VAR_11;

 while (((VAR_11 & VAR_10->rx_mask) !=
  (VAR_9->rxbd_rdptr & VAR_10->rx_mask)) ||
        ((VAR_11 & VAR_10->rx_rollover_ind) ==
  (VAR_9->rxbd_rdptr & VAR_10->rx_rollover_ind))) {
  struct sk_buff *VAR_19;
  u16 VAR_20;

  VAR_12 = VAR_9->rxbd_rdptr & VAR_10->rx_mask;
  VAR_19 = VAR_9->rx_buf_list[VAR_12];




  if (!VAR_19)
   return -VAR_1;

  FUNC_12(VAR_8, VAR_19, VAR_7);
  VAR_9->rx_buf_list[VAR_12] = ((void*)0);




  VAR_20 = FUNC_4(VAR_19->data);
  if (FUNC_1(VAR_20 <= VAR_8->intf_hdr_len ||
       VAR_20 > VAR_6)) {
   FUNC_6(VAR_8, VAR_2,
        "Invalid RX len %d, Rd=%#x, Wr=%#x\n",
        VAR_20, VAR_9->rxbd_rdptr, VAR_11);
   FUNC_3(VAR_19);
  } else {
   FUNC_15(VAR_19, VAR_20);
   FUNC_6(VAR_8, VAR_0,
        "info: RECV DATA: Rd=%#x, Wr=%#x, Len=%d\n",
        VAR_9->rxbd_rdptr, VAR_11, VAR_20);
   FUNC_14(VAR_19, VAR_8->intf_hdr_len);
   if (VAR_8->rx_work_enabled) {
    FUNC_16(&VAR_8->rx_data_q, VAR_19);
    VAR_8->data_received = 1;
    FUNC_2(&VAR_8->rx_pending);
   } else {
    FUNC_7(VAR_8, VAR_19);
   }
  }

  VAR_16 = FUNC_5(VAR_6,
            VAR_3);
  if (!VAR_16) {
   FUNC_6(VAR_8, VAR_2,
        "Unable to allocate skb.\n");
   return -VAR_1;
  }

  if (FUNC_8(VAR_8, VAR_16,
        VAR_6,
        VAR_7))
   return -1;

  VAR_14 = FUNC_0(VAR_16);

  FUNC_6(VAR_8, VAR_4,
       "RECV DATA: Attach new sk_buff %p at rxbd_rdidx=%d\n",
       VAR_16, VAR_12);
  VAR_9->rx_buf_list[VAR_12] = VAR_16;

  if (VAR_10->pfu_enabled) {
   VAR_18 = VAR_9->rxbd_ring[VAR_12];
   VAR_18->paddr = VAR_14;
   VAR_18->len = VAR_16->len;
   VAR_18->frag_len = VAR_16->len;
   VAR_18->offset = 0;
   VAR_18->flags = VAR_10->ring_flag_sop | VAR_10->ring_flag_eop;
  } else {
   VAR_17 = VAR_9->rxbd_ring[VAR_12];
   VAR_17->paddr = VAR_14;
   VAR_17->len = VAR_16->len;
   VAR_17->flags = 0;
  }

  if ((++VAR_9->rxbd_rdptr & VAR_10->rx_mask) ==
       VAR_5) {
   VAR_9->rxbd_rdptr = ((VAR_9->rxbd_rdptr &
          VAR_10->rx_rollover_ind) ^
          VAR_10->rx_rollover_ind);
  }
  FUNC_6(VAR_8, VAR_0,
       "info: RECV DATA: <Rd: %#x, Wr: %#x>\n",
       VAR_9->rxbd_rdptr, VAR_11);

  VAR_13 = VAR_9->txbd_wrptr & VAR_10->tx_wrap_mask;

  if (FUNC_13(VAR_8, VAR_10->rx_rdptr,
          VAR_9->rxbd_rdptr | VAR_13)) {
   FUNC_6(VAR_8, VAR_0,
        "RECV DATA: failed to write reg->rx_rdptr\n");
   VAR_15 = -1;
   goto done;
  }


  if (FUNC_11(VAR_8, VAR_10->rx_wrptr, &VAR_11)) {
   FUNC_6(VAR_8, VAR_2,
        "RECV DATA: failed to read reg->rx_wrptr\n");
   VAR_15 = -1;
   goto done;
  }
  FUNC_6(VAR_8, VAR_0,
       "info: RECV DATA: Rcvd packet from fw successfully\n");
  VAR_9->rxbd_wrptr = VAR_11;
 }

done:
 return VAR_15;
}
