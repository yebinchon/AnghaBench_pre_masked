
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_seq {scalar_t__ type; int pdu_count; int pdu_start; int status; scalar_t__ next_burst_len; scalar_t__ orig_offset; scalar_t__ offset; scalar_t__ data_sn; } ;
struct iscsi_pdu {scalar_t__ status; scalar_t__ offset; scalar_t__ length; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ first_burst_len; scalar_t__ seq_start_offset; int pdu_count; scalar_t__ seq_end_offset; int seq_count; struct iscsi_pdu* pdu_list; int write_data_done; struct iscsi_seq* seq_list; scalar_t__ immediate_data; int r2t_offset; scalar_t__ data_sn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(
 struct iscsi_cmd *VAR_4,
 struct iscsi_conn *VAR_5)
{
 int VAR_6, VAR_7;
 struct iscsi_pdu *VAR_8 = ((void*)0);
 struct iscsi_seq *VAR_9 = ((void*)0);

 if (VAR_5->sess->sess_ops->DataSequenceInOrder) {
  VAR_4->data_sn = 0;

  if (VAR_4->immediate_data)
   VAR_4->r2t_offset += (VAR_4->first_burst_len -
    VAR_4->seq_start_offset);

  if (VAR_5->sess->sess_ops->DataPDUInOrder) {
   VAR_4->write_data_done -= (VAR_4->immediate_data) ?
      (VAR_4->first_burst_len -
       VAR_4->seq_start_offset) :
       VAR_4->first_burst_len;
   VAR_4->first_burst_len = 0;
   return;
  }

  for (VAR_6 = 0; VAR_6 < VAR_4->pdu_count; VAR_6++) {
   VAR_8 = &VAR_4->pdu_list[VAR_6];

   if (VAR_8->status != VAR_2)
    continue;

   if ((VAR_8->offset >= VAR_4->seq_start_offset) &&
      ((VAR_8->offset + VAR_8->length) <=
        VAR_4->seq_end_offset)) {
    VAR_4->first_burst_len -= VAR_8->length;
    VAR_4->write_data_done -= VAR_8->length;
    VAR_8->status = VAR_1;
   }
  }
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_4->seq_count; VAR_6++) {
   VAR_9 = &VAR_4->seq_list[VAR_6];

   if (VAR_9->type != VAR_3)
    continue;

   VAR_4->write_data_done -=
     (VAR_9->offset - VAR_9->orig_offset);
   VAR_4->first_burst_len = 0;
   VAR_9->data_sn = 0;
   VAR_9->offset = VAR_9->orig_offset;
   VAR_9->next_burst_len = 0;
   VAR_9->status = VAR_0;

   if (VAR_5->sess->sess_ops->DataPDUInOrder)
    continue;

   for (VAR_7 = 0; VAR_7 < VAR_9->pdu_count; VAR_7++) {
    VAR_8 = &VAR_4->pdu_list[VAR_7+VAR_9->pdu_start];

    if (VAR_8->status != VAR_2)
     continue;

    VAR_8->status = VAR_1;
   }
  }
 }
}
