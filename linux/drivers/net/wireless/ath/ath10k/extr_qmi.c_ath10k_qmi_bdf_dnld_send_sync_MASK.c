
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ result; int error; } ;
struct wlfw_bdf_download_resp_msg_v01 {TYPE_2__ resp; } ;
struct wlfw_bdf_download_req_msg_v01 {int valid; int file_id_valid; int total_size_valid; unsigned int total_size; int seg_id_valid; int data_valid; int end_valid; unsigned int data_len; int end; int seg_id; int data; scalar_t__ file_id; } ;
struct qmi_txn {int dummy; } ;
struct ath10k_qmi {int qmi_hdl; struct ath10k* ar; } ;
struct TYPE_3__ {unsigned int board_len; int * board_data; } ;
struct ath10k {TYPE_1__ normal_mode_fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int ) ;
 int FUNC_2 (struct wlfw_bdf_download_req_msg_v01*) ;
 struct wlfw_bdf_download_req_msg_v01* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (int *,int *,struct qmi_txn*,int ,int ,int ,struct wlfw_bdf_download_req_msg_v01*) ;
 int FUNC_6 (struct qmi_txn*) ;
 int FUNC_7 (int *,struct qmi_txn*,int ,struct wlfw_bdf_download_resp_msg_v01*) ;
 int FUNC_8 (struct qmi_txn*,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct ath10k_qmi *VAR_12)
{
 struct wlfw_bdf_download_resp_msg_v01 VAR_13 = {};
 struct wlfw_bdf_download_req_msg_v01 *VAR_14;
 struct ath10k *VAR_15 = VAR_12->ar;
 unsigned int VAR_16;
 struct qmi_txn VAR_17;
 const u8 *VAR_18;
 int VAR_19;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_18 = VAR_15->normal_mode_fw.board_data;
 VAR_16 = VAR_15->normal_mode_fw.board_len;

 while (VAR_16) {
  VAR_14->valid = 1;
  VAR_14->file_id_valid = 1;
  VAR_14->file_id = 0;
  VAR_14->total_size_valid = 1;
  VAR_14->total_size = VAR_15->normal_mode_fw.board_len;
  VAR_14->seg_id_valid = 1;
  VAR_14->data_valid = 1;
  VAR_14->end_valid = 1;

  if (VAR_16 > VAR_8) {
   VAR_14->data_len = VAR_8;
  } else {
   VAR_14->data_len = VAR_16;
   VAR_14->end = 1;
  }

  FUNC_4(VAR_14->data, VAR_18, VAR_14->data_len);

  VAR_19 = FUNC_7(&VAR_12->qmi_hdl, &VAR_17,
       VAR_11,
       &VAR_13);
  if (VAR_19 < 0)
   goto out;

  VAR_19 = FUNC_5(&VAR_12->qmi_hdl, ((void*)0), &VAR_17,
           VAR_7,
           VAR_9,
           VAR_10, VAR_14);
  if (VAR_19 < 0) {
   FUNC_6(&VAR_17);
   goto out;
  }

  VAR_19 = FUNC_8(&VAR_17, VAR_1 * VAR_5);

  if (VAR_19 < 0)
   goto out;

  if (VAR_13.resp.result != VAR_6) {
   FUNC_1(VAR_15, "failed to download board data file: %d\n",
       VAR_13.resp.error);
   VAR_19 = -VAR_2;
   goto out;
  }

  VAR_16 -= VAR_14->data_len;
  VAR_18 += VAR_14->data_len;
  VAR_14->seg_id++;
 }

 FUNC_0(VAR_15, VAR_0, "qmi bdf download request completed\n");

 FUNC_2(VAR_14);
 return 0;

out:
 FUNC_2(VAR_14);
 return VAR_19;
}
