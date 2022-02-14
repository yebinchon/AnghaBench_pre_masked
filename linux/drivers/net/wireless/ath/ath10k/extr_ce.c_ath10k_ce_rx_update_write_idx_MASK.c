
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int write_index; unsigned int sw_index; } ;
struct ath10k_ce_pipe {unsigned int ctrl_addr; struct ath10k_ce_ring* dest_ring; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct ath10k*,unsigned int) ;
 int FUNC_2 (struct ath10k*,unsigned int,unsigned int) ;

void FUNC_3(struct ath10k_ce_pipe *VAR_0, u32 VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->ar;
 struct ath10k_ce_ring *VAR_3 = VAR_0->dest_ring;
 unsigned int VAR_4 = VAR_3->nentries_mask;
 unsigned int VAR_5 = VAR_3->write_index;
 u32 VAR_6 = VAR_0->ctrl_addr;
 u32 VAR_7 = FUNC_1(VAR_2, VAR_6);




 if (((VAR_7 + VAR_1) & VAR_4) == VAR_3->sw_index)
  VAR_1 -= 1;

 VAR_5 = FUNC_0(VAR_4, VAR_5, VAR_1);
 FUNC_2(VAR_2, VAR_6, VAR_5);
 VAR_3->write_index = VAR_5;
}
