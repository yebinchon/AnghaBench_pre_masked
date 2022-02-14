
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hinic_wq {int cons_idx; int wq_page_size; int * block_vaddr; } ;
struct hinic_cmdqs {int hwif; } ;
struct hinic_cmdq_pages {int page_paddr; } ;
struct hinic_cmdq_ctxt_info {int curr_wqe_page_pfn; int wq_block_pfn; } ;
struct hinic_cmdq_ctxt {int cmdq_type; int func_idx; struct hinic_cmdq_ctxt_info ctxt_info; } ;
struct hinic_cmdq {int wrapped; int cmdq_type; struct hinic_wq* wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct hinic_cmdqs* FUNC_6 (struct hinic_cmdq*) ;

__attribute__((used)) static void FUNC_7(struct hinic_cmdq_ctxt *VAR_8,
     struct hinic_cmdq *VAR_9,
     struct hinic_cmdq_pages *VAR_10)
{
 struct hinic_cmdq_ctxt_info *VAR_11 = &VAR_8->ctxt_info;
 u64 VAR_12, VAR_13, VAR_14;
 struct hinic_cmdqs *VAR_15 = FUNC_6(VAR_9);
 struct hinic_wq *VAR_16 = VAR_9->wq;


 VAR_12 = FUNC_5(*VAR_16->block_vaddr);

 VAR_14 = FUNC_0(VAR_12, VAR_16->wq_page_size);

 VAR_11->curr_wqe_page_pfn =
  FUNC_2(VAR_14, VAR_3) |
  FUNC_2(VAR_5, VAR_4) |
  FUNC_2(1, VAR_0) |
  FUNC_2(1, VAR_1) |
  FUNC_2(VAR_9->wrapped, VAR_7);


 VAR_13 = VAR_10->page_paddr;

 VAR_14 = FUNC_0(VAR_13, VAR_16->wq_page_size);

 VAR_11->wq_block_pfn =
  FUNC_1(VAR_14, VAR_6) |
  FUNC_1(FUNC_4(&VAR_16->cons_idx), VAR_2);

 VAR_8->func_idx = FUNC_3(VAR_15->hwif);
 VAR_8->cmdq_type = VAR_9->cmdq_type;
}
