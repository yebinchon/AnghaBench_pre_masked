
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qedi_ctx {int dbg_ctx; int ll2_mtu; int stats_lock; int cdev; } ;
struct qed_mfw_tlv_iscsi {int rx_frames_set; int rx_bytes_set; int tx_frames_set; int tx_bytes_set; int frame_size_set; int auth_method_set; int auth_method; int tx_desc_size_set; int rx_desc_size_set; int rx_desc_size; int tx_desc_size; int frame_size; int tx_bytes; int tx_frames; int rx_bytes; int rx_frames; } ;
struct qed_iscsi_stats {int iscsi_tx_bytes_cnt; int iscsi_tx_packet_cnt; int iscsi_rx_bytes_cnt; int iscsi_rx_packet_cnt; } ;
struct TYPE_3__ {int ctrl_flags; } ;
struct nvm_iscsi_block {TYPE_1__ generic; } ;
struct TYPE_4__ {int (* get_stats ) (int ,struct qed_iscsi_stats*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qed_iscsi_stats*) ;
 struct qed_iscsi_stats* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qedi_ctx*,struct qed_mfw_tlv_iscsi*,struct nvm_iscsi_block*) ;
 struct nvm_iscsi_block* FUNC_7 (struct qedi_ctx*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (int ,struct qed_iscsi_stats*) ;

__attribute__((used)) static void FUNC_9(void *VAR_7, void *VAR_8)
{
 struct qed_mfw_tlv_iscsi *VAR_9 = VAR_8;
 struct qed_iscsi_stats *VAR_10;
 struct nvm_iscsi_block *VAR_11 = ((void*)0);
 u32 VAR_12 = 0, VAR_13 = 0;
 struct qedi_ctx *VAR_14 = VAR_7;
 int VAR_15 = 0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_0);
 if (!VAR_10) {
  FUNC_0(&VAR_14->dbg_ctx,
    "Could not allocate memory for fw_iscsi_stats.\n");
  goto exit_get_data;
 }

 FUNC_4(&VAR_14->stats_lock);

 VAR_6->get_stats(VAR_14->cdev, VAR_10);
 FUNC_5(&VAR_14->stats_lock);

 VAR_9->rx_frames_set = 1;
 VAR_9->rx_frames = VAR_10->iscsi_rx_packet_cnt;
 VAR_9->rx_bytes_set = 1;
 VAR_9->rx_bytes = VAR_10->iscsi_rx_bytes_cnt;
 VAR_9->tx_frames_set = 1;
 VAR_9->tx_frames = VAR_10->iscsi_tx_packet_cnt;
 VAR_9->tx_bytes_set = 1;
 VAR_9->tx_bytes = VAR_10->iscsi_tx_bytes_cnt;
 VAR_9->frame_size_set = 1;
 VAR_9->frame_size = VAR_14->ll2_mtu;
 VAR_11 = FUNC_7(VAR_14);
 if (VAR_11) {
  VAR_12 = !!(VAR_11->generic.ctrl_flags &
        VAR_1);
  VAR_13 = !!(VAR_11->generic.ctrl_flags &
         VAR_2);

  VAR_9->auth_method_set = (VAR_12 || VAR_13) ? 1 : 0;
  VAR_9->auth_method = 1;
  if (VAR_12)
   VAR_9->auth_method = 2;
  if (VAR_13)
   VAR_9->auth_method = 3;

  VAR_9->tx_desc_size_set = 1;
  VAR_9->tx_desc_size = VAR_5;
  VAR_9->rx_desc_size_set = 1;
  VAR_9->rx_desc_size = VAR_3;


  VAR_15 = FUNC_6(VAR_14, VAR_9, VAR_11);
  if (VAR_15)
   FUNC_1(&VAR_14->dbg_ctx, VAR_4,
      "Boot target not set");
 }

 FUNC_2(VAR_10);
exit_get_data:
 return;
}
