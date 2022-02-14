
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_qla_host {TYPE_3__* hw; int fcport_count; } ;
struct TYPE_12__ {int (* free ) (TYPE_4__*) ;TYPE_6__* fcport; int type; int name; struct scsi_qla_host* vha; } ;
typedef TYPE_4__ srb_t ;
struct TYPE_13__ {int logout_on_delete; int login_succ; int fw_login_state; int login_gen; int deleted; int disc_state; int login_retry; int d_id; int send_els_logo; scalar_t__ plogi_nack_done_deadline; int chip_reset; int flags; int port_name; } ;
struct TYPE_10__ {int sess_lock; } ;
struct TYPE_11__ {TYPE_2__ tgt; TYPE_1__* base_qpair; } ;
struct TYPE_9__ {int chip_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(srb_t *VAR_9, int VAR_10)
{
 struct scsi_qla_host *VAR_11 = VAR_9->vha;
 unsigned long VAR_12;

 FUNC_1(VAR_8, VAR_11, 0x20f2,
     "Async done-%s res %x %8phC  type %d\n",
     VAR_9->name, VAR_10, VAR_9->fcport->port_name, VAR_9->type);

 FUNC_4(&VAR_11->hw->tgt.sess_lock, VAR_12);
 VAR_9->fcport->flags &= ~VAR_4;
 VAR_9->fcport->chip_reset = VAR_11->hw->base_qpair->chip_reset;

 switch (VAR_9->type) {
 case 129:
  VAR_9->fcport->login_gen++;
  VAR_9->fcport->fw_login_state = VAR_1;
  VAR_9->fcport->logout_on_delete = 1;
  VAR_9->fcport->plogi_nack_done_deadline = VAR_7 + VAR_5;
  VAR_9->fcport->send_els_logo = 0;
  break;

 case 128:
  VAR_9->fcport->fw_login_state = VAR_3;
  VAR_9->fcport->deleted = 0;
  VAR_9->fcport->send_els_logo = 0;

  if (!VAR_9->fcport->login_succ &&
      !FUNC_0(VAR_9->fcport->d_id)) {
   VAR_9->fcport->login_succ = 1;

   VAR_11->fcport_count++;
   FUNC_5(&VAR_11->hw->tgt.sess_lock, VAR_12);
   FUNC_2(VAR_9->fcport);
   FUNC_4(&VAR_11->hw->tgt.sess_lock, VAR_12);
  } else {
   VAR_9->fcport->login_retry = 0;
   VAR_9->fcport->disc_state = VAR_0;
   VAR_9->fcport->deleted = 0;
   VAR_9->fcport->logout_on_delete = 1;
  }
  break;

 case 130:
  VAR_9->fcport->login_gen++;
  VAR_9->fcport->fw_login_state = VAR_2;
  FUNC_3(VAR_9->fcport, VAR_6);
  break;
 }
 FUNC_5(&VAR_11->hw->tgt.sess_lock, VAR_12);

 VAR_9->free(VAR_9);
}
