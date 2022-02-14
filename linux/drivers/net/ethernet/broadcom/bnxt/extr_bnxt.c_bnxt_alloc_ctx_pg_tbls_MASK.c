
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnxt_ring_mem_info {int depth; int nr_pages; int pg_tbl_map; int pg_tbl; } ;
struct bnxt_ctx_pg_info {int nr_pages; int * ctx_dma_arr; int * ctx_pg_arr; struct bnxt_ring_mem_info ring_mem; struct bnxt_ctx_pg_info** ctx_pg_tbl; } ;
struct bnxt {int dummy; } ;
typedef int ctx_pg ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnxt*,struct bnxt_ctx_pg_info*) ;
 struct bnxt_ctx_pg_info** FUNC_2 (int,int,int ) ;
 struct bnxt_ctx_pg_info* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_6,
      struct bnxt_ctx_pg_info *VAR_7, u32 VAR_8,
      u8 VAR_9)
{
 struct bnxt_ring_mem_info *VAR_10 = &VAR_7->ring_mem;
 int VAR_11;

 if (!VAR_8)
  return 0;

 VAR_7->nr_pages = FUNC_0(VAR_8, VAR_0);
 if (VAR_7->nr_pages > VAR_5) {
  VAR_7->nr_pages = 0;
  return -VAR_1;
 }
 if (VAR_7->nr_pages > VAR_4 || VAR_9 > 1) {
  int VAR_12, VAR_13;

  VAR_10->depth = 2;
  VAR_7->ctx_pg_tbl = FUNC_2(VAR_4, sizeof(VAR_7),
          VAR_3);
  if (!VAR_7->ctx_pg_tbl)
   return -VAR_2;
  VAR_12 = FUNC_0(VAR_7->nr_pages, VAR_4);
  VAR_10->nr_pages = VAR_12;
  VAR_11 = FUNC_1(VAR_6, VAR_7);
  if (VAR_11)
   return VAR_11;
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   struct bnxt_ctx_pg_info *VAR_14;

   VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_3);
   if (!VAR_14)
    return -VAR_2;
   VAR_7->ctx_pg_tbl[VAR_13] = VAR_14;
   VAR_10 = &VAR_14->ring_mem;
   VAR_10->pg_tbl = VAR_7->ctx_pg_arr[VAR_13];
   VAR_10->pg_tbl_map = VAR_7->ctx_dma_arr[VAR_13];
   VAR_10->depth = 1;
   VAR_10->nr_pages = VAR_4;
   if (VAR_13 == (VAR_12 - 1)) {
    int VAR_15 = VAR_7->nr_pages % VAR_4;

    if (VAR_15)
     VAR_10->nr_pages = VAR_15;
   }
   VAR_11 = FUNC_1(VAR_6, VAR_14);
   if (VAR_11)
    break;
  }
 } else {
  VAR_10->nr_pages = FUNC_0(VAR_8, VAR_0);
  if (VAR_10->nr_pages > 1 || VAR_9)
   VAR_10->depth = 1;
  VAR_11 = FUNC_1(VAR_6, VAR_7);
 }
 return VAR_11;
}
