
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int signal; int service; int length_low; int length_high; int ifs; } ;
struct TYPE_6__ {TYPE_2__ plcp; } ;
struct txentry_desc {scalar_t__ rate_mode; int length; int flags; TYPE_3__ u; } ;
struct skb_frame_desc {int skb_dma; int desc_len; int * desc; } ;
struct queue_entry_priv_mmio {int * desc; } ;
struct queue_entry {TYPE_1__* queue; struct queue_entry_priv_mmio* priv_data; int skb; } ;
typedef int __le32 ;
struct TYPE_4__ {int aifs; int cw_min; int cw_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 struct skb_frame_desc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct queue_entry *VAR_30,
        struct txentry_desc *VAR_31)
{
 struct skb_frame_desc *VAR_32 = FUNC_0(VAR_30->skb);
 struct queue_entry_priv_mmio *VAR_33 = VAR_30->priv_data;
 __le32 *VAR_34 = VAR_33->desc;
 u32 VAR_35;




 VAR_35 = FUNC_1(VAR_34, 1);
 FUNC_3(&VAR_35, VAR_21, VAR_32->skb_dma);
 FUNC_2(VAR_34, 1, VAR_35);

 VAR_35 = FUNC_1(VAR_34, 2);
 FUNC_3(&VAR_35, VAR_25, VAR_6);
 FUNC_3(&VAR_35, VAR_22, VAR_30->queue->aifs);
 FUNC_3(&VAR_35, VAR_24, VAR_30->queue->cw_min);
 FUNC_3(&VAR_35, VAR_23, VAR_30->queue->cw_max);
 FUNC_2(VAR_34, 2, VAR_35);

 VAR_35 = FUNC_1(VAR_34, 3);
 FUNC_3(&VAR_35, VAR_29, VAR_31->u.plcp.signal);
 FUNC_3(&VAR_35, VAR_28, VAR_31->u.plcp.service);
 FUNC_3(&VAR_35, VAR_27,
      VAR_31->u.plcp.length_low);
 FUNC_3(&VAR_35, VAR_26,
      VAR_31->u.plcp.length_high);
 FUNC_2(VAR_34, 3, VAR_35);

 VAR_35 = FUNC_1(VAR_34, 10);
 FUNC_3(&VAR_35, VAR_20,
      FUNC_4(VAR_5, &VAR_31->flags));
 FUNC_2(VAR_34, 10, VAR_35);






 VAR_35 = FUNC_1(VAR_34, 0);
 FUNC_3(&VAR_35, VAR_16, 1);
 FUNC_3(&VAR_35, VAR_19, 1);
 FUNC_3(&VAR_35, VAR_14,
      FUNC_4(VAR_2, &VAR_31->flags));
 FUNC_3(&VAR_35, VAR_9,
      FUNC_4(VAR_1, &VAR_31->flags));
 FUNC_3(&VAR_35, VAR_18,
      FUNC_4(VAR_3, &VAR_31->flags));
 FUNC_3(&VAR_35, VAR_15,
      (VAR_31->rate_mode == VAR_7));
 FUNC_3(&VAR_35, VAR_11, 1);
 FUNC_3(&VAR_35, VAR_13, VAR_31->u.plcp.ifs);
 FUNC_3(&VAR_35, VAR_17,
      FUNC_4(VAR_4, &VAR_31->flags));
 FUNC_3(&VAR_35, VAR_12, VAR_31->length);
 FUNC_3(&VAR_35, VAR_10, VAR_0);
 FUNC_2(VAR_34, 0, VAR_35);




 VAR_32->desc = VAR_34;
 VAR_32->desc_len = VAR_8;
}
