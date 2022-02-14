
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int s_dma_pool; } ;
struct event_arg {TYPE_5__* sp; TYPE_6__* fcport; } ;
struct TYPE_9__ {int in_dma; int in; int * in_mb; } ;
struct TYPE_10__ {TYPE_1__ mbx; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_13__ {int (* free ) (TYPE_5__*) ;TYPE_4__ u; struct scsi_qla_host* vha; int name; TYPE_6__* fcport; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_14__ {int flags; int port_name; } ;
typedef TYPE_6__ fc_port_t ;
typedef int ea ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct event_arg*,int ,int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct scsi_qla_host*,struct event_arg*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_5(srb_t *VAR_4, int VAR_5)
{
 struct scsi_qla_host *VAR_6 = VAR_4->vha;
 struct qla_hw_data *VAR_7 = VAR_6->hw;
 fc_port_t *VAR_8 = VAR_4->fcport;
 u16 *VAR_9 = VAR_4->u.iocb_cmd.u.mbx.in_mb;
 struct event_arg VAR_10;

 FUNC_2(VAR_3, VAR_6, 0x20db,
     "Async done-%s res %x, WWPN %8phC mb[1]=%x mb[2]=%x \n",
     VAR_4->name, VAR_5, VAR_8->port_name, VAR_9[1], VAR_9[2]);

 if (VAR_5 == VAR_2) {
  FUNC_0(VAR_4->vha->hw->s_dma_pool, VAR_4->u.iocb_cmd.u.mbx.in,
   VAR_4->u.iocb_cmd.u.mbx.in_dma);
  return;
 }

 VAR_8->flags &= ~(VAR_1 | VAR_0);
 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.fcport = VAR_8;
 VAR_10.sp = VAR_4;

 FUNC_3(VAR_6, &VAR_10);

 FUNC_0(VAR_7->s_dma_pool, VAR_4->u.iocb_cmd.u.mbx.in,
  VAR_4->u.iocb_cmd.u.mbx.in_dma);

 VAR_4->free(VAR_4);
}
