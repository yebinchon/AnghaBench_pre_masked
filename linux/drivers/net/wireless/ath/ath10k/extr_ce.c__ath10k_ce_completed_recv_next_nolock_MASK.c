
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct ce_desc {scalar_t__ nbytes; } ;
struct ath10k_ce_ring {unsigned int nentries_mask; unsigned int sw_index; int ** per_transfer_context; struct ce_desc* base_addr_owner_space; } ;
struct ath10k_ce_pipe {int id; struct ath10k_ce_ring* dest_ring; } ;


 struct ce_desc* FUNC_0 (struct ce_desc*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
  FUNC_3(struct ath10k_ce_pipe *VAR_1,
            void **VAR_2,
            unsigned int *VAR_3)
{
 struct ath10k_ce_ring *VAR_4 = VAR_1->dest_ring;
 unsigned int VAR_5 = VAR_4->nentries_mask;
 unsigned int VAR_6 = VAR_4->sw_index;

 struct ce_desc *VAR_7 = VAR_4->base_addr_owner_space;
 struct ce_desc *VAR_8 = FUNC_0(VAR_7, VAR_6);
 struct ce_desc VAR_9;
 u16 VAR_10;


 VAR_9 = *VAR_8;

 VAR_10 = FUNC_2(VAR_9.nbytes);
 if (VAR_10 == 0) {






  return -VAR_0;
 }

 VAR_8->nbytes = 0;


 *VAR_3 = VAR_10;

 if (VAR_2)
  *VAR_2 =
   VAR_4->per_transfer_context[VAR_6];




 if (VAR_1->id != 5)
  VAR_4->per_transfer_context[VAR_6] = ((void*)0);


 VAR_6 = FUNC_1(VAR_5, VAR_6);
 VAR_4->sw_index = VAR_6;

 return 0;
}
