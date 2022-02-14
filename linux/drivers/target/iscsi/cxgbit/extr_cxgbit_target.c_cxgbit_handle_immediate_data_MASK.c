
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct skb_shared_info {int * frags; } ;
struct scatterlist {int dummy; } ;
struct iscsi_scsi_req {int dummy; } ;
struct iscsi_conn {TYPE_2__* sess; struct cxgbit_sock* context; } ;
struct TYPE_6__ {int se_cmd_flags; int t_data_nents; scalar_t__ data_length; struct scatterlist* t_data_sg; } ;
struct iscsi_cmd {scalar_t__ write_data_done; int istate_lock; int i_state; int cmd_flags; TYPE_3__ se_cmd; struct iscsi_conn* conn; } ;
struct cxgbit_sock {int skb; } ;
struct cxgbit_lro_pdu_cb {int flags; size_t dfrag_idx; scalar_t__ dlen; } ;
struct cxgbit_cmd {int release; struct scatterlist sg; } ;
typedef int skb_frag_t ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {int ErrorRecoveryLevel; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cxgbit_lro_pdu_cb* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_3 (int ) ;
 struct cxgbit_cmd* FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct scatterlist*,int) ;
 int FUNC_9 (struct scatterlist*,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct skb_shared_info* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(struct iscsi_cmd *VAR_9, struct iscsi_scsi_req *VAR_10,
        u32 VAR_11)
{
 struct iscsi_conn *VAR_12 = VAR_9->conn;
 struct cxgbit_sock *VAR_13 = VAR_12->context;
 struct cxgbit_lro_pdu_cb *VAR_14 = FUNC_1(VAR_13->skb);

 if (VAR_14->flags & VAR_7) {
  FUNC_7("ImmediateData CRC32C DataDigest error\n");
  if (!VAR_12->sess->sess_ops->ErrorRecoveryLevel) {
   FUNC_7("Unable to recover from"
          " Immediate Data digest failure while"
          " in ERL=0.\n");
   FUNC_5(VAR_9, VAR_4,
       (unsigned char *)VAR_10);
   return VAR_1;
  }

  FUNC_5(VAR_9, VAR_4,
      (unsigned char *)VAR_10);
  return VAR_2;
 }

 if (VAR_9->se_cmd.se_cmd_flags & VAR_8) {
  struct cxgbit_cmd *VAR_15 = FUNC_4(VAR_9);
  struct skb_shared_info *VAR_16 = FUNC_13(VAR_13->skb);
  skb_frag_t *VAR_17 = &VAR_16->frags[VAR_14->dfrag_idx];

  FUNC_8(&VAR_15->sg, 1);
  FUNC_9(&VAR_15->sg, FUNC_11(VAR_17),
    FUNC_12(VAR_17), FUNC_10(VAR_17));
  FUNC_3(FUNC_11(VAR_17));

  VAR_9->se_cmd.t_data_sg = &VAR_15->sg;
  VAR_9->se_cmd.t_data_nents = 1;

  VAR_15->release = 1;
 } else {
  struct scatterlist *VAR_18 = &VAR_9->se_cmd.t_data_sg[0];
  u32 VAR_19 = FUNC_6(1UL, FUNC_0(VAR_14->dlen, VAR_6));

  FUNC_2(VAR_13->skb, VAR_18, VAR_19, 0);
 }

 VAR_9->write_data_done += VAR_14->dlen;

 if (VAR_9->write_data_done == VAR_9->se_cmd.data_length) {
  FUNC_14(&VAR_9->istate_lock);
  VAR_9->cmd_flags |= VAR_0;
  VAR_9->i_state = VAR_5;
  FUNC_15(&VAR_9->istate_lock);
 }

 return VAR_3;
}
