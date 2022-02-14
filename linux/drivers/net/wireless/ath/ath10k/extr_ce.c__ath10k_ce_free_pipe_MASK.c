
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ce_desc {int dummy; } ;
struct ath10k_ce_pipe {TYPE_2__* dest_ring; TYPE_2__* src_ring; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct TYPE_3__ {scalar_t__ shadow_reg_support; } ;
struct ath10k {int dev; TYPE_1__ hw_params; } ;
struct TYPE_4__ {int nentries; int base_addr_ce_space; int base_addr_owner_space; struct TYPE_4__* shadow_base_unaligned; } ;


 scalar_t__ VAR_0 ;
 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1, int VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_0(VAR_1);
 struct ath10k_ce_pipe *VAR_4 = &VAR_3->ce_states[VAR_2];

 if (VAR_4->src_ring) {
  if (VAR_1->hw_params.shadow_reg_support)
   FUNC_2(VAR_4->src_ring->shadow_base_unaligned);
  FUNC_1(VAR_1->dev,
      (VAR_4->src_ring->nentries *
       sizeof(struct ce_desc) +
       VAR_0),
      VAR_4->src_ring->base_addr_owner_space,
      VAR_4->src_ring->base_addr_ce_space);
  FUNC_2(VAR_4->src_ring);
 }

 if (VAR_4->dest_ring) {
  FUNC_1(VAR_1->dev,
      (VAR_4->dest_ring->nentries *
       sizeof(struct ce_desc) +
       VAR_0),
      VAR_4->dest_ring->base_addr_owner_space,
      VAR_4->dest_ring->base_addr_ce_space);
  FUNC_2(VAR_4->dest_ring);
 }

 VAR_4->src_ring = ((void*)0);
 VAR_4->dest_ring = ((void*)0);
}
