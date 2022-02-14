
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_vif_iter {struct ath10k_vif* arvif; int vdev_id; } ;
struct ath10k_vif {int dummy; } ;
struct ath10k {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int ) ;
 int FUNC_1 (int ,int ,int ,struct ath10k_vif_iter*) ;
 int FUNC_2 (struct ath10k_vif_iter*,int ,int) ;

struct ath10k_vif *FUNC_3(struct ath10k *VAR_2, u32 VAR_3)
{
 struct ath10k_vif_iter VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(struct ath10k_vif_iter));
 VAR_4.vdev_id = VAR_3;

 VAR_5 = VAR_0;
 FUNC_1(VAR_2->hw,
         VAR_5,
         VAR_1,
         &VAR_4);
 if (!VAR_4.arvif) {
  FUNC_0(VAR_2, "No VIF found for vdev %d\n", VAR_3);
  return ((void*)0);
 }

 return VAR_4.arvif;
}
