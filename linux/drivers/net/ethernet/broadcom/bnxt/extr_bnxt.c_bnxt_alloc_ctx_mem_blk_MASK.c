
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_mem_info {int depth; int flags; int dma_arr; int pg_arr; int page_size; } ;
struct bnxt_ctx_pg_info {int ctx_dma_arr; int ctx_pg_arr; struct bnxt_ring_mem_info ring_mem; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct bnxt_ring_mem_info*) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_3,
      struct bnxt_ctx_pg_info *VAR_4)
{
 struct bnxt_ring_mem_info *VAR_5 = &VAR_4->ring_mem;

 VAR_5->page_size = VAR_0;
 VAR_5->pg_arr = VAR_4->ctx_pg_arr;
 VAR_5->dma_arr = VAR_4->ctx_dma_arr;
 VAR_5->flags = VAR_2;
 if (VAR_5->depth >= 1)
  VAR_5->flags |= VAR_1;
 return FUNC_0(VAR_3, VAR_5);
}
