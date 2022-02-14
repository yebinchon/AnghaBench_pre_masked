
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ce_desc {scalar_t__ nbytes; int addr; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int sw_index; unsigned int write_index; int ** per_transfer_context; struct ce_desc* base_addr_owner_space; } ;
struct ath10k_ce_pipe {struct ath10k* ar; struct ath10k_ce_ring* dest_ring; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;


 struct ce_desc* FUNC_0 (struct ce_desc*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct ath10k_ce* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k_ce_pipe *VAR_1,
           void **VAR_2,
           dma_addr_t *VAR_3)
{
 struct ath10k_ce_ring *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 struct ath10k *VAR_9;
 struct ath10k_ce *VAR_10;

 VAR_4 = VAR_1->dest_ring;

 if (!VAR_4)
  return -VAR_0;

 VAR_9 = VAR_1->ar;
 VAR_10 = FUNC_3(VAR_9);

 FUNC_4(&VAR_10->ce_lock);

 VAR_5 = VAR_4->nentries_mask;
 VAR_6 = VAR_4->sw_index;
 VAR_7 = VAR_4->write_index;
 if (VAR_7 != VAR_6) {
  struct ce_desc *VAR_11 = VAR_4->base_addr_owner_space;
  struct ce_desc *VAR_12 = FUNC_0(VAR_11, VAR_6);


  *VAR_3 = FUNC_2(VAR_12->addr);

  if (VAR_2)
   *VAR_2 =
    VAR_4->per_transfer_context[VAR_6];


  VAR_4->per_transfer_context[VAR_6] = ((void*)0);
  VAR_12->nbytes = 0;


  VAR_6 = FUNC_1(VAR_5, VAR_6);
  VAR_4->sw_index = VAR_6;
  VAR_8 = 0;
 } else {
  VAR_8 = -VAR_0;
 }

 FUNC_5(&VAR_10->ce_lock);

 return VAR_8;
}
