
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_vif_iter_data {int any_assoc; int need_set_hw_addr; int found_active; int * hw_macaddr; } ;
struct ath5k_hw {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct ath5k_vif_iter_data*) ;

bool
FUNC_1(struct ath5k_hw *VAR_2)
{
 struct ath5k_vif_iter_data VAR_3;
 VAR_3.hw_macaddr = ((void*)0);
 VAR_3.any_assoc = 0;
 VAR_3.need_set_hw_addr = 0;
 VAR_3.found_active = 1;

 FUNC_0(
  VAR_2->hw, VAR_0,
  VAR_1, &VAR_3);
 return VAR_3.any_assoc;
}
