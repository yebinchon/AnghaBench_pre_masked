
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int csum_level; int ip_summed; TYPE_1__* dev; int protocol; } ;
struct rx_tpa_start_cmp_ext {int dummy; } ;
struct rx_tpa_start_cmp {int dummy; } ;
struct rx_tpa_end_cmp_ext {int dummy; } ;
struct rx_tpa_end_cmp {int dummy; } ;
struct rx_cmp_ext {int rx_cmp_cfa_code_errors_v2; int rx_cmp_flags2; int rx_cmp_meta_data; } ;
struct rx_cmp {size_t rx_cmp_opaque; int rx_cmp_misc_v1; int rx_cmp_len_flags_type; int rx_cmp_rss_hash; } ;
struct rx_agg_cmp {int dummy; } ;
struct net_device {int features; } ;
struct bnxt_sw_rx_bd {scalar_t__* data_ptr; int mapping; int * data; } ;
struct bnxt_rx_ring_info {size_t rx_prod; size_t rx_next_cons; struct bnxt_sw_rx_bd* rx_buf_ring; } ;
struct TYPE_4__ {int rx_l4_csum_errors; } ;
struct bnxt_napi {TYPE_2__ cp_ring; struct bnxt_rx_ring_info* rx_ring; } ;
struct bnxt_cp_ring_info {int rx_packets; unsigned int rx_bytes; int ** cp_desc_ring; struct bnxt_napi* bnapi; } ;
struct bnxt {unsigned int rx_copy_thresh; struct sk_buff* (* rx_skb_func ) (struct bnxt*,struct bnxt_rx_ring_info*,size_t,void*,scalar_t__*,int ,int) ;struct net_device* dev; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef int dma_addr_t ;
struct TYPE_3__ {int features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (size_t) ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t FUNC_7 (struct rx_cmp_ext*) ;
 int FUNC_8 (struct rx_cmp_ext*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct rx_cmp*) ;
 scalar_t__ FUNC_10 (struct rx_cmp*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_11 (struct rx_cmp_ext*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_12 (struct rx_cmp*) ;
 int FUNC_13 (struct rx_cmp_ext*,int) ;
 int FUNC_14 (struct sk_buff*,int ,size_t) ;
 int FUNC_15 (struct bnxt*,struct bnxt_cp_ring_info*,scalar_t__,int*) ;
 struct sk_buff* FUNC_16 (struct bnxt_napi*,scalar_t__*,unsigned int,int ) ;
 int FUNC_17 (struct bnxt*,struct bnxt_napi*,struct sk_buff*) ;
 int FUNC_18 (struct bnxt*,struct bnxt_cp_ring_info*,int*,struct rx_cmp*) ;
 int FUNC_19 (struct bnxt*,size_t) ;
 int FUNC_20 (struct bnxt_cp_ring_info*,size_t,int ,scalar_t__,int) ;
 int FUNC_21 (struct bnxt_rx_ring_info*,size_t,void*) ;
 struct sk_buff* FUNC_22 (struct bnxt*,struct bnxt_cp_ring_info*,struct sk_buff*,size_t,scalar_t__,int) ;
 scalar_t__ FUNC_23 (struct bnxt*,struct bnxt_rx_ring_info*,size_t,void*,scalar_t__**,unsigned int*,scalar_t__*) ;
 int FUNC_24 (struct bnxt*,struct bnxt_rx_ring_info*) ;
 int FUNC_25 (struct bnxt*,struct bnxt_rx_ring_info*,struct rx_agg_cmp*) ;
 struct sk_buff* FUNC_26 (struct bnxt*,struct bnxt_cp_ring_info*,int*,struct rx_tpa_end_cmp*,struct rx_tpa_end_cmp_ext*,scalar_t__*) ;
 int FUNC_27 (struct bnxt*,struct bnxt_rx_ring_info*,struct rx_tpa_start_cmp*,struct rx_tpa_start_cmp_ext*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct sk_buff*,int ) ;
 int FUNC_30 (size_t) ;
 int FUNC_31 (int) ;
 scalar_t__ FUNC_32 (struct sk_buff*) ;
 int FUNC_33 (struct net_device*,char*,int,...) ;
 int FUNC_34 (scalar_t__*) ;
 int FUNC_35 (struct sk_buff*) ;
 int FUNC_36 (struct sk_buff*,int,int) ;
 struct sk_buff* FUNC_37 (struct bnxt*,struct bnxt_rx_ring_info*,size_t,void*,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_38 (int) ;

__attribute__((used)) static int FUNC_39(struct bnxt *VAR_23, struct bnxt_cp_ring_info *VAR_24,
         u32 *VAR_25, u8 *VAR_26)
{
 struct bnxt_napi *VAR_27 = VAR_24->bnapi;
 struct bnxt_rx_ring_info *VAR_28 = VAR_27->rx_ring;
 struct net_device *VAR_29 = VAR_23->dev;
 struct rx_cmp *VAR_30;
 struct rx_cmp_ext *VAR_31;
 u32 VAR_32 = *VAR_25;
 u16 VAR_33, VAR_34, VAR_35, VAR_36 = FUNC_6(VAR_32);
 struct bnxt_sw_rx_bd *VAR_37;
 unsigned int VAR_38;
 u8 *VAR_39, VAR_40, VAR_41;
 dma_addr_t VAR_42;
 struct sk_buff *VAR_43;
 void *VAR_44;
 int VAR_45 = 0;
 u32 VAR_46;

 VAR_30 = (struct rx_cmp *)
   &VAR_24->cp_desc_ring[FUNC_1(VAR_36)][FUNC_0(VAR_36)];

 VAR_41 = FUNC_12(VAR_30);

 if (VAR_41 == VAR_5) {
  FUNC_25(VAR_23, VAR_28, (struct rx_agg_cmp *)VAR_30);
  goto next_rx_no_prod_no_len;
 }

 VAR_32 = FUNC_4(VAR_32);
 VAR_36 = FUNC_6(VAR_32);
 VAR_31 = (struct rx_cmp_ext *)
   &VAR_24->cp_desc_ring[FUNC_1(VAR_36)][FUNC_0(VAR_36)];

 if (!FUNC_13(VAR_31, VAR_32))
  return -VAR_6;

 VAR_35 = VAR_28->rx_prod;

 if (VAR_41 == VAR_4) {
  FUNC_27(VAR_23, VAR_28, (struct rx_tpa_start_cmp *)VAR_30,
          (struct rx_tpa_start_cmp_ext *)VAR_31);

  *VAR_26 |= VAR_1;
  goto next_rx_no_prod_no_len;

 } else if (VAR_41 == VAR_3) {
  VAR_43 = FUNC_26(VAR_23, VAR_24, &VAR_32,
       (struct rx_tpa_end_cmp *)VAR_30,
       (struct rx_tpa_end_cmp_ext *)VAR_31, VAR_26);

  if (FUNC_2(VAR_43))
   return -VAR_6;

  VAR_45 = -VAR_8;
  if (FUNC_32(VAR_43)) {
   FUNC_17(VAR_23, VAR_27, VAR_43);
   VAR_45 = 1;
  }
  *VAR_26 |= VAR_1;
  goto next_rx_no_prod_no_len;
 }

 VAR_34 = VAR_30->rx_cmp_opaque;
 if (FUNC_38(VAR_34 != VAR_28->rx_next_cons)) {
  int VAR_47 = FUNC_18(VAR_23, VAR_24, VAR_25, VAR_30);

  FUNC_33(VAR_23->dev, "RX cons %x != expected cons %x\n",
       VAR_34, VAR_28->rx_next_cons);
  FUNC_24(VAR_23, VAR_28);
  return VAR_47;
 }
 VAR_37 = &VAR_28->rx_buf_ring[VAR_34];
 VAR_44 = VAR_37->data;
 VAR_39 = VAR_37->data_ptr;
 FUNC_34(VAR_39);

 VAR_46 = FUNC_31(VAR_30->rx_cmp_misc_v1);
 VAR_40 = (VAR_46 & VAR_14) >> VAR_15;

 if (VAR_40) {
  if (!FUNC_15(VAR_23, VAR_24, VAR_40, &VAR_32))
   return -VAR_6;

  VAR_36 = FUNC_3(VAR_36);
  *VAR_26 |= VAR_0;
 }
 *VAR_26 |= VAR_1;

 VAR_37->data = ((void*)0);
 if (VAR_31->rx_cmp_cfa_code_errors_v2 & VAR_19) {
  u32 VAR_48 = FUNC_31(VAR_31->rx_cmp_cfa_code_errors_v2);

  FUNC_21(VAR_28, VAR_34, VAR_44);
  if (VAR_40)
   FUNC_20(VAR_24, VAR_36, 0, VAR_40,
            0);

  VAR_45 = -VAR_7;
  if (VAR_48 & VAR_13) {
   FUNC_33(VAR_23->dev, "RX buffer error %x\n", VAR_48);
   FUNC_24(VAR_23, VAR_28);
  }
  goto next_rx_no_len;
 }

 VAR_38 = FUNC_31(VAR_30->rx_cmp_len_flags_type) >> VAR_21;
 VAR_42 = VAR_37->mapping;

 if (FUNC_23(VAR_23, VAR_28, VAR_34, VAR_44, &VAR_39, &VAR_38, VAR_26)) {
  VAR_45 = 1;
  goto next_rx;
 }

 if (VAR_38 <= VAR_23->rx_copy_thresh) {
  VAR_43 = FUNC_16(VAR_27, VAR_39, VAR_38, VAR_42);
  FUNC_21(VAR_28, VAR_34, VAR_44);
  if (!VAR_43) {
   if (VAR_40)
    FUNC_20(VAR_24, VAR_36, 0,
             VAR_40, 0);
   VAR_45 = -VAR_8;
   goto next_rx;
  }
 } else {
  u32 VAR_49;

  if (VAR_37->data_ptr == VAR_39)
   VAR_49 = VAR_46 & VAR_22;
  else
   VAR_49 = 0;
  VAR_43 = VAR_23->rx_skb_func(VAR_23, VAR_28, VAR_34, VAR_44, VAR_39, VAR_42,
          VAR_49 | VAR_38);
  if (!VAR_43) {
   VAR_45 = -VAR_8;
   goto next_rx;
  }
 }

 if (VAR_40) {
  VAR_43 = FUNC_22(VAR_23, VAR_24, VAR_43, VAR_36, VAR_40, 0);
  if (!VAR_43) {
   VAR_45 = -VAR_8;
   goto next_rx;
  }
 }

 if (FUNC_10(VAR_30)) {
  u32 VAR_50 = FUNC_9(VAR_30);
  enum pkt_hash_types VAR_51 = VAR_12;


  if (VAR_50 != 1 && VAR_50 != 3)
   VAR_51 = VAR_11;
  FUNC_36(VAR_43, FUNC_31(VAR_30->rx_cmp_rss_hash), VAR_51);
 }

 VAR_33 = FUNC_7(VAR_31);
 VAR_43->protocol = FUNC_29(VAR_43, FUNC_19(VAR_23, VAR_33));

 if ((VAR_31->rx_cmp_flags2 &
      FUNC_28(VAR_18)) &&
     (VAR_43->dev->features & VAR_9)) {
  u32 VAR_52 = FUNC_31(VAR_31->rx_cmp_meta_data);
  u16 VAR_53 = VAR_52 & VAR_16;
  u16 VAR_54 = VAR_52 >> VAR_17;

  FUNC_14(VAR_43, FUNC_30(VAR_54), VAR_53);
 }

 FUNC_35(VAR_43);
 if (FUNC_11(VAR_31)) {
  if (VAR_29->features & VAR_10) {
   VAR_43->ip_summed = VAR_2;
   VAR_43->csum_level = FUNC_8(VAR_31);
  }
 } else {
  if (VAR_31->rx_cmp_cfa_code_errors_v2 & VAR_20) {
   if (VAR_29->features & VAR_10)
    VAR_27->cp_ring.rx_l4_csum_errors++;
  }
 }

 FUNC_17(VAR_23, VAR_27, VAR_43);
 VAR_45 = 1;

next_rx:
 VAR_24->rx_packets += 1;
 VAR_24->rx_bytes += VAR_38;

next_rx_no_len:
 VAR_28->rx_prod = FUNC_5(VAR_35);
 VAR_28->rx_next_cons = FUNC_5(VAR_34);

next_rx_no_prod_no_len:
 *VAR_25 = VAR_32;

 return VAR_45;
}
