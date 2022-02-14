
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int sw_index; unsigned int write_index; int ** per_transfer_context; } ;
struct ath10k_ce_pipe {TYPE_1__* ops; struct ath10k* ar; struct ath10k_ce_ring* src_ring; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* ce_extract_desc_data ) (struct ath10k*,struct ath10k_ce_ring*,unsigned int,int *,unsigned int*,unsigned int*) ;} ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ath10k*,struct ath10k_ce_ring*,unsigned int,int *,unsigned int*,unsigned int*) ;

int FUNC_5(struct ath10k_ce_pipe *VAR_1,
          void **VAR_2,
          dma_addr_t *VAR_3,
          unsigned int *VAR_4,
          unsigned int *VAR_5)
{
 struct ath10k_ce_ring *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 struct ath10k *VAR_11;
 struct ath10k_ce *VAR_12;

 VAR_6 = VAR_1->src_ring;

 if (!VAR_6)
  return -VAR_0;

 VAR_11 = VAR_1->ar;
 VAR_12 = FUNC_1(VAR_11);

 FUNC_2(&VAR_12->ce_lock);

 VAR_7 = VAR_6->nentries_mask;
 VAR_8 = VAR_6->sw_index;
 VAR_9 = VAR_6->write_index;

 if (VAR_9 != VAR_8) {
  VAR_1->ops->ce_extract_desc_data(VAR_11, VAR_6, VAR_8,
          VAR_3, VAR_4,
          VAR_5);

  if (VAR_2)
   *VAR_2 =
    VAR_6->per_transfer_context[VAR_8];


  VAR_6->per_transfer_context[VAR_8] = ((void*)0);


  VAR_8 = FUNC_0(VAR_7, VAR_8);
  VAR_6->sw_index = VAR_8;
  VAR_10 = 0;
 } else {
  VAR_10 = -VAR_0;
 }

 FUNC_3(&VAR_12->ce_lock);

 return VAR_10;
}
