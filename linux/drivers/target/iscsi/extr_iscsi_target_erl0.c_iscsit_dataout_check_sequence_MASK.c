
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {scalar_t__ status; scalar_t__ next_burst_len; scalar_t__ xfer_len; } ;
struct iscsi_data {int flags; int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct TYPE_6__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ seq_start_offset; scalar_t__ seq_end_offset; scalar_t__ next_burst_len; scalar_t__ write_data_done; int init_task_tag; TYPE_3__ se_cmd; struct iscsi_seq* seq_ptr; struct iscsi_conn* conn; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ MaxBurstLength; scalar_t__ DataSequenceInOrder; int DataPDUInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*,scalar_t__,int) ;
 struct iscsi_seq* FUNC_2 (struct iscsi_cmd*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_5,
 unsigned char *VAR_6)
{
 u32 VAR_7;
 struct iscsi_conn *VAR_8 = VAR_5->conn;
 struct iscsi_seq *VAR_9 = ((void*)0);
 struct iscsi_data *VAR_10 = (struct iscsi_data *) VAR_6;
 u32 VAR_11 = FUNC_3(VAR_10->dlength);
 if (VAR_8->sess->sess_ops->DataSequenceInOrder) {





  if ((FUNC_0(VAR_10->offset) < VAR_5->seq_start_offset) ||
     ((FUNC_0(VAR_10->offset) + VAR_11) > VAR_5->seq_end_offset)) {
   FUNC_4("Command ITT: 0x%08x with Offset: %u,"
   " Length: %u outside of Sequence %u:%u while"
   " DataSequenceInOrder=Yes.\n", VAR_5->init_task_tag,
   FUNC_0(VAR_10->offset), VAR_11, VAR_5->seq_start_offset,
    VAR_5->seq_end_offset);

   if (FUNC_1(VAR_8, VAR_11, 1) < 0)
    return VAR_0;
   return VAR_3;
  }

  VAR_7 = (VAR_5->next_burst_len + VAR_11);
 } else {
  VAR_9 = FUNC_2(VAR_5, FUNC_0(VAR_10->offset),
         VAR_11);
  if (!VAR_9)
   return VAR_0;



  VAR_5->seq_ptr = VAR_9;

  if (VAR_9->status == VAR_2) {
   if (FUNC_1(VAR_8, VAR_11, 1) < 0)
    return VAR_0;
   return VAR_3;
  }

  VAR_7 = (VAR_9->next_burst_len + VAR_11);
 }

 if (VAR_7 > VAR_8->sess->sess_ops->MaxBurstLength) {
  FUNC_4("Command ITT: 0x%08x, NextBurstLength: %u and"
   " Length: %u exceeds MaxBurstLength: %u. protocol"
   " error.\n", VAR_5->init_task_tag,
   (VAR_7 - VAR_11),
   VAR_11, VAR_8->sess->sess_ops->MaxBurstLength);
  return VAR_0;
 }





 if (VAR_10->flags & VAR_4) {





  if (!VAR_8->sess->sess_ops->DataPDUInOrder)
   goto out;

  if (VAR_8->sess->sess_ops->DataSequenceInOrder) {
   if ((VAR_7 <
        VAR_8->sess->sess_ops->MaxBurstLength) &&
      ((VAR_5->write_data_done + VAR_11) <
        VAR_5->se_cmd.data_length)) {
    FUNC_4("Command ITT: 0x%08x set ISCSI_FLAG_CMD_FINAL"
    " before end of DataOUT sequence, protocol"
    " error.\n", VAR_5->init_task_tag);
    return VAR_0;
   }
  } else {
   if (VAR_7 < VAR_9->xfer_len) {
    FUNC_4("Command ITT: 0x%08x set ISCSI_FLAG_CMD_FINAL"
    " before end of DataOUT sequence, protocol"
    " error.\n", VAR_5->init_task_tag);
    return VAR_0;
   }
  }
 } else {
  if (VAR_8->sess->sess_ops->DataSequenceInOrder) {
   if (VAR_7 ==
     VAR_8->sess->sess_ops->MaxBurstLength) {
    FUNC_4("Command ITT: 0x%08x reached"
    " MaxBurstLength: %u, but ISCSI_FLAG_CMD_FINAL is"
    " not set, protocol error.", VAR_5->init_task_tag,
     VAR_8->sess->sess_ops->MaxBurstLength);
    return VAR_0;
   }
   if ((VAR_5->write_data_done + VAR_11) ==
     VAR_5->se_cmd.data_length) {
    FUNC_4("Command ITT: 0x%08x reached"
    " last DataOUT PDU in sequence but ISCSI_FLAG_"
    "CMD_FINAL is not set, protocol error.\n",
     VAR_5->init_task_tag);
    return VAR_0;
   }
  } else {
   if (VAR_7 == VAR_9->xfer_len) {
    FUNC_4("Command ITT: 0x%08x reached"
    " last DataOUT PDU in sequence but ISCSI_FLAG_"
    "CMD_FINAL is not set, protocol error.\n",
     VAR_5->init_task_tag);
    return VAR_0;
   }
  }
 }

out:
 return VAR_1;
}
