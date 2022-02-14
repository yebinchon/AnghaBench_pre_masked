
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ce_desc_64 {scalar_t__ nbytes; int addr; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int write_index; unsigned int sw_index; void** per_transfer_context; struct ce_desc_64* base_addr_owner_space; } ;
struct ath10k_ce_pipe {int ctrl_addr; struct ath10k_ce_ring* dest_ring; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct ce_desc_64* FUNC_0 (struct ce_desc_64*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,unsigned int) ;
 struct ath10k_ce* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k_ce_pipe *VAR_2,
          void *VAR_3,
          dma_addr_t VAR_4)
{
 struct ath10k *VAR_5 = VAR_2->ar;
 struct ath10k_ce *VAR_6 = FUNC_5(VAR_5);
 struct ath10k_ce_ring *VAR_7 = VAR_2->dest_ring;
 unsigned int VAR_8 = VAR_7->nentries_mask;
 unsigned int VAR_9 = VAR_7->write_index;
 unsigned int VAR_10 = VAR_7->sw_index;
 struct ce_desc_64 *VAR_11 = VAR_7->base_addr_owner_space;
 struct ce_desc_64 *VAR_12 =
   FUNC_0(VAR_11, VAR_9);
 u32 VAR_13 = VAR_2->ctrl_addr;

 FUNC_6(&VAR_6->ce_lock);

 if (FUNC_1(VAR_8, VAR_9, VAR_10 - 1) == 0)
  return -VAR_1;

 VAR_12->addr = FUNC_3(VAR_4);
 VAR_12->addr &= FUNC_3(VAR_0);

 VAR_12->nbytes = 0;

 VAR_7->per_transfer_context[VAR_9] = VAR_3;
 VAR_9 = FUNC_2(VAR_8, VAR_9);
 FUNC_4(VAR_5, VAR_13, VAR_9);
 VAR_7->write_index = VAR_9;

 return 0;
}
