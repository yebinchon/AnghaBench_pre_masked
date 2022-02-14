
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_mem_info {void** pg_arr; int flags; int dma_arr; int page_size; int nr_pages; } ;
struct bnxt_ring_struct {struct bnxt_ring_mem_info ring_mem; } ;
struct bnxt_cp_ring_info {int cp_desc_mapping; scalar_t__ cp_desc_ring; struct bnxt_ring_struct cp_ring_struct; } ;
struct bnxt {int cp_nr_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct bnxt_ring_mem_info*) ;
 int FUNC_1 (struct bnxt*,struct bnxt_ring_mem_info*) ;
 int FUNC_2 (struct bnxt_cp_ring_info*) ;
 struct bnxt_cp_ring_info* FUNC_3 (int,int ) ;

__attribute__((used)) static struct bnxt_cp_ring_info *FUNC_4(struct bnxt *VAR_3)
{
 struct bnxt_ring_mem_info *VAR_4;
 struct bnxt_ring_struct *VAR_5;
 struct bnxt_cp_ring_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = &VAR_6->cp_ring_struct;
 VAR_4 = &VAR_5->ring_mem;
 VAR_4->nr_pages = VAR_3->cp_nr_pages;
 VAR_4->page_size = VAR_2;
 VAR_4->pg_arr = (void **)VAR_6->cp_desc_ring;
 VAR_4->dma_arr = VAR_6->cp_desc_mapping;
 VAR_4->flags = VAR_0;
 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_3, VAR_4);
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
 }
 return VAR_6;
}
