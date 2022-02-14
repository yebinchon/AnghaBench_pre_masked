
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ptr; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__ SCp; } ;
struct iscsi_task {int state; struct scsi_cmnd* sc; int itt; struct iscsi_conn* conn; } ;
struct TYPE_5__ {int queue; } ;
struct iscsi_session {TYPE_2__ cmdpool; TYPE_1__* tt; } ;
struct iscsi_conn {struct iscsi_task* login_task; struct iscsi_session* session; } ;
struct TYPE_4__ {int (* cleanup_task ) (struct iscsi_task*) ;} ;


 int FUNC_0 (struct iscsi_session*,char*,int ,int,struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct iscsi_task *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_2->conn;
 struct iscsi_session *VAR_4 = VAR_3->session;
 struct scsi_cmnd *VAR_5 = VAR_2->sc;
 int VAR_6 = VAR_2->state;

 FUNC_0(VAR_4, "freeing task itt 0x%x state %d sc %p\n",
     VAR_2->itt, VAR_2->state, VAR_2->sc);

 VAR_4->tt->cleanup_task(VAR_2);
 VAR_2->state = VAR_0;
 VAR_2->sc = ((void*)0);



 if (VAR_3->login_task == VAR_2)
  return;

 FUNC_1(&VAR_4->cmdpool.queue, (void*)&VAR_2, sizeof(void*));

 if (VAR_5) {

  VAR_5->SCp.ptr = ((void*)0);




  if (VAR_6 != VAR_1)
   VAR_5->scsi_done(VAR_5);
 }
}
