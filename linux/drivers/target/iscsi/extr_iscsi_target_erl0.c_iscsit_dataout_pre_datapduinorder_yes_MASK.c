
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_seq {scalar_t__ offset; } ;
struct iscsi_data {int offset; int dlength; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ write_data_done; int init_task_tag; struct iscsi_seq* seq_ptr; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; scalar_t__ DataSequenceInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*,int ,int) ;
 int FUNC_2 (struct iscsi_cmd*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_3,
 unsigned char *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 struct iscsi_conn *VAR_7 = VAR_3->conn;
 struct iscsi_data *VAR_8 = (struct iscsi_data *) VAR_4;
 u32 VAR_9 = FUNC_3(VAR_8->dlength);
 if (VAR_7->sess->sess_ops->DataSequenceInOrder) {
  if (FUNC_0(VAR_8->offset) != VAR_3->write_data_done) {
   FUNC_4("Command ITT: 0x%08x, received offset"
   " %u different than expected %u.\n", VAR_3->init_task_tag,
    FUNC_0(VAR_8->offset), VAR_3->write_data_done);
   VAR_6 = 1;
   goto recover;
  }
 } else {
  struct iscsi_seq *VAR_10 = VAR_3->seq_ptr;

  if (FUNC_0(VAR_8->offset) > VAR_10->offset) {
   FUNC_4("Command ITT: 0x%08x, received offset"
   " %u greater than expected %u.\n", VAR_3->init_task_tag,
    FUNC_0(VAR_8->offset), VAR_10->offset);
   VAR_6 = 1;
   goto recover;
  } else if (FUNC_0(VAR_8->offset) < VAR_10->offset) {
   FUNC_4("Command ITT: 0x%08x, received offset"
   " %u less than expected %u, discarding payload.\n",
    VAR_3->init_task_tag, FUNC_0(VAR_8->offset),
    VAR_10->offset);
   VAR_5 = 1;
   goto dump;
  }
 }

 return VAR_1;

recover:
 if (!VAR_7->sess->sess_ops->ErrorRecoveryLevel) {
  FUNC_4("Unable to perform within-command recovery"
    " while ERL=0.\n");
  return VAR_0;
 }
dump:
 if (FUNC_1(VAR_7, VAR_9, 1) < 0)
  return VAR_0;

 return (VAR_6) ? FUNC_2(VAR_3,
  FUNC_0(VAR_8->offset), VAR_9) :
        (VAR_5) ? VAR_2 : VAR_1;
}
