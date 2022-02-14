
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_chains_num; void* tx_chains_num; } ;
struct iwl_priv {TYPE_2__ hw_params; TYPE_1__* cfg; struct iwl_nvm_data* nvm_data; } ;
struct iwl_nvm_data {int valid_rx_ant; int valid_tx_ant; scalar_t__ sku_cap_11n_enable; scalar_t__ sku_cap_band_52ghz_enable; scalar_t__ sku_cap_band_24ghz_enable; } ;
struct TYPE_3__ {scalar_t__ rx_with_siso_diversity; int ht_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,char*,char*,...) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_1)
{
 struct iwl_nvm_data *VAR_2 = VAR_1->nvm_data;

 if (VAR_2->sku_cap_11n_enable &&
     !VAR_1->cfg->ht_params) {
  FUNC_1(VAR_1, "Invalid 11n configuration\n");
  return -VAR_0;
 }

 if (!VAR_2->sku_cap_11n_enable && !VAR_2->sku_cap_band_24ghz_enable &&
     !VAR_2->sku_cap_band_52ghz_enable) {
  FUNC_1(VAR_1, "Invalid device sku\n");
  return -VAR_0;
 }

 FUNC_0(VAR_1,
         "Device SKU: 24GHz %s %s, 52GHz %s %s, 11.n %s %s\n",
         VAR_2->sku_cap_band_24ghz_enable ? "" : "NOT", "enabled",
         VAR_2->sku_cap_band_52ghz_enable ? "" : "NOT", "enabled",
         VAR_2->sku_cap_11n_enable ? "" : "NOT", "enabled");

 VAR_1->hw_params.tx_chains_num =
  FUNC_2(VAR_2->valid_tx_ant);
 if (VAR_1->cfg->rx_with_siso_diversity)
  VAR_1->hw_params.rx_chains_num = 1;
 else
  VAR_1->hw_params.rx_chains_num =
   FUNC_2(VAR_2->valid_rx_ant);

 FUNC_0(VAR_1, "Valid Tx ant: 0x%X, Valid Rx ant: 0x%X\n",
         VAR_2->valid_tx_ant,
         VAR_2->valid_rx_ant);

 return 0;
}
