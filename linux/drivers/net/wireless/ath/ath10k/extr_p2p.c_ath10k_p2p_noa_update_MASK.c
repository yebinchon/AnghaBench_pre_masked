
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_p2p_noa_info {int dummy; } ;
struct ath10k_vif {struct ath10k* ar; } ;
struct ath10k {int data_lock; } ;


 int FUNC_0 (struct ath10k_vif*,struct wmi_p2p_noa_info const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath10k_vif *VAR_0,
      const struct wmi_p2p_noa_info *VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->ar;

 FUNC_1(&VAR_2->data_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->data_lock);
}
