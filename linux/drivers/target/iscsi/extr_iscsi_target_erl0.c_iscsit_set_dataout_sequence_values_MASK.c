
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_conn {TYPE_3__* sess; } ;
struct TYPE_4__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ seq_start_offset; scalar_t__ write_data_done; scalar_t__ seq_end_offset; TYPE_1__ se_cmd; scalar_t__ unsolicited_data; struct iscsi_conn* conn; } ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {scalar_t__ MaxBurstLength; int DataSequenceInOrder; int FirstBurstLength; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

void FUNC_1(
 struct iscsi_cmd *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->conn;




 if (VAR_0->unsolicited_data) {
  VAR_0->seq_start_offset = VAR_0->write_data_done;
  VAR_0->seq_end_offset = FUNC_0(VAR_0->se_cmd.data_length,
     VAR_1->sess->sess_ops->FirstBurstLength);
  return;
 }

 if (!VAR_1->sess->sess_ops->DataSequenceInOrder)
  return;

 if (!VAR_0->seq_start_offset && !VAR_0->seq_end_offset) {
  VAR_0->seq_start_offset = VAR_0->write_data_done;
  VAR_0->seq_end_offset = (VAR_0->se_cmd.data_length >
   VAR_1->sess->sess_ops->MaxBurstLength) ?
   (VAR_0->write_data_done +
   VAR_1->sess->sess_ops->MaxBurstLength) : VAR_0->se_cmd.data_length;
 } else {
  VAR_0->seq_start_offset = VAR_0->seq_end_offset;
  VAR_0->seq_end_offset = ((VAR_0->seq_end_offset +
   VAR_1->sess->sess_ops->MaxBurstLength) >=
   VAR_0->se_cmd.data_length) ? VAR_0->se_cmd.data_length :
   (VAR_0->seq_end_offset +
    VAR_1->sess->sess_ops->MaxBurstLength);
 }
}
