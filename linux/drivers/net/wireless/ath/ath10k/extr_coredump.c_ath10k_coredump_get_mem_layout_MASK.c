
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_hw_mem_layout {scalar_t__ hw_id; scalar_t__ hw_rev; } ;
struct ath10k {scalar_t__ target_version; scalar_t__ hw_rev; } ;


 int FUNC_0 (struct ath10k_hw_mem_layout const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 struct ath10k_hw_mem_layout const* VAR_2 ;
 int FUNC_2 (int ,int *) ;

const struct ath10k_hw_mem_layout *FUNC_3(struct ath10k *VAR_3)
{
 int VAR_4;

 if (!FUNC_2(VAR_0, &VAR_1))
  return ((void*)0);

 if (FUNC_1(VAR_3->target_version == 0))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (VAR_3->target_version == VAR_2[VAR_4].hw_id &&
      VAR_3->hw_rev == VAR_2[VAR_4].hw_rev)
   return &VAR_2[VAR_4];
 }

 return ((void*)0);
}
