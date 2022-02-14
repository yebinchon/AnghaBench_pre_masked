
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_erp_action {TYPE_3__* adapter; TYPE_4__* port; int sdev; int type; int step; int status; int fsf_req_id; } ;
struct TYPE_6__ {void* rec_count; int rec_action; int rec_step; int rec_status; int fsf_req_id; } ;
struct TYPE_7__ {TYPE_1__ run; } ;
struct zfcp_dbf_rec {TYPE_2__ u; int tag; int id; } ;
struct zfcp_dbf {int rec_lock; int rec; struct zfcp_dbf_rec rec_buf; } ;
struct TYPE_10__ {int erp_counter; } ;
struct TYPE_9__ {int erp_counter; } ;
struct TYPE_8__ {int erp_counter; struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,struct zfcp_dbf_rec*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct zfcp_dbf_rec*,int ,int) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct zfcp_dbf_rec*,TYPE_3__*,TYPE_4__*,int ) ;

void FUNC_9(int VAR_2, char *VAR_3, struct zfcp_erp_action *VAR_4)
{
 struct zfcp_dbf *VAR_5 = VAR_4->adapter->dbf;
 struct zfcp_dbf_rec *VAR_6 = &VAR_5->rec_buf;
 unsigned long VAR_7;

 if (!FUNC_2(VAR_5->rec, VAR_2))
  return;

 FUNC_6(&VAR_5->rec_lock, VAR_7);
 FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->id = VAR_0;
 FUNC_3(VAR_6->tag, VAR_3, VAR_1);
 FUNC_8(VAR_6, VAR_4->adapter, VAR_4->port, VAR_4->sdev);

 VAR_6->u.run.fsf_req_id = VAR_4->fsf_req_id;
 VAR_6->u.run.rec_status = VAR_4->status;
 VAR_6->u.run.rec_step = VAR_4->step;
 VAR_6->u.run.rec_action = VAR_4->type;

 if (VAR_4->sdev)
  VAR_6->u.run.rec_count =
   FUNC_0(&FUNC_5(VAR_4->sdev)->erp_counter);
 else if (VAR_4->port)
  VAR_6->u.run.rec_count = FUNC_0(&VAR_4->port->erp_counter);
 else
  VAR_6->u.run.rec_count = FUNC_0(&VAR_4->adapter->erp_counter);

 FUNC_1(VAR_5->rec, VAR_2, VAR_6, sizeof(*VAR_6));
 FUNC_7(&VAR_5->rec_lock, VAR_7);
}
