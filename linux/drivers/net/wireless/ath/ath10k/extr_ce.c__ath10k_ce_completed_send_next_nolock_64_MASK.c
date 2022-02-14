
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ce_desc_64 {scalar_t__ nbytes; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int sw_index; unsigned int hw_index; int base_addr_owner_space; int ** per_transfer_context; } ;
struct ath10k_ce_pipe {struct ath10k* ar; int ctrl_addr; struct ath10k_ce_ring* src_ring; } ;
struct TYPE_2__ {scalar_t__ rri_on_ddr; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct ce_desc_64* FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct ath10k*,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k_ce_pipe *VAR_2,
          void **VAR_3)
{
 struct ath10k_ce_ring *VAR_4 = VAR_2->src_ring;
 u32 VAR_5 = VAR_2->ctrl_addr;
 struct ath10k *VAR_6 = VAR_2->ar;
 unsigned int VAR_7 = VAR_4->nentries_mask;
 unsigned int VAR_8 = VAR_4->sw_index;
 unsigned int VAR_9;
 struct ce_desc_64 *VAR_10;

 if (VAR_4->hw_index == VAR_8) {
  VAR_9 = FUNC_2(VAR_6, VAR_5);
  if (VAR_9 == 0xffffffff)
   return -VAR_1;

  VAR_9 &= VAR_7;
  VAR_4->hw_index = VAR_9;
 }

 if (VAR_6->hw_params.rri_on_ddr)
  VAR_9 = FUNC_2(VAR_6, VAR_5);
 else
  VAR_9 = VAR_4->hw_index;

 if (VAR_9 == VAR_8)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 =
   VAR_4->per_transfer_context[VAR_8];


 VAR_4->per_transfer_context[VAR_8] = ((void*)0);
 VAR_10 = FUNC_1(VAR_4->base_addr_owner_space,
          VAR_8);
 VAR_10->nbytes = 0;


 VAR_8 = FUNC_0(VAR_7, VAR_8);
 VAR_4->sw_index = VAR_8;

 return 0;
}
