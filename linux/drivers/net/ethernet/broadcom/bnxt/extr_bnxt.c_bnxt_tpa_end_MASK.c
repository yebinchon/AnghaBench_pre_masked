
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int csum_level; int ip_summed; TYPE_2__* dev; int protocol; } ;
struct rx_tpa_end_cmp_ext {int dummy; } ;
struct rx_tpa_end_cmp {int dummy; } ;
struct bnxt_tpa_info {scalar_t__ agg_count; scalar_t__* data; scalar_t__* data_ptr; unsigned int len; scalar_t__ hash_type; int flags2; size_t metadata; int rss_hash; int cfa_code; int mapping; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_info* rx_tpa; } ;
struct bnxt_napi {int in_reset; struct bnxt_rx_ring_info* rx_ring; } ;
struct bnxt_cp_ring_info {struct bnxt_napi* bnapi; } ;
struct bnxt {int flags; unsigned int rx_copy_thresh; int rx_offset; int rx_dir; int rx_buf_use_size; TYPE_1__* pdev; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int features; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ VAR_9 ;
 size_t FUNC_2 (int ) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct rx_tpa_end_cmp*) ;
 scalar_t__ FUNC_4 (struct rx_tpa_end_cmp_ext*) ;
 size_t FUNC_5 (struct rx_tpa_end_cmp*) ;
 size_t FUNC_6 (struct rx_tpa_end_cmp*) ;
 scalar_t__ FUNC_7 (struct rx_tpa_end_cmp_ext*) ;
 int FUNC_8 (struct rx_tpa_end_cmp*) ;
 scalar_t__* FUNC_9 (struct bnxt*,int *,int ) ;
 int FUNC_10 (struct sk_buff*,int ,size_t) ;
 int FUNC_11 (struct bnxt_cp_ring_info*,size_t,scalar_t__) ;
 int FUNC_12 (struct bnxt*,struct bnxt_cp_ring_info*,scalar_t__,int *) ;
 struct sk_buff* FUNC_13 (struct bnxt_napi*,scalar_t__*,unsigned int,int ) ;
 int FUNC_14 (struct bnxt*,struct bnxt_cp_ring_info*,int *,struct rx_tpa_end_cmp*) ;
 int FUNC_15 (struct bnxt_rx_ring_info*,size_t) ;
 int FUNC_16 (struct bnxt*,int ) ;
 struct sk_buff* FUNC_17 (struct bnxt*,struct bnxt_tpa_info*,struct rx_tpa_end_cmp*,struct rx_tpa_end_cmp_ext*,struct sk_buff*) ;
 size_t FUNC_18 (struct bnxt_rx_ring_info*,size_t) ;
 struct sk_buff* FUNC_19 (struct bnxt*,struct bnxt_cp_ring_info*,struct sk_buff*,size_t,scalar_t__,int) ;
 struct sk_buff* FUNC_20 (void*,int ) ;
 int FUNC_21 (int *,int ,int ,int ,int ) ;
 int FUNC_22 (struct sk_buff*,int ) ;
 int FUNC_23 (size_t) ;
 int FUNC_24 (void*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int ,char*,scalar_t__,int) ;
 int FUNC_27 (scalar_t__*) ;
 int FUNC_28 (struct sk_buff*) ;
 int FUNC_29 (struct sk_buff*,unsigned int) ;
 int FUNC_30 (struct sk_buff*,int) ;
 int FUNC_31 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_32 (int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_33(struct bnxt *VAR_15,
        struct bnxt_cp_ring_info *VAR_16,
        u32 *VAR_17,
        struct rx_tpa_end_cmp *VAR_18,
        struct rx_tpa_end_cmp_ext *VAR_19,
        u8 *VAR_20)
{
 struct bnxt_napi *VAR_21 = VAR_16->bnapi;
 struct bnxt_rx_ring_info *VAR_22 = VAR_21->rx_ring;
 u8 *VAR_23, VAR_24;
 unsigned int VAR_25;
 struct bnxt_tpa_info *VAR_26;
 dma_addr_t VAR_27;
 struct sk_buff *VAR_28;
 u16 VAR_29 = 0, VAR_30;
 void *VAR_31;
 bool VAR_32;

 if (FUNC_32(VAR_21->in_reset)) {
  int VAR_33 = FUNC_14(VAR_15, VAR_16, VAR_17, VAR_18);

  if (VAR_33 < 0)
   return FUNC_0(-VAR_5);
  return ((void*)0);
 }

 if (VAR_15->flags & VAR_1) {
  VAR_30 = FUNC_6(VAR_18);
  VAR_30 = FUNC_18(VAR_22, VAR_30);
  VAR_24 = FUNC_4(VAR_19);
  VAR_26 = &VAR_22->rx_tpa[VAR_30];
  if (FUNC_32(VAR_24 != VAR_26->agg_count)) {
   FUNC_26(VAR_15->dev, "TPA end agg_buf %d != expected agg_bufs %d\n",
        VAR_24, VAR_26->agg_count);
   VAR_24 = VAR_26->agg_count;
  }
  VAR_26->agg_count = 0;
  *VAR_20 |= VAR_0;
  FUNC_15(VAR_22, VAR_30);
  VAR_29 = VAR_30;
  VAR_32 = !!(VAR_15->flags & VAR_2);
 } else {
  VAR_30 = FUNC_5(VAR_18);
  VAR_24 = FUNC_3(VAR_18);
  VAR_26 = &VAR_22->rx_tpa[VAR_30];
  VAR_29 = FUNC_2(*VAR_17);
  if (VAR_24) {
   if (!FUNC_12(VAR_15, VAR_16, VAR_24, VAR_17))
    return FUNC_0(-VAR_5);

   *VAR_20 |= VAR_0;
   VAR_29 = FUNC_1(VAR_29);
  }
  VAR_32 = !!FUNC_8(VAR_18);
 }
 VAR_31 = VAR_26->data;
 VAR_23 = VAR_26->data_ptr;
 FUNC_27(VAR_23);
 VAR_25 = VAR_26->len;
 VAR_27 = VAR_26->mapping;

 if (FUNC_32(VAR_24 > VAR_7 || FUNC_7(VAR_19))) {
  FUNC_11(VAR_16, VAR_29, VAR_24);
  if (VAR_24 > VAR_7)
   FUNC_26(VAR_15->dev, "TPA frags %d exceeded MAX_SKB_FRAGS %d\n",
        VAR_24, (int)VAR_7);
  return ((void*)0);
 }

 if (VAR_25 <= VAR_15->rx_copy_thresh) {
  VAR_28 = FUNC_13(VAR_21, VAR_23, VAR_25, VAR_27);
  if (!VAR_28) {
   FUNC_11(VAR_16, VAR_29, VAR_24);
   return ((void*)0);
  }
 } else {
  u8 *VAR_34;
  dma_addr_t VAR_35;

  VAR_34 = FUNC_9(VAR_15, &VAR_35, VAR_6);
  if (!VAR_34) {
   FUNC_11(VAR_16, VAR_29, VAR_24);
   return ((void*)0);
  }

  VAR_26->data = VAR_34;
  VAR_26->data_ptr = VAR_34 + VAR_15->rx_offset;
  VAR_26->mapping = VAR_35;

  VAR_28 = FUNC_20(VAR_31, 0);
  FUNC_21(&VAR_15->pdev->dev, VAR_27,
           VAR_15->rx_buf_use_size, VAR_15->rx_dir,
           VAR_4);

  if (!VAR_28) {
   FUNC_24(VAR_31);
   FUNC_11(VAR_16, VAR_29, VAR_24);
   return ((void*)0);
  }
  FUNC_30(VAR_28, VAR_15->rx_offset);
  FUNC_29(VAR_28, VAR_25);
 }

 if (VAR_24) {
  VAR_28 = FUNC_19(VAR_15, VAR_16, VAR_28, VAR_29, VAR_24, 1);
  if (!VAR_28) {

   return ((void*)0);
  }
 }

 VAR_28->protocol =
  FUNC_22(VAR_28, FUNC_16(VAR_15, VAR_26->cfa_code));

 if (VAR_26->hash_type != VAR_9)
  FUNC_31(VAR_28, VAR_26->rss_hash, VAR_26->hash_type);

 if ((VAR_26->flags2 & VAR_12) &&
     (VAR_28->dev->features & VAR_8)) {
  u16 VAR_36 = VAR_26->metadata >>
   VAR_11;
  u16 VAR_37 = VAR_26->metadata & VAR_10;

  FUNC_10(VAR_28, FUNC_23(VAR_36), VAR_37);
 }

 FUNC_28(VAR_28);
 if (FUNC_25(VAR_26->flags2 & VAR_14)) {
  VAR_28->ip_summed = VAR_3;
  VAR_28->csum_level =
   (VAR_26->flags2 & VAR_13) >> 3;
 }

 if (VAR_32)
  VAR_28 = FUNC_17(VAR_15, VAR_26, VAR_18, VAR_19, VAR_28);

 return VAR_28;
}
