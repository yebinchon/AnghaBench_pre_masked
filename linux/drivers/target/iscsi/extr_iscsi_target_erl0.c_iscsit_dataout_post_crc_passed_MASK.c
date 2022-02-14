
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {scalar_t__ next_burst_len; scalar_t__ xfer_len; void* status; int offset; int data_sn; } ;
struct iscsi_data {int flags; int datasn; int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct TYPE_6__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ first_burst_len; scalar_t__ next_burst_len; scalar_t__ write_data_done; TYPE_3__ se_cmd; scalar_t__ data_sn; struct iscsi_seq* seq_ptr; scalar_t__ unsolicited_data; struct iscsi_conn* conn; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ FirstBurstLength; scalar_t__ MaxBurstLength; scalar_t__ DataSequenceInOrder; int DataPDUInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_cmd*,int ,int) ;
 scalar_t__ FUNC_2 (struct iscsi_cmd*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_6,
 unsigned char *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct iscsi_conn *VAR_10 = VAR_6->conn;
 struct iscsi_seq *VAR_11 = ((void*)0);
 struct iscsi_data *VAR_12 = (struct iscsi_data *) VAR_7;
 u32 VAR_13 = FUNC_3(VAR_12->dlength);

 if (VAR_6->unsolicited_data) {
  if ((VAR_6->first_burst_len + VAR_13) ==
       VAR_10->sess->sess_ops->FirstBurstLength) {
   if (FUNC_2(VAR_6, FUNC_0(VAR_12->offset),
     VAR_13) < 0)
    return VAR_0;
   VAR_9 = 1;
  }

  if (!VAR_10->sess->sess_ops->DataPDUInOrder) {
   VAR_8 = FUNC_1(VAR_6,
    FUNC_0(VAR_12->datasn),
    (VAR_12->flags & VAR_5));
   if (VAR_8 == VAR_0)
    return VAR_8;
  }

  VAR_6->first_burst_len += VAR_13;

  if (VAR_10->sess->sess_ops->DataSequenceInOrder)
   VAR_6->data_sn++;
  else {
   VAR_11 = VAR_6->seq_ptr;
   VAR_11->data_sn++;
   VAR_11->offset += VAR_13;
  }

  if (VAR_9) {
   if (VAR_11)
    VAR_11->status = VAR_4;
   VAR_6->first_burst_len = 0;
   VAR_6->unsolicited_data = 0;
  }
 } else {
  if (VAR_10->sess->sess_ops->DataSequenceInOrder) {
   if ((VAR_6->next_burst_len + VAR_13) ==
        VAR_10->sess->sess_ops->MaxBurstLength) {
    if (FUNC_2(VAR_6,
      FUNC_0(VAR_12->offset),
      VAR_13) < 0)
     return VAR_0;
    VAR_9 = 1;
   }

   if (!VAR_10->sess->sess_ops->DataPDUInOrder) {
    VAR_8 = FUNC_1(
      VAR_6, FUNC_0(VAR_12->datasn),
      (VAR_12->flags & VAR_5));
    if (VAR_8 == VAR_0)
     return VAR_8;
   }

   VAR_6->next_burst_len += VAR_13;
   VAR_6->data_sn++;

   if (VAR_9)
    VAR_6->next_burst_len = 0;
  } else {
   VAR_11 = VAR_6->seq_ptr;

   if ((VAR_11->next_burst_len + VAR_13) ==
        VAR_11->xfer_len) {
    if (FUNC_2(VAR_6,
      FUNC_0(VAR_12->offset),
      VAR_13) < 0)
     return VAR_0;
    VAR_9 = 1;
   }

   if (!VAR_10->sess->sess_ops->DataPDUInOrder) {
    VAR_8 = FUNC_1(
      VAR_6, FUNC_0(VAR_12->datasn),
      (VAR_12->flags & VAR_5));
    if (VAR_8 == VAR_0)
     return VAR_8;
   }

   VAR_11->data_sn++;
   VAR_11->offset += VAR_13;
   VAR_11->next_burst_len += VAR_13;

   if (VAR_9) {
    VAR_11->next_burst_len = 0;
    VAR_11->status = VAR_4;
   }
  }
 }

 if (VAR_9 && VAR_10->sess->sess_ops->DataSequenceInOrder)
  VAR_6->data_sn = 0;

 VAR_6->write_data_done += VAR_13;

 if (VAR_6->write_data_done == VAR_6->se_cmd.data_length)
  return VAR_3;
 else if (VAR_9)
  return VAR_2;
 else
  return VAR_1;
}
