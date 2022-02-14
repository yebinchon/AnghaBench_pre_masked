
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ ip_summed; TYPE_12__* data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int frame_control; } ;
struct htt_msdu_ext_desc {int flags; int frags; } ;
struct TYPE_22__ {void* len; void* paddr; } ;
struct TYPE_20__ {void* len_16; int paddr_hi; void* paddr_lo; } ;
struct htt_data_tx_desc_frag {TYPE_4__ dword_addr; TYPE_2__ tword_addr; } ;
struct device {int dummy; } ;
struct ath10k_skb_cb {int flags; int paddr; } ;
struct TYPE_18__ {size_t eid; scalar_t__ flags; void* len; } ;
struct TYPE_25__ {void* freq; void* peerid; } ;
struct TYPE_26__ {int flags0; void* peerid; TYPE_7__ offchan_tx; void* frags_paddr; void* id; void* len; void* flags1; } ;
struct TYPE_24__ {int msg_type; } ;
struct ath10k_htt_txbuf_32 {TYPE_12__ htc_hdr; TYPE_8__ cmd_tx; TYPE_6__ cmd_hdr; struct htt_data_tx_desc_frag* frags; } ;
struct TYPE_21__ {int paddr; struct htt_msdu_ext_desc* vaddr_desc_32; } ;
struct TYPE_17__ {int paddr; struct ath10k_htt_txbuf_32* vaddr_txbuff_32; } ;
struct ath10k_htt {size_t eid; struct ath10k* ar; TYPE_3__ frag_desc; TYPE_11__ txbuf; int prefetch_len; } ;
struct ath10k_hif_sg_item {int paddr; int len; TYPE_12__* vaddr; int * transfer_context; scalar_t__ transfer_id; } ;
struct TYPE_16__ {TYPE_9__* endpoint; } ;
struct TYPE_23__ {scalar_t__ continuous_frag_desc; } ;
struct TYPE_19__ {int roc_freq; } ;
struct ath10k {TYPE_10__ htc; TYPE_5__ hw_params; int dev_flags; TYPE_1__ scan; struct device* dev; } ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;
struct TYPE_27__ {int ul_pipe_id; } ;


 int FUNC_0 (struct ath10k_hif_sg_item*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct ath10k_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int VAR_19 ;
 int FUNC_3 (int const,int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ath10k*,int ,char*,int,int,int,int,int*,int*,int,int,int) ;
 int FUNC_7 (struct ath10k*,int ,int *,char*,TYPE_12__*,int) ;
 int FUNC_8 (struct ath10k*,int ,struct ath10k_hif_sg_item*,int ) ;
 int FUNC_9 (struct ath10k_htt*,struct sk_buff*) ;
 int FUNC_10 (struct ath10k_htt*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct ath10k*,struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct ath10k*) ;
 int FUNC_14 (struct device*,TYPE_12__*,int,int ) ;
 int FUNC_15 (struct device*,int) ;
 int FUNC_16 (struct device*,int,int,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (struct htt_msdu_ext_desc*,int ,int) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (struct sk_buff*,int ) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (struct ath10k*,int,int,int,int) ;
 int FUNC_27 (struct ath10k*,TYPE_12__*,int) ;
 int FUNC_28 (struct ath10k*,TYPE_12__*,int) ;
 scalar_t__ FUNC_29 (int) ;

__attribute__((used)) static int FUNC_30(struct ath10k_htt *VAR_20,
       enum ath10k_hw_txrx_mode VAR_21,
       struct sk_buff *VAR_22)
{
 struct ath10k *VAR_23 = VAR_20->ar;
 struct device *VAR_24 = VAR_23->dev;
 struct ieee80211_hdr *VAR_25 = (struct ieee80211_hdr *)VAR_22->data;
 struct ieee80211_tx_info *VAR_26 = FUNC_2(VAR_22);
 struct ath10k_skb_cb *VAR_27 = FUNC_1(VAR_22);
 struct ath10k_hif_sg_item VAR_28[2];
 struct ath10k_htt_txbuf_32 *VAR_29;
 struct htt_data_tx_desc_frag *VAR_30;
 bool VAR_31 = (VAR_21 == 131);
 u8 VAR_32 = FUNC_12(VAR_23, VAR_22);
 u8 VAR_33 = FUNC_11(VAR_22, VAR_31);
 int VAR_34;
 int VAR_35;
 u8 VAR_36 = 0;
 u16 VAR_37, VAR_38 = 0;
 u16 VAR_39 = 0;
 u32 VAR_40 = 0;
 u32 VAR_41;
 struct htt_msdu_ext_desc *VAR_42 = ((void*)0);
 struct htt_msdu_ext_desc *VAR_43 = ((void*)0);

 VAR_35 = FUNC_9(VAR_20, VAR_22);
 if (VAR_35 < 0)
  goto err;

 VAR_37 = VAR_35;

 VAR_34 = FUNC_22(VAR_20->prefetch_len, VAR_22->len);
 VAR_34 = FUNC_23(VAR_34, 4);

 VAR_29 = VAR_20->txbuf.vaddr_txbuff_32 + VAR_37;
 VAR_41 = VAR_20->txbuf.paddr +
        (sizeof(struct ath10k_htt_txbuf_32) * VAR_37);

 if ((FUNC_18(VAR_25->frame_control) ||
      FUNC_19(VAR_25->frame_control) ||
      FUNC_20(VAR_25->frame_control)) &&
      FUNC_17(VAR_25->frame_control)) {
  FUNC_24(VAR_22, VAR_18);
 } else if (!(VAR_27->flags & VAR_3) &&
     VAR_21 == 128 &&
     FUNC_17(VAR_25->frame_control)) {
  FUNC_24(VAR_22, VAR_18);
 }

 VAR_27->paddr = FUNC_14(VAR_24, VAR_22->data, VAR_22->len,
           VAR_5);
 VAR_35 = FUNC_15(VAR_24, VAR_27->paddr);
 if (VAR_35) {
  VAR_35 = -VAR_6;
  goto err_free_msdu_id;
 }

 if (FUNC_29(VAR_26->flags & VAR_19))
  VAR_39 = VAR_23->scan.roc_freq;

 switch (VAR_21) {
 case 128:
 case 129:
  VAR_36 |= VAR_7;

 case 131:
  if (VAR_23->hw_params.continuous_frag_desc) {
   VAR_43 = VAR_20->frag_desc.vaddr_desc_32;
   FUNC_21(&VAR_43[VAR_37], 0,
          sizeof(struct htt_msdu_ext_desc));
   VAR_30 = (struct htt_data_tx_desc_frag *)
    &VAR_43[VAR_37].frags;
   VAR_42 = &VAR_43[VAR_37];
   VAR_30[0].tword_addr.paddr_lo =
    FUNC_5(VAR_27->paddr);
   VAR_30[0].tword_addr.paddr_hi = 0;
   VAR_30[0].tword_addr.len_16 = FUNC_4(VAR_22->len);

   VAR_40 = VAR_20->frag_desc.paddr +
    (sizeof(struct htt_msdu_ext_desc) * VAR_37);
  } else {
   VAR_30 = VAR_29->frags;
   VAR_30[0].dword_addr.paddr =
    FUNC_5(VAR_27->paddr);
   VAR_30[0].dword_addr.len = FUNC_5(VAR_22->len);
   VAR_30[1].dword_addr.paddr = 0;
   VAR_30[1].dword_addr.len = 0;

   VAR_40 = VAR_41;
  }
  VAR_36 |= FUNC_3(VAR_21, VAR_9);
  break;
 case 130:
  VAR_36 |= FUNC_3(130,
        VAR_9);
  VAR_36 |= VAR_7;

  VAR_40 = VAR_27->paddr;
  break;
 }
 VAR_29->htc_hdr.eid = VAR_20->eid;
 VAR_29->htc_hdr.len = FUNC_4(sizeof(VAR_29->cmd_hdr) +
        sizeof(VAR_29->cmd_tx) +
        VAR_34);
 VAR_29->htc_hdr.flags = 0;

 if (VAR_27->flags & VAR_3)
  VAR_36 |= VAR_8;

 VAR_38 |= FUNC_3((u16)VAR_32, VAR_14);
 VAR_38 |= FUNC_3((u16)VAR_33, VAR_12);
 if (VAR_22->ip_summed == VAR_4 &&
     !FUNC_25(VAR_2, &VAR_23->dev_flags)) {
  VAR_38 |= VAR_10;
  VAR_38 |= VAR_11;
  if (VAR_23->hw_params.continuous_frag_desc)
   VAR_42->flags |= VAR_17;
 }





 VAR_38 |= VAR_13;

 VAR_29->cmd_hdr.msg_type = VAR_15;
 VAR_29->cmd_tx.flags0 = VAR_36;
 VAR_29->cmd_tx.flags1 = FUNC_4(VAR_38);
 VAR_29->cmd_tx.len = FUNC_4(VAR_22->len);
 VAR_29->cmd_tx.id = FUNC_4(VAR_37);
 VAR_29->cmd_tx.frags_paddr = FUNC_5(VAR_40);
 if (FUNC_13(VAR_23)) {
  VAR_29->cmd_tx.offchan_tx.peerid =
    FUNC_4(VAR_16);
  VAR_29->cmd_tx.offchan_tx.freq =
    FUNC_4(VAR_39);
 } else {
  VAR_29->cmd_tx.peerid =
    FUNC_5(VAR_16);
 }

 FUNC_26(VAR_23, VAR_37, VAR_22->len, VAR_32, VAR_33);
 FUNC_6(VAR_23, VAR_0,
     "htt tx flags0 %hhu flags1 %hu len %d id %hu frags_paddr %pad, msdu_paddr %pad vdev %hhu tid %hhu freq %hu\n",
     VAR_36, VAR_38, VAR_22->len, VAR_37, &VAR_40,
     &VAR_27->paddr, VAR_32, VAR_33, VAR_39);
 FUNC_7(VAR_23, VAR_1, ((void*)0), "htt tx msdu: ",
   VAR_22->data, VAR_22->len);
 FUNC_27(VAR_23, VAR_22->data, VAR_22->len);
 FUNC_28(VAR_23, VAR_22->data, VAR_22->len);

 VAR_28[0].transfer_id = 0;
 VAR_28[0].transfer_context = ((void*)0);
 VAR_28[0].vaddr = &VAR_29->htc_hdr;
 VAR_28[0].paddr = VAR_41 +
       sizeof(VAR_29->frags);
 VAR_28[0].len = sizeof(VAR_29->htc_hdr) +
     sizeof(VAR_29->cmd_hdr) +
     sizeof(VAR_29->cmd_tx);

 VAR_28[1].transfer_id = 0;
 VAR_28[1].transfer_context = ((void*)0);
 VAR_28[1].vaddr = VAR_22->data;
 VAR_28[1].paddr = VAR_27->paddr;
 VAR_28[1].len = VAR_34;

 VAR_35 = FUNC_8(VAR_20->ar,
          VAR_20->ar->htc.endpoint[VAR_20->eid].ul_pipe_id,
          VAR_28, FUNC_0(VAR_28));
 if (VAR_35)
  goto err_unmap_msdu;

 return 0;

err_unmap_msdu:
 FUNC_16(VAR_24, VAR_27->paddr, VAR_22->len, VAR_5);
err_free_msdu_id:
 FUNC_10(VAR_20, VAR_37);
err:
 return VAR_35;
}
