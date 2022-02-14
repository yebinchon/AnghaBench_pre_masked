
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {scalar_t__ orig_offset; scalar_t__ xfer_len; scalar_t__ offset; int pdu_count; int pdu_start; int status; scalar_t__ next_burst_len; scalar_t__ data_sn; } ;
struct iscsi_pdu {scalar_t__ status; scalar_t__ offset; scalar_t__ length; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ write_data_done; scalar_t__ seq_end_offset; scalar_t__ seq_start_offset; int pdu_count; scalar_t__ first_burst_len; struct iscsi_pdu* pdu_list; scalar_t__ immediate_data; int next_burst_len; int unsolicited_data; scalar_t__ data_sn; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct iscsi_seq* FUNC_0 (struct iscsi_cmd*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(
 struct iscsi_cmd *VAR_3,
 u32 VAR_4,
 u32 VAR_5,
 u32 *VAR_6,
 u32 *VAR_7)
{
 int VAR_8;
 struct iscsi_conn *VAR_9 = VAR_3->conn;
 struct iscsi_pdu *VAR_10 = ((void*)0);

 if (VAR_9->sess->sess_ops->DataSequenceInOrder) {
  VAR_3->data_sn = 0;

  if (VAR_9->sess->sess_ops->DataPDUInOrder) {
   *VAR_6 = VAR_3->write_data_done;
   *VAR_7 = (VAR_3->seq_end_offset -
     VAR_3->write_data_done);
   return 0;
  }

  *VAR_6 = VAR_3->seq_start_offset;
  *VAR_7 = (VAR_3->seq_end_offset - VAR_3->seq_start_offset);

  for (VAR_8 = 0; VAR_8 < VAR_3->pdu_count; VAR_8++) {
   VAR_10 = &VAR_3->pdu_list[VAR_8];

   if (VAR_10->status != VAR_2)
    continue;

   if ((VAR_10->offset >= VAR_3->seq_start_offset) &&
      ((VAR_10->offset + VAR_10->length) <=
        VAR_3->seq_end_offset)) {
    if (!VAR_3->unsolicited_data)
     VAR_3->next_burst_len -= VAR_10->length;
    else
     VAR_3->first_burst_len -= VAR_10->length;

    VAR_3->write_data_done -= VAR_10->length;
    VAR_10->status = VAR_1;
   }
  }
 } else {
  struct iscsi_seq *VAR_11 = ((void*)0);

  VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (!VAR_11)
   return -1;

  *VAR_6 = VAR_11->orig_offset;
  *VAR_7 = VAR_11->xfer_len;

  VAR_3->write_data_done -= (VAR_11->offset - VAR_11->orig_offset);
  if (VAR_3->immediate_data)
   VAR_3->first_burst_len = VAR_3->write_data_done;

  VAR_11->data_sn = 0;
  VAR_11->offset = VAR_11->orig_offset;
  VAR_11->next_burst_len = 0;
  VAR_11->status = VAR_0;

  if (VAR_9->sess->sess_ops->DataPDUInOrder)
   return 0;

  for (VAR_8 = 0; VAR_8 < VAR_11->pdu_count; VAR_8++) {
   VAR_10 = &VAR_3->pdu_list[VAR_8+VAR_11->pdu_start];

   if (VAR_10->status != VAR_2)
    continue;

   VAR_10->status = VAR_1;
  }
 }

 return 0;
}
