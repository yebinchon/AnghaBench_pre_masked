
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct TYPE_12__ {scalar_t__ channel_profile; } ;
struct iwl_nvm_get_info_rsp_v3 {TYPE_5__ regulatory; } ;
struct TYPE_11__ {scalar_t__ channel_profile; int lar_enabled; } ;
struct TYPE_10__ {int rx_chains; int tx_chains; } ;
struct TYPE_9__ {int mac_sku_flags; } ;
struct TYPE_8__ {scalar_t__ n_hw_addrs; int nvm_version; int flags; } ;
struct iwl_nvm_get_info_rsp {TYPE_4__ regulatory; TYPE_3__ phy_sku; TYPE_2__ mac_sku; TYPE_1__ general; } ;
struct iwl_nvm_get_info {int dummy; } ;
struct iwl_nvm_data {scalar_t__ n_hw_addrs; int sku_cap_11ac_enable; int sku_cap_11n_enable; int sku_cap_11ax_enable; int sku_cap_band_24ghz_enable; int sku_cap_band_52ghz_enable; int sku_cap_mimo_disabled; int valid_tx_ant; int valid_rx_ant; int lar_enabled; int nvm_version; int hw_addr; } ;
struct iwl_host_cmd {int flags; TYPE_7__* resp_pkt; int id; int len; int data; } ;
struct iwl_fw {int valid_tx_ant; int valid_rx_ant; int ucode_capa; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {int lar_disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_nvm_data* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int FUNC_2 (struct iwl_trans*,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct iwl_trans*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (int,char*,size_t) ;
 int FUNC_5 (int ,int ) ;
 int VAR_18 ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_host_cmd*) ;
 int FUNC_10 (struct iwl_trans*,struct iwl_nvm_data*,void*,int,int,int,int) ;
 size_t FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (struct iwl_trans*,struct iwl_nvm_data*) ;
 int FUNC_13 (struct iwl_trans*,struct iwl_host_cmd*) ;
 TYPE_6__ VAR_19 ;
 int FUNC_14 (struct iwl_nvm_data*) ;
 struct iwl_nvm_data* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct iwl_nvm_data*,int ,int ) ;

struct iwl_nvm_data *FUNC_19(struct iwl_trans *VAR_20,
     const struct iwl_fw *VAR_21)
{
 struct iwl_nvm_get_info VAR_22 = {};
 struct iwl_nvm_data *VAR_23;
 struct iwl_host_cmd VAR_24 = {
  .flags = VAR_1 | VAR_0,
  .data = &VAR_22, 
  .len = sizeof(VAR_22) ,
  .id = FUNC_5(VAR_17, VAR_10)
 };
 int VAR_25;
 bool VAR_26 = !VAR_19.lar_disable &&
    FUNC_7(&VAR_21->ucode_capa,
         VAR_8);
 bool VAR_27;
 u32 VAR_28;
 u32 VAR_29 = 0;






 struct iwl_nvm_get_info_rsp *VAR_30;
 struct iwl_nvm_get_info_rsp_v3 *VAR_31;
 bool VAR_32 = FUNC_6(&VAR_21->ucode_capa,
        VAR_7);
 size_t VAR_33 = VAR_32 ? sizeof(*VAR_30) : sizeof(*VAR_31);
 void *VAR_34;

 VAR_25 = FUNC_13(VAR_20, &VAR_24);
 if (VAR_25)
  return FUNC_0(VAR_25);

 if (FUNC_4(FUNC_11(VAR_24.resp_pkt) != VAR_33,
   "Invalid payload len in NVM response from FW %d",
   FUNC_11(VAR_24.resp_pkt))) {
  VAR_25 = -VAR_2;
  goto out;
 }

 VAR_30 = (void *)VAR_24.resp_pkt->data;
 VAR_27 = !!(FUNC_17(VAR_30->general.flags) &
         VAR_9);
 if (VAR_27)
  FUNC_2(VAR_20, "OTP is empty\n");

 VAR_23 = FUNC_15(FUNC_18(VAR_23, VAR_18, VAR_5), VAR_4);
 if (!VAR_23) {
  VAR_25 = -VAR_3;
  goto out;
 }

 FUNC_12(VAR_20, VAR_23);


 if (!FUNC_8(VAR_23->hw_addr)) {
  FUNC_1(VAR_20, "no valid mac address was found\n");
  VAR_25 = -VAR_2;
  goto err_free;
 }

 FUNC_2(VAR_20, "base HW address: %pM\n", VAR_23->hw_addr);


 VAR_23->nvm_version = FUNC_16(VAR_30->general.nvm_version);
 VAR_23->n_hw_addrs = VAR_30->general.n_hw_addrs;
 if (VAR_23->n_hw_addrs == 0)
  FUNC_3(VAR_20,
    "Firmware declares no reserved mac addresses. OTP is empty: %d\n",
    VAR_27);


 VAR_28 = FUNC_17(VAR_30->mac_sku.mac_sku_flags);
 VAR_23->sku_cap_11ac_enable =
  !!(VAR_28 & VAR_11);
 VAR_23->sku_cap_11n_enable =
  !!(VAR_28 & VAR_13);
 VAR_23->sku_cap_11ax_enable =
  !!(VAR_28 & VAR_12);
 VAR_23->sku_cap_band_24ghz_enable =
  !!(VAR_28 & VAR_14);
 VAR_23->sku_cap_band_52ghz_enable =
  !!(VAR_28 & VAR_15);
 VAR_23->sku_cap_mimo_disabled =
  !!(VAR_28 & VAR_16);


 VAR_23->valid_tx_ant = (u8)FUNC_17(VAR_30->phy_sku.tx_chains);
 VAR_23->valid_rx_ant = (u8)FUNC_17(VAR_30->phy_sku.rx_chains);

 if (FUNC_17(VAR_30->regulatory.lar_enabled) && VAR_26) {
  VAR_23->lar_enabled = 1;
  VAR_29 |= VAR_6;
 }

 VAR_31 = (void *)VAR_30;
 VAR_34 = VAR_32 ? (void *)VAR_30->regulatory.channel_profile :
     (void *)VAR_31->regulatory.channel_profile;

 FUNC_10(VAR_20, VAR_23,
   VAR_34,
   VAR_23->valid_tx_ant & VAR_21->valid_tx_ant,
   VAR_23->valid_rx_ant & VAR_21->valid_rx_ant,
   VAR_29, VAR_32);

 FUNC_9(&VAR_24);
 return VAR_23;

err_free:
 FUNC_14(VAR_23);
out:
 FUNC_9(&VAR_24);
 return FUNC_0(VAR_25);
}
