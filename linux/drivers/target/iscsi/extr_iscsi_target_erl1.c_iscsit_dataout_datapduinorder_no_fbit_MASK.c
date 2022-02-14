
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_seq {size_t pdu_start; int pdu_count; } ;
struct iscsi_pdu {scalar_t__ seq_no; int length; scalar_t__ status; int offset; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {int pdu_count; struct iscsi_pdu* pdu_list; struct iscsi_seq* seq_ptr; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*,int,int) ;

int FUNC_1(
 struct iscsi_cmd *VAR_5,
 struct iscsi_pdu *VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 struct iscsi_conn *VAR_14 = VAR_5->conn;
 struct iscsi_pdu *VAR_15 = ((void*)0);





 if (VAR_14->sess->sess_ops->DataSequenceInOrder) {
  for (VAR_7 = 0; VAR_7 < VAR_5->pdu_count; VAR_7++) {
   if (VAR_5->pdu_list[VAR_7].seq_no == VAR_6->seq_no) {
    if (!VAR_15)
     VAR_15 = &VAR_5->pdu_list[VAR_7];
    VAR_13 += VAR_5->pdu_list[VAR_7].length;
    VAR_12++;
   } else if (VAR_12)
    break;
  }
 } else {
  struct iscsi_seq *VAR_16 = VAR_5->seq_ptr;

  VAR_15 = &VAR_5->pdu_list[VAR_16->pdu_start];
  VAR_12 = VAR_16->pdu_count;
 }

 if (!VAR_15 || !VAR_12)
  return VAR_0;





 for (VAR_7 = 0; VAR_7 < VAR_12; VAR_7++) {
  if (VAR_15[VAR_7].status == VAR_4) {
   if (!VAR_8)
    continue;

   if (FUNC_0(VAR_5, VAR_11, VAR_10) < 0)
    return VAR_0;

   VAR_8 = VAR_10 = VAR_11 = 0;
   continue;
  }
  VAR_9 = 1;

  if (VAR_15[VAR_7].status != VAR_3)
   continue;

  if (!VAR_11)
   VAR_11 = VAR_15[VAR_7].offset;
  VAR_10 += VAR_15[VAR_7].length;

  VAR_8 = 1;
 }

 if (VAR_8)
  if (FUNC_0(VAR_5, VAR_11, VAR_10) < 0)
   return VAR_0;

 return (!VAR_9) ? VAR_1 : VAR_2;
}
