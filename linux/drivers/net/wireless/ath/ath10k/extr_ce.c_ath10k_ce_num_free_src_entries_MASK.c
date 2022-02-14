
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_pipe {TYPE_1__* src_ring; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {scalar_t__ sw_index; int write_index; int nentries_mask; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath10k_ce_pipe *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 struct ath10k_ce *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_2(&VAR_2->ce_lock);
 VAR_3 = FUNC_0(VAR_0->src_ring->nentries_mask,
         VAR_0->src_ring->write_index,
         VAR_0->src_ring->sw_index - 1);
 FUNC_3(&VAR_2->ce_lock);

 return VAR_3;
}
