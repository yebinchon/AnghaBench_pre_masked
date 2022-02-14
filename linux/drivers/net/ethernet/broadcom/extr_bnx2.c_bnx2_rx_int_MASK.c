
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ protocol; int ip_summed; int data; } ;
struct l2_fhdr {unsigned int l2_fhdr_pkt_len; int l2_fhdr_status; unsigned int l2_fhdr_ip_xsum; int l2_fhdr_hash; int l2_fhdr_vlan_tag; } ;
struct bnx2_sw_bd {int * data; } ;
struct bnx2_rx_ring_info {scalar_t__ rx_cons; scalar_t__ rx_prod; scalar_t__ rx_pg_prod; int rx_prod_bseq; int rx_bseq_addr; int rx_bidx_addr; int rx_pg_bidx_addr; struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_napi {int napi; struct bnx2_rx_ring_info rx_ring; } ;
struct bnx2 {unsigned int rx_jumbo_thresh; unsigned int rx_copy_thresh; int rx_mode; struct bnx2_napi* bnx2_napi; TYPE_2__* dev; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {unsigned int mtu; int features; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bnx2*,int ,int ) ;
 int FUNC_3 (struct bnx2*,int ,scalar_t__) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
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
 int FUNC_4 (unsigned int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct sk_buff*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct bnx2_napi*) ;
 int FUNC_7 (struct bnx2*,struct bnx2_rx_ring_info*,int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct bnx2*,struct bnx2_rx_ring_info*,int *,int) ;
 struct sk_buff* FUNC_9 (struct bnx2*,struct bnx2_rx_ring_info*,int *,unsigned int,unsigned int,int ,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *,int ,int,int ) ;
 int FUNC_12 (struct bnx2_sw_bd*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,TYPE_2__*) ;
 struct l2_fhdr* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 int VAR_24 ;
 int FUNC_17 (int ,int *,unsigned int) ;
 int FUNC_18 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_19 (TYPE_2__*,unsigned int) ;
 int FUNC_20 (struct l2_fhdr*) ;
 int FUNC_21 () ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*,unsigned int) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*,int) ;
 int FUNC_26 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static int
