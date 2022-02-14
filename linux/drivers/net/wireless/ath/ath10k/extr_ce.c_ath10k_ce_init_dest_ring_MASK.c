
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ce_desc_64 {int dummy; } ;
struct ce_desc {int dummy; } ;
struct ce_attr {int dest_nentries; } ;
struct ath10k_ce_ring {int base_addr_owner_space; int base_addr_ce_space; int nentries_mask; int write_index; int sw_index; } ;
struct ath10k_ce_pipe {struct ath10k_ce_ring* dest_ring; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct TYPE_2__ {scalar_t__ target_64bit; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,unsigned int) ;
 int FUNC_1 (struct ath10k*,unsigned int,int ) ;
 int FUNC_2 (struct ath10k*,int,int ) ;
 int FUNC_3 (struct ath10k*,int,int) ;
 int FUNC_4 (struct ath10k*,int,int ) ;
 int FUNC_5 (struct ath10k*,int) ;
 int FUNC_6 (struct ath10k*,int,int) ;
 int FUNC_7 (struct ath10k*,int) ;
 struct ath10k_ce* FUNC_8 (struct ath10k*) ;
 int FUNC_9 (struct ath10k*,int ,char*,unsigned int,int,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct ath10k *VAR_1,
        unsigned int VAR_2,
        const struct ce_attr *VAR_3)
{
 struct ath10k_ce *VAR_4 = FUNC_8(VAR_1);
 struct ath10k_ce_pipe *VAR_5 = &VAR_4->ce_states[VAR_2];
 struct ath10k_ce_ring *VAR_6 = VAR_5->dest_ring;
 u32 VAR_7, VAR_8 = FUNC_0(VAR_1, VAR_2);

 VAR_7 = FUNC_11(VAR_3->dest_nentries);

 if (VAR_1->hw_params.target_64bit)
  FUNC_10(VAR_6->base_addr_owner_space, 0,
         VAR_7 * sizeof(struct ce_desc_64));
 else
  FUNC_10(VAR_6->base_addr_owner_space, 0,
         VAR_7 * sizeof(struct ce_desc));

 VAR_6->sw_index = FUNC_5(VAR_1, VAR_8);
 VAR_6->sw_index &= VAR_6->nentries_mask;
 VAR_6->write_index =
  FUNC_7(VAR_1, VAR_8);
 VAR_6->write_index &= VAR_6->nentries_mask;

 FUNC_1(VAR_1, VAR_2,
       VAR_6->base_addr_ce_space);
 FUNC_6(VAR_1, VAR_8, VAR_7);
 FUNC_2(VAR_1, VAR_8, 0);
 FUNC_4(VAR_1, VAR_8, 0);
 FUNC_3(VAR_1, VAR_8, VAR_7);

 FUNC_9(VAR_1, VAR_0,
     "boot ce dest ring id %d entries %d base_addr %pK\n",
     VAR_2, VAR_7, VAR_6->base_addr_owner_space);

 return 0;
}
