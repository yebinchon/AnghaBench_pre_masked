
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ce_ring {size_t write_index; size_t sw_index; size_t nentries_mask; int ** per_transfer_context; } ;
struct ath10k_ce_pipe {int ctrl_addr; struct ath10k_ce_ring* src_ring; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 size_t FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ath10k_ce_pipe *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 struct ath10k_ce *VAR_2 = FUNC_1(VAR_1);
 struct ath10k_ce_ring *VAR_3 = VAR_0->src_ring;
 u32 VAR_4 = VAR_0->ctrl_addr;

 FUNC_3(&VAR_2->ce_lock);






 if (FUNC_0(VAR_3->write_index == VAR_3->sw_index))
  return;

 if (FUNC_0(VAR_3->write_index ==
    FUNC_2(VAR_1, VAR_4)))
  return;

 VAR_3->write_index--;
 VAR_3->write_index &= VAR_3->nentries_mask;

 VAR_3->per_transfer_context[VAR_3->write_index] = ((void*)0);
}
