
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


struct device {int dummy; } ;
struct ath10k_hif_ops {int dummy; } ;
struct TYPE_14__ {int tx_credits_wq; } ;
struct TYPE_13__ {int empty_tx_wq; } ;
struct TYPE_12__ {int timeout; int on_channel; int completed; int started; } ;
struct TYPE_11__ {int wmi_sync; } ;
struct TYPE_10__ {int wakeup_completed; } ;
struct TYPE_9__ {int bus; struct ath10k_hif_ops const* ops; } ;
struct TYPE_8__ {int hw; struct ath10k* priv; } ;
struct ath10k {int hw_rev; void* workqueue; void* workqueue_aux; int napi_dev; int set_coverage_class_work; int restart_work; int register_work; int wmi_mgmt_tx_queue; int wmi_mgmt_tx_work; int offchan_tx_queue; int offchan_tx_work; int offchan_tx_completed; TYPE_7__ wmi; TYPE_6__ htt; int peer_mapping_wq; int peers; int data_lock; int dump_mutex; int conf_mutex; TYPE_5__ scan; int peer_delete_done; int bss_survey_done; TYPE_4__ thermal; int vdev_delete_done; int vdev_setup_done; int install_key_done; TYPE_3__ wow; int driver_recovery; int target_suspend; int * hw_values; int * hw_ce_regs; int * regs; TYPE_2__ hif; struct device* dev; int hw; TYPE_1__ ath_common; } ;
typedef enum ath10k_hw_rev { ____Placeholder_ath10k_hw_rev } ath10k_hw_rev ;
typedef enum ath10k_bus { ____Placeholder_ath10k_bus } ath10k_bus ;
 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,int) ;
 struct ath10k* FUNC_7 (size_t) ;
 int FUNC_8 (struct ath10k*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_9 (char*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

struct ath10k *FUNC_17(size_t VAR_20, struct device *VAR_21,
      enum ath10k_bus VAR_22,
      enum ath10k_hw_rev VAR_23,
      const struct ath10k_hif_ops *VAR_24)
{
 struct ath10k *VAR_25;
 int VAR_26;

 VAR_25 = FUNC_7(VAR_20);
 if (!VAR_25)
  return ((void*)0);

 VAR_25->ath_common.priv = VAR_25;
 VAR_25->ath_common.hw = VAR_25->hw;
 VAR_25->dev = VAR_21;
 VAR_25->hw_rev = VAR_23;
 VAR_25->hif.ops = VAR_24;
 VAR_25->hif.bus = VAR_22;

 switch (VAR_23) {
 case 131:
 case 133:
  VAR_25->regs = &VAR_12;
  VAR_25->hw_ce_regs = &VAR_16;
  VAR_25->hw_values = &VAR_13;
  break;
 case 135:
 case 134:
  VAR_25->regs = &VAR_9;
  VAR_25->hw_ce_regs = &VAR_16;
  VAR_25->hw_values = &VAR_10;
  break;
 case 129:
 case 130:
  VAR_25->regs = &VAR_14;
  VAR_25->hw_ce_regs = &VAR_16;
  VAR_25->hw_values = &VAR_15;
  break;
 case 132:
  VAR_25->regs = &VAR_14;
  VAR_25->hw_ce_regs = &VAR_16;
  VAR_25->hw_values = &VAR_11;
  break;
 case 136:
  VAR_25->regs = &VAR_7;
  VAR_25->hw_ce_regs = &VAR_16;
  VAR_25->hw_values = &VAR_8;
  break;
 case 128:
  VAR_25->regs = &VAR_18;
  VAR_25->hw_ce_regs = &VAR_17;
  VAR_25->hw_values = &VAR_19;
  break;
 default:
  FUNC_6(VAR_25, "unsupported core hardware revision %d\n",
      VAR_23);
  VAR_26 = -VAR_0;
  goto err_free_mac;
 }

 FUNC_11(&VAR_25->scan.started);
 FUNC_11(&VAR_25->scan.completed);
 FUNC_11(&VAR_25->scan.on_channel);
 FUNC_11(&VAR_25->target_suspend);
 FUNC_11(&VAR_25->driver_recovery);
 FUNC_11(&VAR_25->wow.wakeup_completed);

 FUNC_11(&VAR_25->install_key_done);
 FUNC_11(&VAR_25->vdev_setup_done);
 FUNC_11(&VAR_25->vdev_delete_done);
 FUNC_11(&VAR_25->thermal.wmi_sync);
 FUNC_11(&VAR_25->bss_survey_done);
 FUNC_11(&VAR_25->peer_delete_done);

 FUNC_0(&VAR_25->scan.timeout, VAR_6);

 VAR_25->workqueue = FUNC_9("ath10k_wq");
 if (!VAR_25->workqueue)
  goto err_free_mac;

 VAR_25->workqueue_aux = FUNC_9("ath10k_aux_wq");
 if (!VAR_25->workqueue_aux)
  goto err_free_wq;

 FUNC_14(&VAR_25->conf_mutex);
 FUNC_14(&VAR_25->dump_mutex);
 FUNC_16(&VAR_25->data_lock);

 FUNC_1(&VAR_25->peers);
 FUNC_13(&VAR_25->peer_mapping_wq);
 FUNC_13(&VAR_25->htt.empty_tx_wq);
 FUNC_13(&VAR_25->wmi.tx_credits_wq);

 FUNC_11(&VAR_25->offchan_tx_completed);
 FUNC_2(&VAR_25->offchan_tx_work, VAR_5);
 FUNC_15(&VAR_25->offchan_tx_queue);

 FUNC_2(&VAR_25->wmi_mgmt_tx_work, VAR_4);
 FUNC_15(&VAR_25->wmi_mgmt_tx_queue);

 FUNC_2(&VAR_25->register_work, VAR_1);
 FUNC_2(&VAR_25->restart_work, VAR_2);
 FUNC_2(&VAR_25->set_coverage_class_work,
    VAR_3);

 FUNC_12(&VAR_25->napi_dev);

 VAR_26 = FUNC_3(VAR_25);
 if (VAR_26)
  goto err_free_aux_wq;

 VAR_26 = FUNC_5(VAR_25);
 if (VAR_26)
  goto err_free_coredump;

 return VAR_25;

err_free_coredump:
 FUNC_4(VAR_25);

err_free_aux_wq:
 FUNC_10(VAR_25->workqueue_aux);
err_free_wq:
 FUNC_10(VAR_25->workqueue);

err_free_mac:
 FUNC_8(VAR_25);

 return ((void*)0);
}
