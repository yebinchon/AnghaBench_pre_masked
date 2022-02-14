
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ce_desc {scalar_t__ nbytes; int addr; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int write_index; unsigned int sw_index; void** per_transfer_context; struct ce_desc* base_addr_owner_space; } ;
struct ath10k_ce_pipe {int id; int ctrl_addr; struct ath10k_ce_ring* dest_ring; struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;


 struct ce_desc* FUNC_0 (struct ce_desc*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,unsigned int) ;
 struct ath10k_ce* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k_ce_pipe *VAR_1, void *VAR_2,
       dma_addr_t VAR_3)
{
 struct ath10k *VAR_4 = VAR_1->ar;
 struct ath10k_ce *VAR_5 = FUNC_5(VAR_4);
 struct ath10k_ce_ring *VAR_6 = VAR_1->dest_ring;
 unsigned int VAR_7 = VAR_6->nentries_mask;
 unsigned int VAR_8 = VAR_6->write_index;
 unsigned int VAR_9 = VAR_6->sw_index;
 struct ce_desc *VAR_10 = VAR_6->base_addr_owner_space;
 struct ce_desc *VAR_11 = FUNC_0(VAR_10, VAR_8);
 u32 VAR_12 = VAR_1->ctrl_addr;

 FUNC_6(&VAR_5->ce_lock);

 if ((VAR_1->id != 5) &&
     FUNC_1(VAR_7, VAR_8, VAR_9 - 1) == 0)
  return -VAR_0;

 VAR_11->addr = FUNC_3(VAR_3);
 VAR_11->nbytes = 0;

 VAR_6->per_transfer_context[VAR_8] = VAR_2;
 VAR_8 = FUNC_2(VAR_7, VAR_8);
 FUNC_4(VAR_4, VAR_12, VAR_8);
 VAR_6->write_index = VAR_8;

 return 0;
}
