
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_seq {int offset; int xfer_len; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct TYPE_6__ {int data_length; } ;
struct iscsi_cmd {int cmd_flags; int r2t_offset; scalar_t__ outstanding_r2ts; int next_burst_len; scalar_t__ seq_send_order; scalar_t__ seq_count; int r2t_lock; TYPE_3__ se_cmd; int write_data_done; } ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ MaxOutstandingR2T; int MaxBurstLength; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*,int,int,int ,int ) ;
 struct iscsi_seq* FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(
 struct iscsi_conn *VAR_1,
 struct iscsi_cmd *VAR_2,
 bool VAR_3)
{
 int VAR_4 = 1;
 u32 VAR_5 = 0, VAR_6 = 0;

 FUNC_3(&VAR_2->r2t_lock);
 if (VAR_2->cmd_flags & VAR_0) {
  FUNC_4(&VAR_2->r2t_lock);
  return 0;
 }

 if (VAR_1->sess->sess_ops->DataSequenceInOrder &&
     !VAR_3)
  VAR_2->r2t_offset = FUNC_2(VAR_2->r2t_offset, VAR_2->write_data_done);

 while (VAR_2->outstanding_r2ts < VAR_1->sess->sess_ops->MaxOutstandingR2T) {
  if (VAR_1->sess->sess_ops->DataSequenceInOrder) {
   VAR_5 = VAR_2->r2t_offset;

   if (VAR_4 && VAR_3) {
    int VAR_7 = VAR_5 +
     VAR_1->sess->sess_ops->MaxBurstLength -
     VAR_2->next_burst_len;

    if (VAR_7 > VAR_2->se_cmd.data_length)
     VAR_6 = VAR_2->se_cmd.data_length - VAR_5;
    else
     VAR_6 =
      VAR_1->sess->sess_ops->MaxBurstLength -
      VAR_2->next_burst_len;
   } else {
    int VAR_8 = VAR_5 +
     VAR_1->sess->sess_ops->MaxBurstLength;

    if (VAR_8 > VAR_2->se_cmd.data_length)
     VAR_6 = VAR_2->se_cmd.data_length - VAR_5;
    else
     VAR_6 = VAR_1->sess->sess_ops->MaxBurstLength;
   }

   if ((s32)VAR_6 < 0) {
    VAR_2->cmd_flags |= VAR_0;
    break;
   }

   VAR_2->r2t_offset += VAR_6;

   if (VAR_2->r2t_offset == VAR_2->se_cmd.data_length)
    VAR_2->cmd_flags |= VAR_0;
  } else {
   struct iscsi_seq *VAR_9;

   VAR_9 = FUNC_1(VAR_2);
   if (!VAR_9) {
    FUNC_4(&VAR_2->r2t_lock);
    return -1;
   }

   VAR_5 = VAR_9->offset;
   VAR_6 = VAR_9->xfer_len;

   if (VAR_2->seq_send_order == VAR_2->seq_count)
    VAR_2->cmd_flags |= VAR_0;
  }
  VAR_2->outstanding_r2ts++;
  VAR_4 = 0;

  if (FUNC_0(VAR_2, VAR_5, VAR_6, 0, 0) < 0) {
   FUNC_4(&VAR_2->r2t_lock);
   return -1;
  }

  if (VAR_2->cmd_flags & VAR_0)
   break;
 }
 FUNC_4(&VAR_2->r2t_lock);

 return 0;
}
