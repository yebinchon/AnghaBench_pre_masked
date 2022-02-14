
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int fw_build_timestamp; int fw_version; } ;
struct TYPE_12__ {int soc_id; } ;
struct TYPE_11__ {int board_id; } ;
struct TYPE_10__ {int chip_family; int chip_id; } ;
struct TYPE_9__ {scalar_t__ result; int error; } ;
struct wlfw_cap_resp_msg_v01 {int fw_build_id; scalar_t__ fw_build_id_valid; TYPE_5__ fw_version_info; scalar_t__ fw_version_info_valid; TYPE_4__ soc_info; scalar_t__ soc_info_valid; TYPE_3__ board_info; scalar_t__ board_info_valid; TYPE_2__ chip_info; scalar_t__ chip_info_valid; TYPE_1__ resp; } ;
struct wlfw_cap_req_msg_v01 {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_snoc {int flags; } ;
struct TYPE_16__ {int soc_id; } ;
struct TYPE_15__ {int board_id; } ;
struct TYPE_14__ {int chip_family; int chip_id; } ;
struct ath10k_qmi {int fw_build_id; int fw_build_timestamp; int fw_version; TYPE_8__ soc_info; TYPE_7__ board_info; TYPE_6__ chip_info; int qmi_hdl; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,char*,int ,int ,int,...) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct wlfw_cap_resp_msg_v01*) ;
 struct wlfw_cap_resp_msg_v01* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_cap_req_msg_v01*) ;
 int FUNC_6 (struct qmi_txn*) ;
 int FUNC_7 (int *,struct qmi_txn*,int ,struct wlfw_cap_resp_msg_v01*) ;
 int FUNC_8 (struct qmi_txn*,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct ath10k_qmi *VAR_12)
{
 struct wlfw_cap_resp_msg_v01 *VAR_13;
 struct wlfw_cap_req_msg_v01 VAR_14 = {};
 struct ath10k *VAR_15 = VAR_12->ar;
 struct ath10k_snoc *VAR_16 = FUNC_2(VAR_15);
 struct qmi_txn VAR_17;
 int VAR_18;

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_18 = FUNC_7(&VAR_12->qmi_hdl, &VAR_17, VAR_11, VAR_13);
 if (VAR_18 < 0)
  goto out;

 VAR_18 = FUNC_5(&VAR_12->qmi_hdl, ((void*)0), &VAR_17,
          VAR_8,
          VAR_9,
          VAR_10, &VAR_14);
 if (VAR_18 < 0) {
  FUNC_6(&VAR_17);
  FUNC_0(VAR_15, "failed to send capability request: %d\n", VAR_18);
  goto out;
 }

 VAR_18 = FUNC_8(&VAR_17, VAR_0 * VAR_5);
 if (VAR_18 < 0)
  goto out;

 if (VAR_13->resp.result != VAR_7) {
  FUNC_0(VAR_15, "capability req rejected: %d\n", VAR_13->resp.error);
  VAR_18 = -VAR_2;
  goto out;
 }

 if (VAR_13->chip_info_valid) {
  VAR_12->chip_info.chip_id = VAR_13->chip_info.chip_id;
  VAR_12->chip_info.chip_family = VAR_13->chip_info.chip_family;
 }

 if (VAR_13->board_info_valid)
  VAR_12->board_info.board_id = VAR_13->board_info.board_id;
 else
  VAR_12->board_info.board_id = 0xFF;

 if (VAR_13->soc_info_valid)
  VAR_12->soc_info.soc_id = VAR_13->soc_info.soc_id;

 if (VAR_13->fw_version_info_valid) {
  VAR_12->fw_version = VAR_13->fw_version_info.fw_version;
  FUNC_9(VAR_12->fw_build_timestamp, VAR_13->fw_version_info.fw_build_timestamp,
   sizeof(VAR_12->fw_build_timestamp));
 }

 if (VAR_13->fw_build_id_valid)
  FUNC_9(VAR_12->fw_build_id, VAR_13->fw_build_id,
   VAR_6 + 1);

 if (!FUNC_10(VAR_1, &VAR_16->flags)) {
  FUNC_1(VAR_15, "qmi chip_id 0x%x chip_family 0x%x board_id 0x%x soc_id 0x%x",
       VAR_12->chip_info.chip_id, VAR_12->chip_info.chip_family,
       VAR_12->board_info.board_id, VAR_12->soc_info.soc_id);
  FUNC_1(VAR_15, "qmi fw_version 0x%x fw_build_timestamp %s fw_build_id %s",
       VAR_12->fw_version, VAR_12->fw_build_timestamp, VAR_12->fw_build_id);
 }

 FUNC_3(VAR_13);
 return 0;

out:
 FUNC_3(VAR_13);
 return VAR_18;
}
