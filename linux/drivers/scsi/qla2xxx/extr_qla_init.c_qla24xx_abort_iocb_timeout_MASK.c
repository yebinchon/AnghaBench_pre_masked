
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_9__ {int comp_status; } ;
struct TYPE_10__ {TYPE_3__ abt; } ;
struct srb_iocb {TYPE_4__ u; } ;
struct qla_qpair {int qp_lock_ptr; TYPE_2__* req; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_11__ {int (* done ) (TYPE_5__*,int ) ;struct qla_qpair* qpair; TYPE_1__ u; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_8__ {size_t num_outstanding_cmds; TYPE_5__** outstanding_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 srb_t *VAR_3 = VAR_2;
 struct srb_iocb *VAR_4 = &VAR_3->u.iocb_cmd;
 struct qla_qpair *VAR_5 = VAR_3->qpair;
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_0(VAR_5->qp_lock_ptr, VAR_7);
 for (VAR_6 = 1; VAR_6 < VAR_5->req->num_outstanding_cmds; VAR_6++) {

  if (VAR_5->req->outstanding_cmds[VAR_6] == VAR_3) {
   VAR_5->req->outstanding_cmds[VAR_6] = ((void*)0);
   break;
  }
 }
 FUNC_1(VAR_5->qp_lock_ptr, VAR_7);

 VAR_4->u.abt.comp_status = VAR_0;
 VAR_3->done(VAR_3, VAR_1);
}
