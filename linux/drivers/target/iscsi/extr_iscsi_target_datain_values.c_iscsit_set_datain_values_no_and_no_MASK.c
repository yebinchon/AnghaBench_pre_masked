
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {int sent; scalar_t__ next_burst_len; scalar_t__ pdu_send_order; scalar_t__ pdu_count; int last_datasn; int first_datasn; } ;
struct iscsi_pdu {int flags; scalar_t__ length; int data_sn; int offset; } ;
struct iscsi_datain_req {scalar_t__ recovery; scalar_t__ read_data_done; scalar_t__ seq_send_order; scalar_t__ data_sn; scalar_t__ runlength; scalar_t__ begrun; void* dr_complete; scalar_t__ generate_recovery_values; } ;
struct iscsi_datain {int flags; scalar_t__ length; int data_sn; int offset; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct TYPE_6__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ read_data_done; scalar_t__ seq_send_order; int data_sn; TYPE_3__ se_cmd; int init_task_tag; struct iscsi_conn* conn; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ ErrorRecoveryLevel; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*,struct iscsi_datain_req*) ;
 struct iscsi_datain_req* FUNC_1 (struct iscsi_cmd*) ;
 struct iscsi_pdu* FUNC_2 (struct iscsi_cmd*,struct iscsi_seq*) ;
 struct iscsi_seq* FUNC_3 (struct iscsi_cmd*,scalar_t__) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct iscsi_datain_req *FUNC_5(
 struct iscsi_cmd *VAR_7,
 struct iscsi_datain *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 struct iscsi_conn *VAR_12 = VAR_7->conn;
 struct iscsi_datain_req *VAR_13;
 struct iscsi_pdu *VAR_14;
 struct iscsi_seq *VAR_15 = ((void*)0);

 VAR_13 = FUNC_1(VAR_7);
 if (!VAR_13)
  return ((void*)0);

 if (VAR_13->recovery && VAR_13->generate_recovery_values) {
  if (FUNC_0(
     VAR_7, VAR_13) < 0)
   return ((void*)0);

  VAR_13->generate_recovery_values = 0;
 }

 VAR_9 = (!VAR_13->recovery) ?
   VAR_7->read_data_done : VAR_13->read_data_done;
 VAR_11 = (!VAR_13->recovery) ?
   VAR_7->seq_send_order : VAR_13->seq_send_order;

 VAR_10 = (VAR_7->se_cmd.data_length - VAR_9);
 if (!VAR_10) {
  FUNC_4("ITT: 0x%08x read_data_left is zero!\n",
    VAR_7->init_task_tag);
  return ((void*)0);
 }

 VAR_15 = FUNC_3(VAR_7, VAR_11);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->sent = 1;

 if (!VAR_13->recovery && !VAR_15->next_burst_len)
  VAR_15->first_datasn = VAR_7->data_sn;

 VAR_14 = FUNC_2(VAR_7, VAR_15);
 if (!VAR_14)
  return ((void*)0);

 if (VAR_15->pdu_send_order == VAR_15->pdu_count) {
  VAR_14->flags |= VAR_4;
  if (VAR_12->sess->sess_ops->ErrorRecoveryLevel > 0)
   VAR_14->flags |= VAR_5;

  VAR_15->next_burst_len = 0;
  VAR_11++;
 } else
  VAR_15->next_burst_len += VAR_14->length;

 if ((VAR_9 + VAR_14->length) == VAR_7->se_cmd.data_length)
  VAR_14->flags |= VAR_6;

 VAR_14->data_sn = (!VAR_13->recovery) ? VAR_7->data_sn++ : VAR_13->data_sn++;
 if (!VAR_13->recovery) {
  VAR_7->seq_send_order = VAR_11;
  VAR_7->read_data_done += VAR_14->length;
 } else {
  VAR_13->seq_send_order = VAR_11;
  VAR_13->read_data_done += VAR_14->length;
 }

 VAR_8->flags = VAR_14->flags;
 VAR_8->length = VAR_14->length;
 VAR_8->offset = VAR_14->offset;
 VAR_8->data_sn = VAR_14->data_sn;

 if (!VAR_13->recovery) {
  if (VAR_8->flags & VAR_4)
   VAR_15->last_datasn = VAR_8->data_sn;
  if (VAR_8->flags & VAR_6)
   VAR_13->dr_complete = VAR_1;

  return VAR_13;
 }

 if (!VAR_13->runlength) {
  if (VAR_8->flags & VAR_6) {
   VAR_13->dr_complete =
       (VAR_13->recovery == VAR_3) ?
    VAR_2 :
    VAR_0;
  }
 } else {
  if ((VAR_13->begrun + VAR_13->runlength) == VAR_13->data_sn) {
   VAR_13->dr_complete =
       (VAR_13->recovery == VAR_3) ?
    VAR_2 :
    VAR_0;
  }
 }

 return VAR_13;
}
