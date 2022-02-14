
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ce_desc_64 {int dummy; } ;
struct ce_attr {int dest_nentries; } ;
struct ath10k_ce_ring {int nentries; int nentries_mask; int base_addr_ce_space_unaligned; int base_addr_ce_space; int base_addr_owner_space_unaligned; int base_addr_owner_space; } ;
struct ath10k {int dev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ath10k_ce_ring* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int *,int ) ;
 int FUNC_4 (struct ath10k_ce_ring*) ;
 struct ath10k_ce_ring* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ath10k_ce_ring*,int ,int) ;

__attribute__((used)) static struct ath10k_ce_ring *
FUNC_9(struct ath10k *VAR_4, unsigned int VAR_5,
        const struct ce_attr *VAR_6)
{
 struct ath10k_ce_ring *VAR_7;
 u32 VAR_8;
 dma_addr_t VAR_9;

 VAR_8 = FUNC_7(VAR_6->dest_nentries);

 VAR_7 = FUNC_5(FUNC_8(VAR_7, VAR_3,
     VAR_8), VAR_2);
 if (!VAR_7)
  return FUNC_1(-VAR_1);

 VAR_7->nentries = VAR_8;
 VAR_7->nentries_mask = VAR_8 - 1;




 VAR_7->base_addr_owner_space_unaligned =
  FUNC_3(VAR_4->dev,
       (VAR_8 * sizeof(struct ce_desc_64) +
        VAR_0),
       &VAR_9, VAR_2);
 if (!VAR_7->base_addr_owner_space_unaligned) {
  FUNC_4(VAR_7);
  return FUNC_1(-VAR_1);
 }

 VAR_7->base_addr_ce_space_unaligned = VAR_9;




 FUNC_6(VAR_7->base_addr_owner_space_unaligned, 0,
        VAR_8 * sizeof(struct ce_desc_64) + VAR_0);

 VAR_7->base_addr_owner_space =
   FUNC_2(VAR_7->base_addr_owner_space_unaligned,
      VAR_0);
 VAR_7->base_addr_ce_space =
   FUNC_0(VAR_7->base_addr_ce_space_unaligned,
         VAR_0);

 return VAR_7;
}
