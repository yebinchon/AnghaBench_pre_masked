
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_fc_wka_port {int d_id; int status; TYPE_1__* adapter; } ;
struct TYPE_5__ {int rec_count; int rec_action; int rec_step; int rec_status; int fsf_req_id; } ;
struct TYPE_6__ {TYPE_2__ run; } ;
struct zfcp_dbf_rec {TYPE_3__ u; int lun; int d_id; int port_status; int tag; int id; } ;
struct zfcp_dbf {int rec_lock; int rec; struct zfcp_dbf_rec rec_buf; } ;
struct TYPE_4__ {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const,struct zfcp_dbf_rec*,int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct zfcp_dbf_rec*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(char *VAR_3, struct zfcp_fc_wka_port *VAR_4,
     u64 VAR_5)
{
 struct zfcp_dbf *VAR_6 = VAR_4->adapter->dbf;
 struct zfcp_dbf_rec *VAR_7 = &VAR_6->rec_buf;
 static int const VAR_8 = 1;
 unsigned long VAR_9;

 if (FUNC_6(!FUNC_1(VAR_6->rec, VAR_8)))
  return;

 FUNC_4(&VAR_6->rec_lock, VAR_9);
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->id = VAR_1;
 FUNC_2(VAR_7->tag, VAR_3, VAR_2);
 VAR_7->port_status = VAR_4->status;
 VAR_7->d_id = VAR_4->d_id;
 VAR_7->lun = VAR_0;

 VAR_7->u.run.fsf_req_id = VAR_5;
 VAR_7->u.run.rec_status = ~0;
 VAR_7->u.run.rec_step = ~0;
 VAR_7->u.run.rec_action = ~0;
 VAR_7->u.run.rec_count = ~0;

 FUNC_0(VAR_6->rec, VAR_8, VAR_7, sizeof(*VAR_7));
 FUNC_5(&VAR_6->rec_lock, VAR_9);
}
