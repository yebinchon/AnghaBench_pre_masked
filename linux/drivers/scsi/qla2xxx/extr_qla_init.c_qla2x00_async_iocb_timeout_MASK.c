
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int flags; int * data; } ;
struct TYPE_16__ {TYPE_3__ logio; } ;
struct srb_iocb {TYPE_4__ u; } ;
struct TYPE_13__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_19__ {int type; int (* done ) (TYPE_7__*,int ) ;TYPE_6__* qpair; int handle; int name; TYPE_1__ u; TYPE_8__* fcport; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_14__ {int b24; } ;
struct TYPE_20__ {int flags; int port_name; TYPE_2__ d_id; int vha; } ;
typedef TYPE_8__ fc_port_t ;
struct TYPE_18__ {int qp_lock_ptr; TYPE_5__* req; } ;
struct TYPE_17__ {int num_outstanding_cmds; TYPE_7__** outstanding_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;





 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int,char*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (TYPE_7__*,int ) ;

void
FUNC_9(void *VAR_7)
{
 srb_t *VAR_8 = VAR_7;
 fc_port_t *VAR_9 = VAR_8->fcport;
 struct srb_iocb *VAR_10 = &VAR_8->u.iocb_cmd;
 int VAR_11, VAR_12;
 unsigned long VAR_13;

 if (VAR_9) {
  FUNC_2(VAR_6, VAR_9->vha, 0x2071,
      "Async-%s timeout - hdl=%x portid=%06x %8phC.\n",
      VAR_8->name, VAR_8->handle, VAR_9->d_id.b24, VAR_9->port_name);

  VAR_9->flags &= ~(VAR_1 | VAR_0);
 } else {
  FUNC_1("Async-%s timeout - hdl=%x.\n",
      VAR_8->name, VAR_8->handle);
 }

 switch (VAR_8->type) {
 case 133:
  VAR_11 = FUNC_3(VAR_8, 0);
  if (VAR_11) {

   VAR_10->u.logio.data[0] = VAR_2;
   VAR_10->u.logio.data[1] =
    VAR_10->u.logio.flags & VAR_5 ?
    VAR_4 : 0;
   FUNC_4(VAR_8->qpair->qp_lock_ptr, VAR_13);
   for (VAR_12 = 1; VAR_12 < VAR_8->qpair->req->num_outstanding_cmds;
       VAR_12++) {
    if (VAR_8->qpair->req->outstanding_cmds[VAR_12] ==
        VAR_8) {
     VAR_8->qpair->req->outstanding_cmds[VAR_12] =
         ((void*)0);
     break;
    }
   }
   FUNC_5(VAR_8->qpair->qp_lock_ptr, VAR_13);
   VAR_8->done(VAR_8, VAR_3);
  }
  break;
 case 132:
 case 134:
 case 131:
 case 129:
 case 128:
 case 130:
 case 135:
  VAR_11 = FUNC_3(VAR_8, 0);
  if (VAR_11) {
   FUNC_4(VAR_8->qpair->qp_lock_ptr, VAR_13);
   for (VAR_12 = 1; VAR_12 < VAR_8->qpair->req->num_outstanding_cmds;
       VAR_12++) {
    if (VAR_8->qpair->req->outstanding_cmds[VAR_12] ==
        VAR_8) {
     VAR_8->qpair->req->outstanding_cmds[VAR_12] =
         ((void*)0);
     break;
    }
   }
   FUNC_5(VAR_8->qpair->qp_lock_ptr, VAR_13);
   VAR_8->done(VAR_8, VAR_3);
  }
  break;
 default:
  FUNC_0(1);
  VAR_8->done(VAR_8, VAR_3);
  break;
 }
}
