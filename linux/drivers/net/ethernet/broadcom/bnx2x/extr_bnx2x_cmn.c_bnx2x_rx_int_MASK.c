
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct eth_fast_path_rx_cqe {int type_error_flags; size_t queue_index; size_t placement_offset; int vlan_tag; TYPE_1__ pars_flags; int pkt_len_or_gro_seg_len; int rss_hash_result; int status_flags; } ;
struct TYPE_11__ {size_t queue_index; int pkt_len; } ;
union eth_rx_cqe {struct eth_fast_path_rx_cqe fast_path_cqe; TYPE_4__ end_agg_cqe; } ;
typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sw_rx_bd {int* data; } ;
struct sk_buff {int protocol; int data; } ;
struct bnx2x_fastpath {size_t rx_bd_cons; size_t rx_bd_prod; size_t rx_comp_cons; size_t rx_comp_prod; scalar_t__ mode; int rx_sge_prod; union eth_rx_cqe* rx_comp_ring; int napi; int rx_queue; int rx_frag_size; int rx_buf_size; struct bnx2x_agg_info* tpa_info; struct sw_rx_bd* rx_buf_ring; int index; struct bnx2x* bp; } ;
struct bnx2x_agg_info {size_t len_on_bd; size_t full_page; } ;
struct bnx2x {int panic; TYPE_3__* dev; TYPE_2__* pdev; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef enum eth_rx_cqe_type { ____Placeholder_eth_rx_cqe_type } eth_rx_cqe_type ;
struct TYPE_12__ {int rx_skb_alloc_failed; int rx_err_discard_pkt; } ;
struct TYPE_10__ {scalar_t__ mtu; int features; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct eth_fast_path_rx_cqe*) ;
 int FUNC_2 (struct eth_fast_path_rx_cqe*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_0 ;
 int FUNC_8 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_9 (size_t) ;
 size_t FUNC_10 (size_t) ;
 int VAR_11 ;
 size_t FUNC_11 (size_t) ;
 size_t FUNC_12 (size_t) ;
 size_t VAR_12 ;
 size_t FUNC_13 (size_t) ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_14 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_15 (struct bnx2x*,struct bnx2x_fastpath*,size_t,int ) ;
 int FUNC_16 (struct sk_buff*,union eth_rx_cqe*,struct bnx2x_fastpath*,TYPE_6__*) ;
 TYPE_6__* FUNC_17 (struct bnx2x*,struct bnx2x_fastpath*) ;
 int FUNC_18 (struct bnx2x_fastpath*,int*) ;
 int FUNC_19 (struct bnx2x*,struct eth_fast_path_rx_cqe*,int*) ;
 int FUNC_20 (struct bnx2x_fastpath*,size_t,size_t) ;
 int FUNC_21 (struct bnx2x*,struct sk_buff*) ;
 int FUNC_22 (struct bnx2x_fastpath*,union eth_rx_cqe*) ;
 int FUNC_23 (struct bnx2x_fastpath*,size_t,size_t,size_t,struct eth_fast_path_rx_cqe*) ;
 int FUNC_24 (struct bnx2x*,struct bnx2x_fastpath*,struct bnx2x_agg_info*,size_t,TYPE_4__*,size_t) ;
 int FUNC_25 (struct bnx2x*,struct bnx2x_fastpath*,size_t,size_t,int ) ;
 int FUNC_26 (struct bnx2x_fastpath*,size_t,TYPE_4__*) ;
 struct sk_buff* FUNC_27 (int*,int ) ;
 int FUNC_28 (int *,int ,size_t,int ) ;
 int FUNC_29 (struct sw_rx_bd*,int ) ;
 int FUNC_30 (int *,int ,int ,int ) ;
 int FUNC_31 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 scalar_t__ FUNC_35 (int) ;
 int VAR_16 ;
 int FUNC_36 (int ,int*,size_t) ;
 struct sk_buff* FUNC_37 (int *,size_t) ;
 int FUNC_38 (int *,struct sk_buff*) ;
 int FUNC_39 (int*) ;
 int FUNC_40 () ;
 int FUNC_41 (struct sk_buff*) ;
 int FUNC_42 (struct sk_buff*,size_t) ;
 int FUNC_43 (struct sk_buff*,int ) ;
 int FUNC_44 (struct sk_buff*,size_t) ;
 int FUNC_45 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_46 (int) ;

__attribute__((used)) static int FUNC_47(struct bnx2x_fastpath *VAR_17, int VAR_18)
{
 struct bnx2x *VAR_19 = VAR_17->bp;
 u16 VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24, VAR_25;
 int VAR_26 = 0;
 union eth_rx_cqe *VAR_27;
 struct eth_fast_path_rx_cqe *VAR_28;





 if (VAR_18 <= 0)
  return VAR_26;

 VAR_20 = VAR_17->rx_bd_cons;
 VAR_21 = VAR_17->rx_bd_prod;
 VAR_22 = VAR_21;
 VAR_24 = VAR_17->rx_comp_cons;
 VAR_25 = VAR_17->rx_comp_prod;

 VAR_23 = FUNC_11(VAR_24);
 VAR_27 = &VAR_17->rx_comp_ring[VAR_23];
 VAR_28 = &VAR_27->fast_path_cqe;

 FUNC_8(VAR_9,
    "queue[%d]: sw_comp_cons %u\n", VAR_17->index, VAR_24);

 while (FUNC_1(VAR_28)) {
  struct sw_rx_bd *VAR_29 = ((void*)0);
  struct sk_buff *VAR_30;
  u8 VAR_31;
  enum eth_rx_cqe_type VAR_32;
  u16 VAR_33, VAR_34, VAR_35;
  u8 *VAR_36;
  u32 VAR_37;
  enum pkt_hash_types VAR_38;






  VAR_21 = FUNC_12(VAR_21);
  VAR_20 = FUNC_12(VAR_20);
  FUNC_40();

  VAR_31 = VAR_28->type_error_flags;
  VAR_32 = VAR_31 & VAR_2;

  FUNC_8(VAR_9,
     "CQE type %x  err %x  status %x  queue %x  vlan %x  len %u\n",
     FUNC_3(VAR_31),
     VAR_31, VAR_28->status_flags,
     FUNC_34(VAR_28->rss_hash_result),
     FUNC_33(VAR_28->vlan_tag),
     FUNC_33(VAR_28->pkt_len_or_gro_seg_len));


  if (FUNC_46(FUNC_5(VAR_32))) {
   FUNC_22(VAR_17, VAR_27);
   goto next_cqe;
  }

  VAR_29 = &VAR_17->rx_buf_ring[VAR_20];
  VAR_36 = VAR_29->data;

  if (!FUNC_4(VAR_32)) {
   struct bnx2x_agg_info *VAR_39;
   u16 VAR_40, VAR_41;
   if (FUNC_6(VAR_32)) {
    u16 VAR_42 = VAR_28->queue_index;
    FUNC_8(VAR_9,
       "calling tpa_start on queue %d\n",
       VAR_42);

    FUNC_23(VAR_17, VAR_42,
      VAR_20, VAR_21,
      VAR_28);

    goto next_rx;
   }
   VAR_35 = VAR_27->end_agg_cqe.queue_index;
   VAR_39 = &VAR_17->tpa_info[VAR_35];
   FUNC_8(VAR_9,
      "calling tpa_stop on queue %d\n",
      VAR_35);

   VAR_40 = FUNC_33(VAR_27->end_agg_cqe.pkt_len) -
        VAR_39->len_on_bd;

   if (VAR_17->mode == VAR_15)
    VAR_41 = (VAR_40 + VAR_39->full_page - 1) /
      VAR_39->full_page;
   else
    VAR_41 = FUNC_13(VAR_40) >>
     VAR_13;

   FUNC_24(VAR_19, VAR_17, VAR_39, VAR_41,
           &VAR_27->end_agg_cqe, VAR_23);





   FUNC_26(VAR_17, VAR_41, &VAR_27->end_agg_cqe);
   goto next_cqe;
  }

  VAR_33 = FUNC_33(VAR_28->pkt_len_or_gro_seg_len);
  VAR_34 = VAR_28->placement_offset;
  FUNC_28(&VAR_19->pdev->dev,
     FUNC_29(VAR_29, VAR_16),
     VAR_34 + VAR_12,
     VAR_0);
  VAR_34 += VAR_10;
  FUNC_39(VAR_36 + VAR_34);

  if (FUNC_46(VAR_31 & VAR_5)) {
   FUNC_8(VAR_8 | VAR_9,
      "ERROR  flags %x  rx packet %u\n",
      VAR_31, VAR_24);
   FUNC_17(VAR_19, VAR_17)->rx_err_discard_pkt++;
   goto reuse_rx;
  }




  if ((VAR_19->dev->mtu > VAR_3) &&
      (VAR_33 <= VAR_12)) {
   VAR_30 = FUNC_37(&VAR_17->napi, VAR_33);
   if (VAR_30 == ((void*)0)) {
    FUNC_8(VAR_8 | VAR_9,
       "ERROR  packet dropped because of alloc failure\n");
    FUNC_17(VAR_19, VAR_17)->rx_skb_alloc_failed++;
    goto reuse_rx;
   }
   FUNC_36(VAR_30->data, VAR_36 + VAR_34, VAR_33);
   FUNC_20(VAR_17, VAR_20, VAR_21);
  } else {
   if (FUNC_35(FUNC_15(VAR_19, VAR_17, VAR_21,
             VAR_6) == 0)) {
    FUNC_30(&VAR_19->pdev->dev,
       FUNC_29(VAR_29, VAR_16),
       VAR_17->rx_buf_size,
       VAR_0);
    VAR_30 = FUNC_27(VAR_36, VAR_17->rx_frag_size);
    if (FUNC_46(!VAR_30)) {
     FUNC_18(VAR_17, VAR_36);
     FUNC_17(VAR_19, VAR_17)->
       rx_skb_alloc_failed++;
     goto next_rx;
    }
    FUNC_44(VAR_30, VAR_34);
   } else {
    FUNC_8(VAR_8 | VAR_9,
       "ERROR  packet dropped because of alloc failure\n");
    FUNC_17(VAR_19, VAR_17)->rx_skb_alloc_failed++;
reuse_rx:
    FUNC_20(VAR_17, VAR_20, VAR_21);
    goto next_rx;
   }
  }

  FUNC_42(VAR_30, VAR_33);
  VAR_30->protocol = FUNC_31(VAR_30, VAR_19->dev);


  VAR_37 = FUNC_19(VAR_19, VAR_28, &VAR_38);
  FUNC_45(VAR_30, VAR_37, VAR_38);

  FUNC_41(VAR_30);

  if (VAR_19->dev->features & VAR_7)
   FUNC_16(VAR_30, VAR_27, VAR_17,
         FUNC_17(VAR_19, VAR_17));

  FUNC_43(VAR_30, VAR_17->rx_queue);


  if (FUNC_46(VAR_27->fast_path_cqe.type_error_flags &
        (1 << VAR_1)))
   FUNC_21(VAR_19, VAR_30);

  if (FUNC_33(VAR_28->pars_flags.flags) &
      VAR_11)
   FUNC_14(VAR_30, FUNC_32(VAR_4),
            FUNC_33(VAR_28->vlan_tag));

  FUNC_38(&VAR_17->napi, VAR_30);
next_rx:
  VAR_29->data = ((void*)0);

  VAR_20 = FUNC_10(VAR_20);
  VAR_21 = FUNC_10(VAR_21);
  VAR_22 = FUNC_10(VAR_22);
  VAR_26++;
next_cqe:
  VAR_25 = FUNC_9(VAR_25);
  VAR_24 = FUNC_9(VAR_24);


  FUNC_2(VAR_28);

  if (VAR_26 == VAR_18)
   break;

  VAR_23 = FUNC_11(VAR_24);
  VAR_27 = &VAR_17->rx_comp_ring[VAR_23];
  VAR_28 = &VAR_27->fast_path_cqe;
 }

 VAR_17->rx_bd_cons = VAR_20;
 VAR_17->rx_bd_prod = VAR_22;
 VAR_17->rx_comp_cons = VAR_24;
 VAR_17->rx_comp_prod = VAR_25;


 FUNC_25(VAR_19, VAR_17, VAR_22, VAR_25,
        VAR_17->rx_sge_prod);

 return VAR_26;
}
