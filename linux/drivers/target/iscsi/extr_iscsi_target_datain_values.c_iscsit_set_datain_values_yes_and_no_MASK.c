
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_pdu {scalar_t__ length; int flags; int data_sn; int offset; } ;
struct iscsi_datain_req {scalar_t__ recovery; scalar_t__ next_burst_len; scalar_t__ read_data_done; scalar_t__ data_sn; scalar_t__ runlength; scalar_t__ begrun; void* dr_complete; scalar_t__ generate_recovery_values; } ;
struct iscsi_datain {int flags; scalar_t__ length; int data_sn; int offset; } ;
struct iscsi_conn {TYPE_4__* sess; TYPE_2__* conn_ops; } ;
struct TYPE_5__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ next_burst_len; scalar_t__ read_data_done; int data_sn; TYPE_1__ se_cmd; int init_task_tag; struct iscsi_conn* conn; } ;
struct TYPE_8__ {TYPE_3__* sess_ops; } ;
struct TYPE_7__ {scalar_t__ ErrorRecoveryLevel; scalar_t__ MaxBurstLength; } ;
struct TYPE_6__ {scalar_t__ MaxRecvDataSegmentLength; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*,struct iscsi_datain_req*) ;
 struct iscsi_datain_req* FUNC_1 (struct iscsi_cmd*) ;
 struct iscsi_pdu* FUNC_2 (struct iscsi_cmd*,int *) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static struct iscsi_datain_req *FUNC_4(
 struct iscsi_cmd *VAR_7,
 struct iscsi_datain *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 struct iscsi_conn *VAR_12 = VAR_7->conn;
 struct iscsi_datain_req *VAR_13;
 struct iscsi_pdu *VAR_14;

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
   VAR_7->next_burst_len : VAR_13->next_burst_len;
 VAR_10 = (!VAR_13->recovery) ?
   VAR_7->read_data_done : VAR_13->read_data_done;

 VAR_11 = (VAR_7->se_cmd.data_length - VAR_10);
 if (!VAR_11) {
  FUNC_3("ITT: 0x%08x read_data_left is zero!\n",
    VAR_7->init_task_tag);
  return VAR_13;
 }

 VAR_14 = FUNC_2(VAR_7, ((void*)0));
 if (!VAR_14)
  return VAR_13;

 if ((VAR_10 + VAR_14->length) == VAR_7->se_cmd.data_length) {
  VAR_14->flags |= (VAR_4 | VAR_6);
  if (VAR_12->sess->sess_ops->ErrorRecoveryLevel > 0)
   VAR_14->flags |= VAR_5;

  VAR_9 = 0;
 } else {
  if ((VAR_9 + VAR_12->conn_ops->MaxRecvDataSegmentLength) <
       VAR_12->sess->sess_ops->MaxBurstLength)
   VAR_9 += VAR_14->length;
  else {
   VAR_14->flags |= VAR_4;
   if (VAR_12->sess->sess_ops->ErrorRecoveryLevel > 0)
    VAR_14->flags |= VAR_5;

   VAR_9 = 0;
  }
 }

 VAR_14->data_sn = (!VAR_13->recovery) ? VAR_7->data_sn++ : VAR_13->data_sn++;
 if (!VAR_13->recovery) {
  VAR_7->next_burst_len = VAR_9;
  VAR_7->read_data_done += VAR_14->length;
 } else {
  VAR_13->next_burst_len = VAR_9;
  VAR_13->read_data_done += VAR_14->length;
 }

 VAR_8->flags = VAR_14->flags;
 VAR_8->length = VAR_14->length;
 VAR_8->offset = VAR_14->offset;
 VAR_8->data_sn = VAR_14->data_sn;

 if (!VAR_13->recovery) {
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
