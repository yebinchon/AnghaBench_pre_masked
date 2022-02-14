
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ce_desc {int flags; int nbytes; int addr; } ;
struct ath10k_ce_ring {struct ce_desc* base_addr_owner_space; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct ce_desc* FUNC_0 (struct ce_desc*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_1,
     struct ath10k_ce_ring *VAR_2,
     u32 VAR_3,
     dma_addr_t *VAR_4,
     u32 *VAR_5,
     u32 *VAR_6)
{
  struct ce_desc *VAR_7 = VAR_2->base_addr_owner_space;
  struct ce_desc *VAR_8 = FUNC_0(VAR_7, VAR_3);


  *VAR_4 = FUNC_3(VAR_8->addr);
  *VAR_5 = FUNC_2(VAR_8->nbytes);
  *VAR_6 = FUNC_1(FUNC_2(VAR_8->flags),
       VAR_0);
}