FUNC_28(struct bnx2 *VAR_25, struct bnx2_napi *VAR_26, int VAR_27)
{
 struct bnx2_rx_ring_info *VAR_28 = &VAR_26->rx_ring;
 u16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 struct l2_fhdr *VAR_34;
 int VAR_35 = 0, VAR_36 = 0;

 if (VAR_27 <= 0)
  return VAR_35;

 VAR_29 = FUNC_6(VAR_26);
 VAR_30 = VAR_28->rx_cons;
 VAR_32 = VAR_28->rx_prod;




 FUNC_21();
 while (VAR_30 != VAR_29) {
  unsigned int VAR_37, VAR_38;
  u32 VAR_39;
  struct bnx2_sw_bd *VAR_40, *VAR_41;
  struct sk_buff *VAR_42;
  dma_addr_t VAR_43;
  u8 *VAR_44;
  u16 VAR_45;

  VAR_31 = FUNC_1(VAR_30);
  VAR_33 = FUNC_1(VAR_32);

  VAR_40 = &VAR_28->rx_buf_ring[VAR_31];
  VAR_44 = VAR_40->data;
  VAR_40->data = ((void*)0);

  VAR_34 = FUNC_14(VAR_44);
  FUNC_20(VAR_34);

  VAR_43 = FUNC_12(VAR_40, VAR_24);

  FUNC_11(&VAR_25->pdev->dev, VAR_43,
   VAR_2 + VAR_1,
   VAR_22);

  VAR_45 = FUNC_1(FUNC_0(VAR_30));
  VAR_41 = &VAR_28->rx_buf_ring[VAR_45];
  FUNC_20(FUNC_14(VAR_41->data));

  VAR_37 = VAR_34->l2_fhdr_pkt_len;
  VAR_39 = VAR_34->l2_fhdr_status;

  VAR_38 = 0;
  if (VAR_39 & VAR_15) {
   VAR_38 = VAR_34->l2_fhdr_ip_xsum;
   VAR_36 = 1;
  } else if (VAR_37 > VAR_25->rx_jumbo_thresh) {
   VAR_38 = VAR_25->rx_jumbo_thresh;
   VAR_36 = 1;
  }

  if (FUNC_27(VAR_39 & (VAR_8 |
           VAR_10 |
           VAR_7 |
           VAR_12 |
           VAR_9))) {

   FUNC_7(VAR_25, VAR_28, VAR_44, VAR_31,
       VAR_33);
   if (VAR_36) {
    int VAR_46;

    VAR_46 = FUNC_4(VAR_37 - VAR_38) >> VAR_21;

    FUNC_8(VAR_25, VAR_28, ((void*)0), VAR_46);
   }
   goto next_rx;
  }

  VAR_37 -= 4;

  if (VAR_37 <= VAR_25->rx_copy_thresh) {
   VAR_42 = FUNC_19(VAR_25->dev, VAR_37 + 6);
   if (!VAR_42) {
    FUNC_7(VAR_25, VAR_28, VAR_44, VAR_31,
        VAR_33);
    goto next_rx;
   }


   FUNC_17(VAR_42->data,
          (u8 *)VAR_34 + VAR_2 - 6,
          VAR_37 + 6);
   FUNC_25(VAR_42, 6);
   FUNC_23(VAR_42, VAR_37);

   FUNC_7(VAR_25, VAR_28, VAR_44,
    VAR_31, VAR_33);

  } else {
   VAR_42 = FUNC_9(VAR_25, VAR_28, VAR_44, VAR_37, VAR_38, VAR_43,
       (VAR_31 << 16) | VAR_33);
   if (!VAR_42)
    goto next_rx;
  }
  if ((VAR_39 & VAR_14) &&
      !(VAR_25->rx_mode & VAR_0))
   FUNC_5(VAR_42, FUNC_15(VAR_6), VAR_34->l2_fhdr_vlan_tag);

  VAR_42->protocol = FUNC_13(VAR_42, VAR_25->dev);

  if (VAR_37 > (VAR_25->dev->mtu + VAR_4) &&
      VAR_42->protocol != FUNC_15(0x8100) &&
      VAR_42->protocol != FUNC_15(VAR_5)) {

   FUNC_10(VAR_42);
   goto next_rx;

  }

  FUNC_22(VAR_42);
  if ((VAR_25->dev->features & VAR_19) &&
   (VAR_39 & (VAR_16 |
   VAR_17))) {

   if (FUNC_16((VAR_39 & (VAR_11 |
           VAR_13)) == 0))
    VAR_42->ip_summed = VAR_3;
  }
  if ((VAR_25->dev->features & VAR_20) &&
      ((VAR_39 & VAR_18) ==
       VAR_18))
   FUNC_26(VAR_42, VAR_34->l2_fhdr_hash,
         VAR_23);

  FUNC_24(VAR_42, VAR_26 - &VAR_25->bnx2_napi[0]);
  FUNC_18(&VAR_26->napi, VAR_42);
  VAR_35++;

next_rx:
  VAR_30 = FUNC_0(VAR_30);
  VAR_32 = FUNC_0(VAR_32);

  if (VAR_35 == VAR_27)
   break;


  if (VAR_30 == VAR_29) {
   VAR_29 = FUNC_6(VAR_26);
   FUNC_21();
  }
 }
 VAR_28->rx_cons = VAR_30;
 VAR_28->rx_prod = VAR_32;

 if (VAR_36)
  FUNC_3(VAR_25, VAR_28->rx_pg_bidx_addr, VAR_28->rx_pg_prod);

 FUNC_3(VAR_25, VAR_28->rx_bidx_addr, VAR_32);

 FUNC_2(VAR_25, VAR_28->rx_bseq_addr, VAR_28->rx_prod_bseq);

 return VAR_35;

}
