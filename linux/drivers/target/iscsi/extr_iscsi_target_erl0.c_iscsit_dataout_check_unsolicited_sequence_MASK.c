
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_data {int flags; int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct TYPE_6__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ seq_start_offset; scalar_t__ seq_end_offset; scalar_t__ init_task_tag; scalar_t__ first_burst_len; TYPE_3__ se_cmd; struct iscsi_conn* conn; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ FirstBurstLength; int DataPDUInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_4,
 unsigned char *VAR_5)
{
 u32 VAR_6;
 struct iscsi_conn *VAR_7 = VAR_4->conn;
 struct iscsi_data *VAR_8 = (struct iscsi_data *) VAR_5;
 u32 VAR_9 = FUNC_1(VAR_8->dlength);


 if ((FUNC_0(VAR_8->offset) < VAR_4->seq_start_offset) ||
    ((FUNC_0(VAR_8->offset) + VAR_9) > VAR_4->seq_end_offset)) {
  FUNC_2("Command ITT: 0x%08x with Offset: %u,"
  " Length: %u outside of Unsolicited Sequence %u:%u while"
  " DataSequenceInOrder=Yes.\n", VAR_4->init_task_tag,
  FUNC_0(VAR_8->offset), VAR_9, VAR_4->seq_start_offset,
   VAR_4->seq_end_offset);
  return VAR_0;
 }

 VAR_6 = (VAR_4->first_burst_len + VAR_9);

 if (VAR_6 > VAR_7->sess->sess_ops->FirstBurstLength) {
  FUNC_2("Total %u bytes exceeds FirstBurstLength: %u"
   " for this Unsolicited DataOut Burst.\n",
   VAR_6, VAR_7->sess->sess_ops->FirstBurstLength);
  FUNC_3(&VAR_4->se_cmd,
    VAR_3, 0);
  return VAR_0;
 }





 if (VAR_8->flags & VAR_2) {





  if (!VAR_7->sess->sess_ops->DataPDUInOrder)
   goto out;

  if ((VAR_6 != VAR_4->se_cmd.data_length) &&
      (VAR_6 != VAR_7->sess->sess_ops->FirstBurstLength)) {
   FUNC_2("Unsolicited non-immediate data"
   " received %u does not equal FirstBurstLength: %u, and"
   " does not equal ExpXferLen %u.\n", VAR_6,
    VAR_7->sess->sess_ops->FirstBurstLength,
    VAR_4->se_cmd.data_length);
   FUNC_3(&VAR_4->se_cmd,
     VAR_3, 0);
   return VAR_0;
  }
 } else {
  if (VAR_6 == VAR_7->sess->sess_ops->FirstBurstLength) {
   FUNC_2("Command ITT: 0x%08x reached"
   " FirstBurstLength: %u, but ISCSI_FLAG_CMD_FINAL is not set. protocol"
    " error.\n", VAR_4->init_task_tag,
    VAR_7->sess->sess_ops->FirstBurstLength);
   return VAR_0;
  }
  if (VAR_6 == VAR_4->se_cmd.data_length) {
   FUNC_2("Command ITT: 0x%08x reached"
   " ExpXferLen: %u, but ISCSI_FLAG_CMD_FINAL is not set. protocol"
   " error.\n", VAR_4->init_task_tag, VAR_4->se_cmd.data_length);
   return VAR_0;
  }
 }

out:
 return VAR_1;
}
