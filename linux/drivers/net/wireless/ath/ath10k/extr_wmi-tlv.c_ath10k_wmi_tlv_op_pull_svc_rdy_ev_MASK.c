
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_svc_rdy_parse {int service_map_len; struct wlan_host_mem_req const* service_map; int num_mem_reqs; int high_5ghz_chan; int low_5ghz_chan; int eeprom_rd; int num_rf_chains; int phy_capab; int fw_build; int sw_ver1; int sw_ver0; int vht_cap; int ht_cap; int max_tx_power; int min_tx_power; struct wlan_host_mem_req* mem_reqs; struct wlan_host_mem_req* svc_bmap; struct hal_reg_capabilities* reg; struct wmi_tlv_svc_rdy_ev* ev; } ;
struct TYPE_2__ {int abi_ver1; int abi_ver0; int abi_ver_ns3; int abi_ver_ns2; int abi_ver_ns1; int abi_ver_ns0; } ;
struct wmi_tlv_svc_rdy_ev {int num_mem_reqs; int num_rf_chains; int phy_capability; int fw_build_vers; TYPE_1__ abi; int vht_cap_info; int ht_cap_info; int hw_max_tx_power; int hw_min_tx_power; } ;
struct wmi_svc_rdy_ev_arg {int service_map_len; struct wlan_host_mem_req const* service_map; int num_mem_reqs; int high_5ghz_chan; int low_5ghz_chan; int eeprom_rd; int num_rf_chains; int phy_capab; int fw_build; int sw_ver1; int sw_ver0; int vht_cap; int ht_cap; int max_tx_power; int min_tx_power; struct wlan_host_mem_req* mem_reqs; struct wlan_host_mem_req* svc_bmap; struct hal_reg_capabilities* reg; struct wmi_tlv_svc_rdy_ev* ev; } ;
struct wlan_host_mem_req {int dummy; } ;
struct sk_buff {int len; struct wlan_host_mem_req const* data; } ;
struct hal_reg_capabilities {int high_5ghz_chan; int low_5ghz_chan; int eeprom_rd; } ;
struct ath10k {int dummy; } ;
typedef struct wlan_host_mem_req __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,struct wlan_host_mem_req const*,int ,int ,struct wmi_tlv_svc_rdy_parse*) ;
 int FUNC_4 (struct wlan_host_mem_req const*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_10,
          struct sk_buff *VAR_11,
          struct wmi_svc_rdy_ev_arg *VAR_12)
{
 const struct hal_reg_capabilities *VAR_13;
 const struct wmi_tlv_svc_rdy_ev *VAR_14;
 const __le32 *VAR_15;
 const struct wlan_host_mem_req *VAR_16;
 struct wmi_tlv_svc_rdy_parse VAR_17 = { };
 int VAR_18;

 VAR_18 = FUNC_3(VAR_10, VAR_11->data, VAR_11->len,
      VAR_9, &VAR_17);
 if (VAR_18) {
  FUNC_2(VAR_10, "failed to parse tlv: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_14 = VAR_17.ev;
 VAR_13 = VAR_17.reg;
 VAR_15 = VAR_17.svc_bmap;
 VAR_16 = VAR_17.mem_reqs;

 if (!VAR_14 || !VAR_13 || !VAR_15 || !VAR_16)
  return -VAR_2;




 FUNC_1(VAR_10, VAR_0,
     "wmi tlv abi 0x%08x ?= 0x%08x, 0x%08x ?= 0x%08x, 0x%08x ?= 0x%08x, 0x%08x ?= 0x%08x, 0x%08x ?= 0x%08x\n",
     FUNC_0(VAR_14->abi.abi_ver0), VAR_3,
     FUNC_0(VAR_14->abi.abi_ver_ns0), VAR_4,
     FUNC_0(VAR_14->abi.abi_ver_ns1), VAR_5,
     FUNC_0(VAR_14->abi.abi_ver_ns2), VAR_6,
     FUNC_0(VAR_14->abi.abi_ver_ns3), VAR_7);

 if (FUNC_0(VAR_14->abi.abi_ver0) != VAR_3 ||
     FUNC_0(VAR_14->abi.abi_ver_ns0) != VAR_4 ||
     FUNC_0(VAR_14->abi.abi_ver_ns1) != VAR_5 ||
     FUNC_0(VAR_14->abi.abi_ver_ns2) != VAR_6 ||
     FUNC_0(VAR_14->abi.abi_ver_ns3) != VAR_7) {
  return -VAR_1;
 }

 VAR_12->min_tx_power = VAR_14->hw_min_tx_power;
 VAR_12->max_tx_power = VAR_14->hw_max_tx_power;
 VAR_12->ht_cap = VAR_14->ht_cap_info;
 VAR_12->vht_cap = VAR_14->vht_cap_info;
 VAR_12->sw_ver0 = VAR_14->abi.abi_ver0;
 VAR_12->sw_ver1 = VAR_14->abi.abi_ver1;
 VAR_12->fw_build = VAR_14->fw_build_vers;
 VAR_12->phy_capab = VAR_14->phy_capability;
 VAR_12->num_rf_chains = VAR_14->num_rf_chains;
 VAR_12->eeprom_rd = VAR_13->eeprom_rd;
 VAR_12->low_5ghz_chan = VAR_13->low_5ghz_chan;
 VAR_12->high_5ghz_chan = VAR_13->high_5ghz_chan;
 VAR_12->num_mem_reqs = VAR_14->num_mem_reqs;
 VAR_12->service_map = VAR_15;
 VAR_12->service_map_len = FUNC_4(VAR_15);

 VAR_18 = FUNC_3(VAR_10, VAR_16, FUNC_4(VAR_16),
      VAR_8, VAR_12);
 if (VAR_18) {
  FUNC_2(VAR_10, "failed to parse mem_reqs tlv: %d\n", VAR_18);
  return VAR_18;
 }

 return 0;
}
