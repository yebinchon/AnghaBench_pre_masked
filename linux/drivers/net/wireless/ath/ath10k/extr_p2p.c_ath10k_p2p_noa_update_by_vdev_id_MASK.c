
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_p2p_noa_info {int dummy; } ;
struct ath10k_p2p_noa_arg {struct wmi_p2p_noa_info const* noa; int vdev_id; } ;
struct ath10k {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct ath10k_p2p_noa_arg*) ;

void FUNC_1(struct ath10k *VAR_2, u32 VAR_3,
          const struct wmi_p2p_noa_info *VAR_4)
{
 struct ath10k_p2p_noa_arg VAR_5 = {
  .vdev_id = VAR_3,
  .noa = VAR_4,
 };

 FUNC_0(VAR_2->hw,
         VAR_0,
         VAR_1,
         &VAR_5);
}
