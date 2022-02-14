
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_ext_resource_config_10_4_cmd {void* max_tdls_concurrent_buffer_sta; void* max_tdls_concurrent_sleep_sta; void* num_tdls_conn_table_entries; void* num_tdls_vdevs; void* coex_gpio_pin3; void* coex_gpio_pin2; void* coex_gpio_pin1; void* coex_version; void* wlan_gpio_priority; void* fw_feature_bitmap; void* host_platform_config; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;
typedef enum wmi_host_platform_type { ____Placeholder_wmi_host_platform_type } wmi_host_platform_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_7,
        enum wmi_host_platform_type VAR_8,
        u32 VAR_9)
{
 struct wmi_ext_resource_config_10_4_cmd *VAR_10;
 struct sk_buff *VAR_11;
 u32 VAR_12 = 0;

 VAR_11 = FUNC_3(VAR_7, sizeof(*VAR_10));
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 if (FUNC_4(VAR_6, VAR_7->wmi.svc_map))
  VAR_12 = VAR_3;

 VAR_10 = (struct wmi_ext_resource_config_10_4_cmd *)VAR_11->data;
 VAR_10->host_platform_config = FUNC_1(VAR_8);
 VAR_10->fw_feature_bitmap = FUNC_1(VAR_9);
 VAR_10->wlan_gpio_priority = FUNC_1(-1);
 VAR_10->coex_version = FUNC_1(VAR_5);
 VAR_10->coex_gpio_pin1 = FUNC_1(-1);
 VAR_10->coex_gpio_pin2 = FUNC_1(-1);
 VAR_10->coex_gpio_pin3 = FUNC_1(-1);
 VAR_10->num_tdls_vdevs = FUNC_1(VAR_4);
 VAR_10->num_tdls_conn_table_entries = FUNC_1(20);
 VAR_10->max_tdls_concurrent_sleep_sta = FUNC_1(VAR_12);
 VAR_10->max_tdls_concurrent_buffer_sta =
   FUNC_1(VAR_2);

 FUNC_2(VAR_7, VAR_0,
     "wmi ext resource config host type %d firmware feature bitmap %08x\n",
     VAR_8, VAR_9);
 return VAR_11;
}
