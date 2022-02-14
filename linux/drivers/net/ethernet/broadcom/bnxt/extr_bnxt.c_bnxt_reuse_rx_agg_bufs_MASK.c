
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rx_bd {scalar_t__ rx_bd_opaque; int rx_bd_haddr; } ;
struct rx_agg_cmp {scalar_t__ rx_agg_cmp_opaque; } ;
struct page {int dummy; } ;
struct bnxt_sw_rx_agg_bd {int mapping; int offset; struct page* page; } ;
struct bnxt_rx_ring_info {scalar_t__ rx_agg_prod; scalar_t__ rx_sw_agg_prod; struct rx_bd** rx_agg_desc_ring; struct bnxt_sw_rx_agg_bd* rx_agg_ring; int rx_agg_bmap; } ;
struct bnxt_napi {struct bnxt_rx_ring_info* rx_ring; struct bnxt* bp; } ;
struct bnxt_cp_ring_info {struct bnxt_napi* bnapi; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct bnxt_rx_ring_info*,scalar_t__) ;
 struct rx_agg_cmp* FUNC_6 (struct bnxt*,struct bnxt_cp_ring_info*,scalar_t__,scalar_t__) ;
 struct rx_agg_cmp* FUNC_7 (struct bnxt*,struct bnxt_rx_ring_info*,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct bnxt_cp_ring_info *VAR_1, u16 VAR_2,
       u16 VAR_3, u32 VAR_4, bool VAR_5)
{
 struct bnxt_napi *VAR_6 = VAR_1->bnapi;
 struct bnxt *VAR_7 = VAR_6->bp;
 struct bnxt_rx_ring_info *VAR_8 = VAR_6->rx_ring;
 u16 VAR_9 = VAR_8->rx_agg_prod;
 u16 VAR_10 = VAR_8->rx_sw_agg_prod;
 bool VAR_11 = 0;
 u32 VAR_12;

 if ((VAR_7->flags & VAR_0) && VAR_5)
  VAR_11 = 1;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  u16 VAR_13;
  struct rx_agg_cmp *VAR_14;
  struct bnxt_sw_rx_agg_bd *VAR_15, *VAR_16;
  struct rx_bd *VAR_17;
  struct page *VAR_18;

  if (VAR_11)
   VAR_14 = FUNC_7(VAR_7, VAR_8, VAR_2, VAR_3 + VAR_12);
  else
   VAR_14 = FUNC_6(VAR_7, VAR_1, VAR_2, VAR_3 + VAR_12);
  VAR_13 = VAR_14->rx_agg_cmp_opaque;
  FUNC_3(VAR_13, VAR_8->rx_agg_bmap);

  if (FUNC_10(FUNC_9(VAR_10, VAR_8->rx_agg_bmap)))
   VAR_10 = FUNC_5(VAR_8, VAR_10);

  FUNC_4(VAR_10, VAR_8->rx_agg_bmap);
  VAR_16 = &VAR_8->rx_agg_ring[VAR_10];
  VAR_15 = &VAR_8->rx_agg_ring[VAR_13];




  VAR_18 = VAR_15->page;
  VAR_15->page = ((void*)0);
  VAR_16->page = VAR_18;
  VAR_16->offset = VAR_15->offset;

  VAR_16->mapping = VAR_15->mapping;

  VAR_17 = &VAR_8->rx_agg_desc_ring[FUNC_2(VAR_9)][FUNC_1(VAR_9)];

  VAR_17->rx_bd_haddr = FUNC_8(VAR_15->mapping);
  VAR_17->rx_bd_opaque = VAR_10;

  VAR_9 = FUNC_0(VAR_9);
  VAR_10 = FUNC_0(VAR_10);
 }
 VAR_8->rx_agg_prod = VAR_9;
 VAR_8->rx_sw_agg_prod = VAR_10;
}
