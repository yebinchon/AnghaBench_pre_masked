
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int fw_tgt_reported; } ;
struct scsi_qla_host {int host; int device_flags; int dpc_flags; TYPE_1__ flags; int loop_state; int loop_down_timer; } ;
struct TYPE_5__ {int evtcode; int* mbx; } ;
struct TYPE_6__ {TYPE_2__ aenfx; } ;
struct qla_work_evt {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct scsi_qla_host*,int) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*,int) ;
 int FUNC_7 (struct scsi_qla_host*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;

int
FUNC_11(struct scsi_qla_host *VAR_7, struct qla_work_evt *VAR_8)
{
 int VAR_9 = 0;
 uint32_t VAR_10, VAR_11;

 VAR_10 = VAR_3;
 VAR_11 = VAR_8->u.aenfx.evtcode;

 switch (VAR_8->u.aenfx.evtcode) {
 case 129:
  if (VAR_8->u.aenfx.mbx[1] == 0) {
   if (VAR_8->u.aenfx.mbx[2] == 1) {
    if (!VAR_7->flags.fw_tgt_reported)
     VAR_7->flags.fw_tgt_reported = 1;
    FUNC_0(&VAR_7->loop_down_timer, 0);
    FUNC_0(&VAR_7->loop_state, VAR_5);
    FUNC_10(VAR_4, &VAR_7->dpc_flags);
    FUNC_5(VAR_7);
   } else if (VAR_8->u.aenfx.mbx[2] == 2) {
    FUNC_7(VAR_7, VAR_8->u.aenfx.mbx[3]);
   }
  } else if (VAR_8->u.aenfx.mbx[1] == 0xffff) {
   if (VAR_8->u.aenfx.mbx[2] == 1) {
    if (!VAR_7->flags.fw_tgt_reported)
     VAR_7->flags.fw_tgt_reported = 1;
    FUNC_10(VAR_4, &VAR_7->dpc_flags);
   } else if (VAR_8->u.aenfx.mbx[2] == 2) {
    VAR_7->device_flags |= VAR_0;
    FUNC_4(VAR_7, 1);
   }
  }
  break;
 case 130:
  VAR_10 = VAR_2;
  VAR_11 = 0;
  break;
 case 131:
  VAR_10 = VAR_1;
  VAR_11 = 0;
  break;
 case 128:
  FUNC_3(VAR_6, VAR_7, 0x5082,
      "Process critical temperature event "
      "aenmb[0]: %x\n",
      VAR_8->u.aenfx.evtcode);
  FUNC_8(VAR_7->host);
  FUNC_6(VAR_7, 1);
  FUNC_9(VAR_7->host);
  break;
 }

 FUNC_2(VAR_7->host, FUNC_1(),
     VAR_10, VAR_11);

 return VAR_9;
}
