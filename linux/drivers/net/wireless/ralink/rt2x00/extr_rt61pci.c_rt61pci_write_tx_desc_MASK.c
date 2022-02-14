
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int signal; int service; int length_low; int length_high; int ifs; } ;
struct TYPE_7__ {TYPE_2__ plcp; } ;
struct txentry_desc {int iv_offset; int length; scalar_t__ rate_mode; int key_idx; int cipher; int flags; TYPE_3__ u; } ;
struct skb_frame_desc {int skb_dma; int desc_len; int * desc; int * iv; } ;
struct queue_entry_priv_mmio {int * desc; } ;
struct queue_entry {int entry_idx; TYPE_4__* queue; struct queue_entry_priv_mmio* priv_data; int skb; } ;
typedef int __le32 ;
struct TYPE_8__ {int qid; int aifs; int cw_min; int cw_max; TYPE_1__* rt2x00dev; } ;
struct TYPE_5__ {int tx_power; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 struct skb_frame_desc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct queue_entry *VAR_44,
      struct txentry_desc *VAR_45)
{
 struct skb_frame_desc *VAR_46 = FUNC_2(VAR_44->skb);
 struct queue_entry_priv_mmio *VAR_47 = VAR_44->priv_data;
 __le32 *VAR_48 = VAR_47->desc;
 u32 VAR_49;




 VAR_49 = FUNC_3(VAR_48, 1);
 FUNC_5(&VAR_49, VAR_31, VAR_44->queue->qid);
 FUNC_5(&VAR_49, VAR_27, VAR_44->queue->aifs);
 FUNC_5(&VAR_49, VAR_30, VAR_44->queue->cw_min);
 FUNC_5(&VAR_49, VAR_29, VAR_44->queue->cw_max);
 FUNC_5(&VAR_49, VAR_33, VAR_45->iv_offset);
 FUNC_5(&VAR_49, VAR_32,
      FUNC_6(VAR_5, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_28, 1);
 FUNC_4(VAR_48, 1, VAR_49);

 VAR_49 = FUNC_3(VAR_48, 2);
 FUNC_5(&VAR_49, VAR_37, VAR_45->u.plcp.signal);
 FUNC_5(&VAR_49, VAR_36, VAR_45->u.plcp.service);
 FUNC_5(&VAR_49, VAR_35,
      VAR_45->u.plcp.length_low);
 FUNC_5(&VAR_49, VAR_34,
      VAR_45->u.plcp.length_high);
 FUNC_4(VAR_48, 2, VAR_49);

 if (FUNC_6(VAR_2, &VAR_45->flags)) {
  FUNC_1(VAR_48, 3, VAR_46->iv[0]);
  FUNC_1(VAR_48, 4, VAR_46->iv[1]);
 }

 VAR_49 = FUNC_3(VAR_48, 5);
 FUNC_5(&VAR_49, VAR_39, VAR_44->queue->qid);
 FUNC_5(&VAR_49, VAR_38, VAR_44->entry_idx);
 FUNC_5(&VAR_49, VAR_40,
      FUNC_0(VAR_44->queue->rt2x00dev->tx_power));
 FUNC_5(&VAR_49, VAR_41, 1);
 FUNC_4(VAR_48, 5, VAR_49);

 if (VAR_44->queue->qid != VAR_9) {
  VAR_49 = FUNC_3(VAR_48, 6);
  FUNC_5(&VAR_49, VAR_42,
       VAR_46->skb_dma);
  FUNC_4(VAR_48, 6, VAR_49);

  VAR_49 = FUNC_3(VAR_48, 11);
  FUNC_5(&VAR_49, VAR_26,
       VAR_45->length);
  FUNC_4(VAR_48, 11, VAR_49);
 }






 VAR_49 = FUNC_3(VAR_48, 0);
 FUNC_5(&VAR_49, VAR_21, 1);
 FUNC_5(&VAR_49, VAR_25, 1);
 FUNC_5(&VAR_49, VAR_19,
      FUNC_6(VAR_6, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_12,
      FUNC_6(VAR_0, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_23,
      FUNC_6(VAR_7, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_20,
      (VAR_45->rate_mode == VAR_10));
 FUNC_5(&VAR_49, VAR_16, VAR_45->u.plcp.ifs);
 FUNC_5(&VAR_49, VAR_22,
      FUNC_6(VAR_8, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_24,
      FUNC_6(VAR_3, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_18,
      FUNC_6(VAR_4, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_17, VAR_45->key_idx);
 FUNC_5(&VAR_49, VAR_15, VAR_45->length);
 FUNC_5(&VAR_49, VAR_13,
      FUNC_6(VAR_1, &VAR_45->flags));
 FUNC_5(&VAR_49, VAR_14, VAR_45->cipher);
 FUNC_4(VAR_48, 0, VAR_49);




 VAR_46->desc = VAR_48;
 VAR_46->desc_len = (VAR_44->queue->qid == VAR_9) ? VAR_43 :
       VAR_11;
}
