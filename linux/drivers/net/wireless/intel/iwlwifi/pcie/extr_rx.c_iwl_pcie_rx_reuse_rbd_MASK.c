
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rb_allocator {int rx_alloc; int alloc_wq; int req_pending; } ;
struct iwl_trans_pcie {struct iwl_rb_allocator rba; } ;
struct iwl_trans {int dummy; } ;
struct iwl_rxq {int used_count; int rx_used; } ;
struct iwl_rx_mem_buffer {int list; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_rxq*,struct iwl_rb_allocator*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct iwl_trans *VAR_2,
      struct iwl_rx_mem_buffer *VAR_3,
      struct iwl_rxq *VAR_4, bool VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_0(VAR_2);
 struct iwl_rb_allocator *VAR_7 = &VAR_6->rba;



 FUNC_3(&VAR_3->list, &VAR_4->rx_used);

 if (FUNC_5(VAR_5))
  return;


 VAR_4->used_count++;






 if ((VAR_4->used_count % VAR_0) == VAR_1) {


  FUNC_2(VAR_4, VAR_7);

  FUNC_1(&VAR_7->req_pending);
  FUNC_4(VAR_7->alloc_wq, &VAR_7->rx_alloc);
 }
}
