
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct txentry_desc {int flags; } ;
struct skb_frame_desc {int skb_dma; int desc_len; int * desc; } ;
struct queue_entry_priv_mmio {int * desc; } ;
struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; struct queue_entry_priv_mmio* priv_data; } ;
typedef int __le32 ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {unsigned int winfo_size; } ;


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
 struct skb_frame_desc* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ,unsigned int const) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct queue_entry *VAR_14,
         struct txentry_desc *VAR_15)
{
 struct skb_frame_desc *VAR_16 = FUNC_0(VAR_14->skb);
 struct queue_entry_priv_mmio *VAR_17 = VAR_14->priv_data;
 __le32 *VAR_18 = VAR_17->desc;
 u32 VAR_19;
 const unsigned int VAR_20 = VAR_14->queue->winfo_size;
 VAR_19 = 0;
 FUNC_2(&VAR_19, VAR_4, VAR_16->skb_dma);
 FUNC_1(VAR_18, 0, VAR_19);

 VAR_19 = 0;
 FUNC_2(&VAR_19, VAR_10, VAR_14->skb->len);
 FUNC_2(&VAR_19, VAR_8,
      !FUNC_3(VAR_2, &VAR_15->flags));
 FUNC_2(&VAR_19, VAR_5,
      FUNC_3(VAR_0, &VAR_15->flags));
 FUNC_2(&VAR_19, VAR_9, VAR_20);
 FUNC_2(&VAR_19, VAR_7, 0);
 FUNC_2(&VAR_19, VAR_6, 0);
 FUNC_1(VAR_18, 1, VAR_19);

 VAR_19 = 0;
 FUNC_2(&VAR_19, VAR_11,
      VAR_16->skb_dma + VAR_20);
 FUNC_1(VAR_18, 2, VAR_19);

 VAR_19 = 0;
 FUNC_2(&VAR_19, VAR_13,
      !FUNC_3(VAR_1, &VAR_15->flags));
 FUNC_2(&VAR_19, VAR_12, 2);
 FUNC_1(VAR_18, 3, VAR_19);




 VAR_16->desc = VAR_18;
 VAR_16->desc_len = VAR_3;
}
