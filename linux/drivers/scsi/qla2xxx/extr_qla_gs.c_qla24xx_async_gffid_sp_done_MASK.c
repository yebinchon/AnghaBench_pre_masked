
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


struct scsi_qla_host {int dummy; } ;
struct event_arg {int rc; TYPE_8__* fcport; TYPE_7__* sp; } ;
struct TYPE_15__ {int* fc4_features; } ;
struct TYPE_16__ {TYPE_5__ gff_id; } ;
struct ct_sns_rsp {TYPE_6__ rsp; } ;
struct TYPE_17__ {int (* free ) (TYPE_7__*) ;TYPE_8__* fcport; int name; struct scsi_qla_host* vha; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_14__ {TYPE_3__* ct_sns; } ;
struct TYPE_11__ {int b24; } ;
struct TYPE_18__ {int fc4_type; int fc4f_nvme; TYPE_4__ ct_desc; int flags; int port_name; TYPE_1__ d_id; } ;
typedef TYPE_8__ fc_port_t ;
typedef int ea ;
struct TYPE_12__ {struct ct_sns_rsp rsp; } ;
struct TYPE_13__ {TYPE_2__ p; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct event_arg*,int ,int) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct scsi_qla_host*,struct event_arg*) ;
 int FUNC_3 (TYPE_7__*) ;

void FUNC_4(srb_t *VAR_4, int VAR_5)
{
 struct scsi_qla_host *VAR_6 = VAR_4->vha;
 fc_port_t *VAR_7 = VAR_4->fcport;
 struct ct_sns_rsp *VAR_8;
 struct event_arg VAR_9;

 FUNC_1(VAR_3, VAR_6, 0x2133,
        "Async done-%s res %x ID %x. %8phC\n",
        VAR_4->name, VAR_5, VAR_7->d_id.b24, VAR_7->port_name);

 VAR_7->flags &= ~VAR_0;
 VAR_8 = &VAR_7->ct_desc.ct_sns->p.rsp;





 if (!VAR_5) {
  if (VAR_8->rsp.gff_id.fc4_features[VAR_1] & 0xf) {

   VAR_7->fc4_type =
       VAR_8->rsp.gff_id.fc4_features[VAR_1];
   VAR_7->fc4_type &= 0xf;
        }

  if (VAR_8->rsp.gff_id.fc4_features[VAR_2] & 0xf) {

   VAR_7->fc4f_nvme =
       VAR_8->rsp.gff_id.fc4_features[VAR_2];
   VAR_7->fc4f_nvme &= 0xf;
  }
 }

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.sp = VAR_4;
 VAR_9.fcport = VAR_4->fcport;
 VAR_9.rc = VAR_5;

 FUNC_2(VAR_6, &VAR_9);
 VAR_4->free(VAR_4);
}
