
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_tfd {int dummy; } ;
struct TYPE_6__ {int max_txq_num; int scd_bc_tbls_size; int tfd_size; int beacon_time_tsf_bits; int * sens; int ct_kill_threshold; int valid_rx_ant; int valid_tx_ant; void* rx_chains_num; void* tx_chains_num; int rx_wrt_ptr_reg; int ht40_channel; int max_bsm_size; int max_inst_size; int max_data_size; int max_stations; int dma_chnl_num; int max_beacon_itrvl; void* rx_page_order; int max_rxq_log; int max_rxq_size; int bcast_id; } ;
struct il_priv {TYPE_3__ hw_params; TYPE_2__* cfg; } ;
struct il4965_scd_bc_tbl {int dummy; } ;
struct TYPE_5__ {int num_of_queues; int valid_rx_ant; int valid_tx_ant; TYPE_1__* mod_params; int sku; } ;
struct TYPE_4__ {scalar_t__ num_of_queues; scalar_t__ disable_11n; scalar_t__ amsdu_size_8K; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_19)
{
 VAR_19->hw_params.bcast_id = VAR_4;
 VAR_19->hw_params.max_rxq_size = VAR_16;
 VAR_19->hw_params.max_rxq_log = VAR_17;
 if (VAR_19->cfg->mod_params->amsdu_size_8K)
  VAR_19->hw_params.rx_page_order = FUNC_2(VAR_13);
 else
  VAR_19->hw_params.rx_page_order = FUNC_2(VAR_12);

 VAR_19->hw_params.max_beacon_itrvl = VAR_10;

 if (VAR_19->cfg->mod_params->disable_11n)
  VAR_19->cfg->sku &= ~VAR_14;

 if (VAR_19->cfg->mod_params->num_of_queues >= VAR_11 &&
     VAR_19->cfg->mod_params->num_of_queues <= VAR_7)
  VAR_19->cfg->num_of_queues =
      VAR_19->cfg->mod_params->num_of_queues;

 VAR_19->hw_params.max_txq_num = VAR_19->cfg->num_of_queues;
 VAR_19->hw_params.dma_chnl_num = VAR_3;
 VAR_19->hw_params.scd_bc_tbls_size =
     VAR_19->cfg->num_of_queues *
     sizeof(struct il4965_scd_bc_tbl);

 VAR_19->hw_params.tfd_size = sizeof(struct il_tfd);
 VAR_19->hw_params.max_stations = VAR_6;
 VAR_19->hw_params.max_data_size = VAR_8;
 VAR_19->hw_params.max_inst_size = VAR_9;
 VAR_19->hw_params.max_bsm_size = VAR_0;
 VAR_19->hw_params.ht40_channel = FUNC_0(VAR_15);

 VAR_19->hw_params.rx_wrt_ptr_reg = VAR_2;

 VAR_19->hw_params.tx_chains_num = FUNC_3(VAR_19->cfg->valid_tx_ant);
 VAR_19->hw_params.rx_chains_num = FUNC_3(VAR_19->cfg->valid_rx_ant);
 VAR_19->hw_params.valid_tx_ant = VAR_19->cfg->valid_tx_ant;
 VAR_19->hw_params.valid_rx_ant = VAR_19->cfg->valid_rx_ant;

 VAR_19->hw_params.ct_kill_threshold =
    FUNC_1(VAR_1);

 VAR_19->hw_params.sens = &VAR_18;
 VAR_19->hw_params.beacon_time_tsf_bits = VAR_5;
}
