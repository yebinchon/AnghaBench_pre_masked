
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_seq {scalar_t__ data_sn; } ;
struct iscsi_data {int datasn; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ data_sn; int init_task_tag; struct iscsi_seq* seq_ptr; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_3,
 unsigned char *VAR_4)
{
 u32 VAR_5 = 0;
 struct iscsi_conn *VAR_6 = VAR_3->conn;
 struct iscsi_data *VAR_7 = (struct iscsi_data *) VAR_4;
 u32 VAR_8 = FUNC_2(VAR_7->dlength);
 if (VAR_6->sess->sess_ops->DataSequenceInOrder)
  VAR_5 = VAR_3->data_sn;
 else {
  struct iscsi_seq *VAR_9 = VAR_3->seq_ptr;
  VAR_5 = VAR_9->data_sn;
 }

 if (FUNC_0(VAR_7->datasn) > VAR_5) {
  FUNC_3("Command ITT: 0x%08x, received DataSN: 0x%08x"
   " higher than expected 0x%08x.\n", VAR_3->init_task_tag,
    FUNC_0(VAR_7->datasn), VAR_5);
  goto recover;
 } else if (FUNC_0(VAR_7->datasn) < VAR_5) {
  FUNC_3("Command ITT: 0x%08x, received DataSN: 0x%08x"
   " lower than expected 0x%08x, discarding payload.\n",
   VAR_3->init_task_tag, FUNC_0(VAR_7->datasn), VAR_5);
  goto dump;
 }

 return VAR_1;

recover:
 if (!VAR_6->sess->sess_ops->ErrorRecoveryLevel) {
  FUNC_3("Unable to perform within-command recovery"
    " while ERL=0.\n");
  return VAR_0;
 }
dump:
 if (FUNC_1(VAR_6, VAR_8, 1) < 0)
  return VAR_0;

 return VAR_2;
}
