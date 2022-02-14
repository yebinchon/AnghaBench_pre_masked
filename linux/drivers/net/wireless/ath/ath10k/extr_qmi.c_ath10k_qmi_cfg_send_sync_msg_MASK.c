
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_10__ {scalar_t__ result; int error; } ;
struct wlfw_wlan_cfg_resp_msg_v01 {TYPE_5__ resp; } ;
struct wlfw_wlan_cfg_req_msg_v01 {int tgt_cfg_valid; scalar_t__ tgt_cfg_len; int svc_cfg_valid; scalar_t__ svc_cfg_len; int shadow_reg_valid; scalar_t__ shadow_reg_len; int shadow_reg; TYPE_3__* svc_cfg; TYPE_1__* tgt_cfg; scalar_t__ host_version_valid; } ;
struct wlfw_shadow_reg_cfg_s_v01 {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_snoc {struct ath10k_qmi* qmi; } ;
struct ath10k_qmi_wlan_enable_cfg {scalar_t__ num_ce_tgt_cfg; scalar_t__ num_ce_svc_pipe_cfg; scalar_t__ num_shadow_reg_cfg; int shadow_reg_cfg; TYPE_4__* ce_svc_cfg; TYPE_2__* ce_tgt_cfg; } ;
struct ath10k_qmi {int qmi_hdl; } ;
struct ath10k {int dummy; } ;
struct TYPE_9__ {int pipe_num; int pipe_dir; int service_id; } ;
struct TYPE_8__ {int pipe_num; int pipe_dir; int service_id; } ;
struct TYPE_7__ {int flags; int nbytes_max; int nentries; int pipe_dir; int pipe_num; } ;
struct TYPE_6__ {int flags; int nbytes_max; int nentries; int pipe_dir; int pipe_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct wlfw_wlan_cfg_req_msg_v01*) ;
 struct wlfw_wlan_cfg_req_msg_v01* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_wlan_cfg_req_msg_v01*) ;
 int FUNC_7 (struct qmi_txn*) ;
 int FUNC_8 (int *,struct qmi_txn*,int ,struct wlfw_wlan_cfg_resp_msg_v01*) ;
 int FUNC_9 (struct qmi_txn*,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_10(struct ath10k *VAR_14,
        struct ath10k_qmi_wlan_enable_cfg *VAR_15,
        const char *VAR_16)
{
 struct ath10k_snoc *VAR_17 = FUNC_2(VAR_14);
 struct ath10k_qmi *VAR_18 = VAR_17->qmi;
 struct wlfw_wlan_cfg_resp_msg_v01 VAR_19 = {};
 struct wlfw_wlan_cfg_req_msg_v01 *VAR_20;
 struct qmi_txn VAR_21;
 int VAR_22;
 u32 VAR_23;

 VAR_20 = FUNC_4(sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_3;

 VAR_22 = FUNC_8(&VAR_18->qmi_hdl, &VAR_21,
      VAR_13,
      &VAR_19);
 if (VAR_22 < 0)
  goto out;

 VAR_20->host_version_valid = 0;

 VAR_20->tgt_cfg_valid = 1;
 if (VAR_15->num_ce_tgt_cfg > VAR_7)
  VAR_20->tgt_cfg_len = VAR_7;
 else
  VAR_20->tgt_cfg_len = VAR_15->num_ce_tgt_cfg;
 for (VAR_23 = 0; VAR_23 < VAR_20->tgt_cfg_len; VAR_23++) {
  VAR_20->tgt_cfg[VAR_23].pipe_num = VAR_15->ce_tgt_cfg[VAR_23].pipe_num;
  VAR_20->tgt_cfg[VAR_23].pipe_dir = VAR_15->ce_tgt_cfg[VAR_23].pipe_dir;
  VAR_20->tgt_cfg[VAR_23].nentries = VAR_15->ce_tgt_cfg[VAR_23].nentries;
  VAR_20->tgt_cfg[VAR_23].nbytes_max = VAR_15->ce_tgt_cfg[VAR_23].nbytes_max;
  VAR_20->tgt_cfg[VAR_23].flags = VAR_15->ce_tgt_cfg[VAR_23].flags;
 }

 VAR_20->svc_cfg_valid = 1;
 if (VAR_15->num_ce_svc_pipe_cfg > VAR_9)
  VAR_20->svc_cfg_len = VAR_9;
 else
  VAR_20->svc_cfg_len = VAR_15->num_ce_svc_pipe_cfg;
 for (VAR_23 = 0; VAR_23 < VAR_20->svc_cfg_len; VAR_23++) {
  VAR_20->svc_cfg[VAR_23].service_id = VAR_15->ce_svc_cfg[VAR_23].service_id;
  VAR_20->svc_cfg[VAR_23].pipe_dir = VAR_15->ce_svc_cfg[VAR_23].pipe_dir;
  VAR_20->svc_cfg[VAR_23].pipe_num = VAR_15->ce_svc_cfg[VAR_23].pipe_num;
 }

 VAR_20->shadow_reg_valid = 1;
 if (VAR_15->num_shadow_reg_cfg >
     VAR_8)
  VAR_20->shadow_reg_len = VAR_8;
 else
  VAR_20->shadow_reg_len = VAR_15->num_shadow_reg_cfg;

 FUNC_5(VAR_20->shadow_reg, VAR_15->shadow_reg_cfg,
        sizeof(struct wlfw_shadow_reg_cfg_s_v01) * VAR_20->shadow_reg_len);

 VAR_22 = FUNC_6(&VAR_18->qmi_hdl, ((void*)0), &VAR_21,
          VAR_10,
          VAR_11,
          VAR_12, VAR_20);
 if (VAR_22 < 0) {
  FUNC_7(&VAR_21);
  FUNC_1(VAR_14, "failed to send config request: %d\n", VAR_22);
  goto out;
 }

 VAR_22 = FUNC_9(&VAR_21, VAR_1 * VAR_5);
 if (VAR_22 < 0)
  goto out;

 if (VAR_19.resp.result != VAR_6) {
  FUNC_1(VAR_14, "config request rejected: %d\n", VAR_19.resp.error);
  VAR_22 = -VAR_2;
  goto out;
 }

 FUNC_0(VAR_14, VAR_0, "qmi config request completed\n");
 FUNC_3(VAR_20);
 return 0;

out:
 FUNC_3(VAR_20);
 return VAR_22;
}
