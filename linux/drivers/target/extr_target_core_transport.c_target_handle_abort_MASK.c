
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_cmd {int transport_state; int se_cmd_flags; int tag; int* t_task_cdb; int cmd_kref; TYPE_2__* se_tfo; TYPE_1__* se_tmr_req; int se_dev; int scsi_status; } ;
struct TYPE_4__ {int (* queue_status ) (struct se_cmd*) ;int (* aborted_task ) (struct se_cmd*) ;int (* queue_tm_rsp ) (struct se_cmd*) ;} ;
struct TYPE_3__ {int response; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 scalar_t__ FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct se_cmd*) ;
 int FUNC_9 (struct se_cmd*,int ,int,int) ;

__attribute__((used)) static void FUNC_10(struct se_cmd *VAR_5)
{
 bool VAR_6 = VAR_5->transport_state & VAR_0;
 bool VAR_7 = VAR_5->se_cmd_flags & VAR_2;
 int VAR_8;

 FUNC_2("tag %#llx: send_abort_response = %d\n", VAR_5->tag, VAR_6);

 if (VAR_6) {
  if (!(VAR_5->se_cmd_flags & VAR_3)) {
   VAR_5->scsi_status = VAR_1;
   FUNC_2("Setting SAM_STAT_TASK_ABORTED status for CDB: 0x%02x, ITT: 0x%08llx\n",
     VAR_5->t_task_cdb[0], VAR_5->tag);
   FUNC_7(VAR_5);
   VAR_8 = VAR_5->se_tfo->queue_status(VAR_5);
   if (VAR_8) {
    FUNC_9(VAR_5, VAR_5->se_dev,
           VAR_8, 0);
    return;
   }
  } else {
   VAR_5->se_tmr_req->response = VAR_4;
   VAR_5->se_tfo->queue_tm_rsp(VAR_5);
  }
 } else {




  VAR_5->se_tfo->aborted_task(VAR_5);
  if (VAR_7)
   FUNC_0(FUNC_6(VAR_5) != 0);





 }

 FUNC_0(FUNC_1(&VAR_5->cmd_kref) == 0);

 FUNC_8(VAR_5);
}
