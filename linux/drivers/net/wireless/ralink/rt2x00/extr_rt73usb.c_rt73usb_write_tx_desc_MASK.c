
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ifs; int signal; int service; int length_low; int length_high; } ;
struct TYPE_7__ {TYPE_1__ plcp; } ;
struct txentry_desc {scalar_t__ rate_mode; int key_idx; int length; int cipher; int iv_offset; int flags; TYPE_2__ u; } ;
struct skb_frame_desc {int desc_len; int * desc; int flags; int * iv; } ;
struct queue_entry {TYPE_4__* queue; TYPE_5__* skb; } ;
typedef int __le32 ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int qid; int aifs; int cw_min; int cw_max; TYPE_3__* rt2x00dev; } ;
struct TYPE_8__ {int tx_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 struct skb_frame_desc* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct queue_entry *VAR_38,
      struct txentry_desc *VAR_39)
{
 struct skb_frame_desc *VAR_40 = FUNC_2(VAR_38->skb);
 __le32 *VAR_41 = (__le32 *) VAR_38->skb->data;
 u32 VAR_42;




 VAR_42 = FUNC_3(VAR_41, 0);
 FUNC_5(&VAR_42, VAR_13,
      FUNC_6(VAR_1, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_25, 1);
 FUNC_5(&VAR_42, VAR_20,
      FUNC_6(VAR_6, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_12,
      FUNC_6(VAR_0, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_23,
      FUNC_6(VAR_7, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_21,
      (VAR_39->rate_mode == VAR_9));
 FUNC_5(&VAR_42, VAR_17, VAR_39->u.plcp.ifs);
 FUNC_5(&VAR_42, VAR_22,
      FUNC_6(VAR_8, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_24,
      FUNC_6(VAR_3, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_19,
      FUNC_6(VAR_4, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_18, VAR_39->key_idx);
 FUNC_5(&VAR_42, VAR_16, VAR_39->length);
 FUNC_5(&VAR_42, VAR_14,
      FUNC_6(VAR_1, &VAR_39->flags));
 FUNC_5(&VAR_42, VAR_15, VAR_39->cipher);
 FUNC_4(VAR_41, 0, VAR_42);

 VAR_42 = FUNC_3(VAR_41, 1);
 FUNC_5(&VAR_42, VAR_29, VAR_38->queue->qid);
 FUNC_5(&VAR_42, VAR_26, VAR_38->queue->aifs);
 FUNC_5(&VAR_42, VAR_28, VAR_38->queue->cw_min);
 FUNC_5(&VAR_42, VAR_27, VAR_38->queue->cw_max);
 FUNC_5(&VAR_42, VAR_31, VAR_39->iv_offset);
 FUNC_5(&VAR_42, VAR_30,
      FUNC_6(VAR_5, &VAR_39->flags));
 FUNC_4(VAR_41, 1, VAR_42);

 VAR_42 = FUNC_3(VAR_41, 2);
 FUNC_5(&VAR_42, VAR_35, VAR_39->u.plcp.signal);
 FUNC_5(&VAR_42, VAR_34, VAR_39->u.plcp.service);
 FUNC_5(&VAR_42, VAR_33,
      VAR_39->u.plcp.length_low);
 FUNC_5(&VAR_42, VAR_32,
      VAR_39->u.plcp.length_high);
 FUNC_4(VAR_41, 2, VAR_42);

 if (FUNC_6(VAR_2, &VAR_39->flags)) {
  FUNC_1(VAR_41, 3, VAR_40->iv[0]);
  FUNC_1(VAR_41, 4, VAR_40->iv[1]);
 }

 VAR_42 = FUNC_3(VAR_41, 5);
 FUNC_5(&VAR_42, VAR_36,
      FUNC_0(VAR_38->queue->rt2x00dev->tx_power));
 FUNC_5(&VAR_42, VAR_37, 1);
 FUNC_4(VAR_41, 5, VAR_42);




 VAR_40->flags |= VAR_10;
 VAR_40->desc = VAR_41;
 VAR_40->desc_len = VAR_11;
}
