
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mac_info {int max_msix_vectors; int dglort_map; } ;
struct fm10k_hw {struct fm10k_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_hw*) ;

s32 FUNC_1(struct fm10k_hw *VAR_1)
{
 struct fm10k_mac_info *VAR_2 = &VAR_1->mac;


 VAR_2->dglort_map = VAR_0;


 VAR_2->max_msix_vectors = FUNC_0(VAR_1);

 return 0;
}
