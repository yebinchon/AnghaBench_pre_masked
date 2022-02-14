
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ce_desc_64 {int dummy; } ;
struct ath10k_ce_ring {int shadow_base_unaligned; struct ce_desc_64* shadow_base; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_3,
           struct ath10k_ce_ring *VAR_4,
           u32 VAR_5)
{
 VAR_4->shadow_base_unaligned = FUNC_1(VAR_5,
        sizeof(struct ce_desc_64),
        VAR_2);
 if (!VAR_4->shadow_base_unaligned)
  return -VAR_1;

 VAR_4->shadow_base = (struct ce_desc_64 *)
   FUNC_0(VAR_4->shadow_base_unaligned,
      VAR_0);
 return 0;
}
