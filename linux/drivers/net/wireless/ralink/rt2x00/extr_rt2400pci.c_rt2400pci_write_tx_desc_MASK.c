
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int signal; int service; int length_low; int length_high; int ifs; } ;
struct TYPE_4__ {TYPE_1__ plcp; } ;
struct txentry_desc {int length; int flags; TYPE_2__ u; } ;
struct skb_frame_desc {int skb_dma; int desc_len; int * desc; } ;
struct queue_entry_priv_mmio {int * desc; } ;
struct queue_entry {struct queue_entry_priv_mmio* priv_data; int skb; } ;
typedef int __le32 ;


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
 struct skb_frame_desc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct queue_entry *VAR_29,
        struct txentry_desc *VAR_30)
{
 struct skb_frame_desc *VAR_31 = FUNC_0(VAR_29->skb);
 struct queue_entry_priv_mmio *VAR_32 = VAR_29->priv_data;
 __le32 *VAR_33 = VAR_32->desc;
 u32 VAR_34;




 VAR_34 = FUNC_1(VAR_33, 1);
 FUNC_3(&VAR_34, VAR_14, VAR_31->skb_dma);
 FUNC_2(VAR_33, 1, VAR_34);

 VAR_34 = FUNC_1(VAR_33, 2);
 FUNC_3(&VAR_34, VAR_15, VAR_30->length);
 FUNC_3(&VAR_34, VAR_16, VAR_30->length);
 FUNC_2(VAR_33, 2, VAR_34);

 VAR_34 = FUNC_1(VAR_33, 3);
 FUNC_3(&VAR_34, VAR_24, VAR_30->u.plcp.signal);
 FUNC_3(&VAR_34, VAR_26, 5);
 FUNC_3(&VAR_34, VAR_25, 1);
 FUNC_3(&VAR_34, VAR_21, VAR_30->u.plcp.service);
 FUNC_3(&VAR_34, VAR_23, 6);
 FUNC_3(&VAR_34, VAR_22, 1);
 FUNC_2(VAR_33, 3, VAR_34);

 VAR_34 = FUNC_1(VAR_33, 4);
 FUNC_3(&VAR_34, VAR_28,
      VAR_30->u.plcp.length_low);
 FUNC_3(&VAR_34, VAR_20, 8);
 FUNC_3(&VAR_34, VAR_19, 1);
 FUNC_3(&VAR_34, VAR_27,
      VAR_30->u.plcp.length_high);
 FUNC_3(&VAR_34, VAR_18, 7);
 FUNC_3(&VAR_34, VAR_17, 1);
 FUNC_2(VAR_33, 4, VAR_34);






 VAR_34 = FUNC_1(VAR_33, 0);
 FUNC_3(&VAR_34, VAR_9, 1);
 FUNC_3(&VAR_34, VAR_13, 1);
 FUNC_3(&VAR_34, VAR_8,
      FUNC_4(VAR_1, &VAR_30->flags));
 FUNC_3(&VAR_34, VAR_6,
      FUNC_4(VAR_0, &VAR_30->flags));
 FUNC_3(&VAR_34, VAR_12,
      FUNC_4(VAR_2, &VAR_30->flags));
 FUNC_3(&VAR_34, VAR_11,
      FUNC_4(VAR_4, &VAR_30->flags));
 FUNC_3(&VAR_34, VAR_7, VAR_30->u.plcp.ifs);
 FUNC_3(&VAR_34, VAR_10,
      FUNC_4(VAR_3, &VAR_30->flags));
 FUNC_2(VAR_33, 0, VAR_34);




 VAR_31->desc = VAR_33;
 VAR_31->desc_len = VAR_5;
}
