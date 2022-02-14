
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_qmi_wlan_enable_cfg {int dummy; } ;
struct ath10k {int dummy; } ;
typedef enum wlfw_driver_mode_enum_v01 { ____Placeholder_wlfw_driver_mode_enum_v01 } wlfw_driver_mode_enum_v01 ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,struct ath10k_qmi_wlan_enable_cfg*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct ath10k_qmi_wlan_enable_cfg*,char const*) ;
 int FUNC_3 (struct ath10k*,int) ;

int FUNC_4(struct ath10k *VAR_1,
      struct ath10k_qmi_wlan_enable_cfg *VAR_2,
      enum wlfw_driver_mode_enum_v01 VAR_3,
      const char *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, VAR_0, "qmi mode %d config %p\n",
     VAR_3, VAR_2);

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1, "failed to send qmi config: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_1, "failed to send qmi mode: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
