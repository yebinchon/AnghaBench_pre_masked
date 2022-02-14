
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct scsi_qla_host {int dummy; } ;
struct event_arg {int rc; TYPE_7__* sp; TYPE_8__* fcport; } ;
struct TYPE_17__ {int (* free ) (TYPE_7__*) ;int name; TYPE_8__* fcport; struct scsi_qla_host* vha; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_16__ {TYPE_5__* ct_sns; } ;
struct TYPE_18__ {int node_name; int port_name; int flags; TYPE_6__ ct_desc; } ;
typedef TYPE_8__ fc_port_t ;
typedef int ea ;
struct TYPE_11__ {int * node_name; } ;
struct TYPE_12__ {TYPE_1__ gnn_id; } ;
struct TYPE_13__ {TYPE_2__ rsp; } ;
struct TYPE_14__ {TYPE_3__ rsp; } ;
struct TYPE_15__ {TYPE_4__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct event_arg*,int ,int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct scsi_qla_host*,struct event_arg*) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(srb_t *VAR_3, int VAR_4)
{
 struct scsi_qla_host *VAR_5 = VAR_3->vha;
 fc_port_t *VAR_6 = VAR_3->fcport;
 u8 *VAR_7 = VAR_6->ct_desc.ct_sns->p.rsp.rsp.gnn_id.node_name;
 struct event_arg VAR_8;
 u64 VAR_9;

 VAR_6->flags &= ~VAR_0;
 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  FUNC_0(VAR_6->node_name, VAR_7, VAR_1);

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.fcport = VAR_6;
 VAR_8.sp = VAR_3;
 VAR_8.rc = VAR_4;

 FUNC_2(VAR_2, VAR_5, 0x204f,
     "Async done-%s res %x, WWPN %8phC %8phC\n",
     VAR_3->name, VAR_4, VAR_6->port_name, VAR_6->node_name);

 FUNC_3(VAR_5, &VAR_8);

 VAR_3->free(VAR_3);
}
