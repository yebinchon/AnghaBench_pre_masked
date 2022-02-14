
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int write_index; unsigned int sw_index; } ;
struct ath10k_ce_pipe {struct ath10k_ce_ring* dest_ring; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ath10k_ce_pipe *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 struct ath10k_ce *VAR_2 = FUNC_1(VAR_1);
 struct ath10k_ce_ring *VAR_3 = VAR_0->dest_ring;
 unsigned int VAR_4 = VAR_3->nentries_mask;
 unsigned int VAR_5 = VAR_3->write_index;
 unsigned int VAR_6 = VAR_3->sw_index;

 FUNC_2(&VAR_2->ce_lock);

 return FUNC_0(VAR_4, VAR_5, VAR_6 - 1);
}
