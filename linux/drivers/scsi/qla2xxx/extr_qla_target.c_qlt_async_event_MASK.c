
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {struct qla_hw_data* hw; int vp_idx; int dpc_flags; TYPE_1__ vha_tgt; } ;
struct qla_tgt {int link_reinit_iocb_pending; int link_reinit_iocb; scalar_t__ tgt_stopped; scalar_t__ tgt_stop; } ;
struct qla_hw_data {int exch_starvation; int base_qpair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_5 ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int ,void*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(uint16_t VAR_6, struct scsi_qla_host *VAR_7,
 uint16_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_7->hw;
 struct qla_tgt *VAR_10 = VAR_7->vha_tgt.qla_tgt;
 int VAR_11;

 if (!VAR_10 || VAR_10->tgt_stop || VAR_10->tgt_stopped)
  return;

 if (((VAR_6 == VAR_3) || (VAR_6 == VAR_2)) &&
     FUNC_1(VAR_9))
  return;






 switch (VAR_6) {
 case 132:
 case 129:
 case 133:
 case 130:
  FUNC_3(VAR_4, VAR_7, 0xf03a,
      "qla_target(%d): System error async event %#x "
      "occurred", VAR_7->vp_idx, VAR_6);
  break;
 case 128:
  FUNC_7(VAR_1, &VAR_7->dpc_flags);
  break;

 case 136:
 {
  FUNC_3(VAR_4, VAR_7, 0xf03b,
      "qla_target(%d): Async LOOP_UP occurred "
      "(m[0]=%x, m[1]=%x, m[2]=%x, m[3]=%x)", VAR_7->vp_idx,
      FUNC_2(VAR_8[0]), FUNC_2(VAR_8[1]),
      FUNC_2(VAR_8[2]), FUNC_2(VAR_8[3]));
  if (VAR_10->link_reinit_iocb_pending) {
   FUNC_6(VAR_9->base_qpair,
       (void *)&VAR_10->link_reinit_iocb,
       0, 0, 0, 0, 0, 0);
   VAR_10->link_reinit_iocb_pending = 0;
  }
  break;
 }

 case 139:
 case 137:
 case 138:
 case 131:
  FUNC_3(VAR_4, VAR_7, 0xf03c,
      "qla_target(%d): Async event %#x occurred "
      "(m[0]=%x, m[1]=%x, m[2]=%x, m[3]=%x)", VAR_7->vp_idx, VAR_6,
      FUNC_2(VAR_8[0]), FUNC_2(VAR_8[1]),
      FUNC_2(VAR_8[2]), FUNC_2(VAR_8[3]));
  break;

 case 134:
  FUNC_3(VAR_4, VAR_7, 0xf017,
      "qla_target(%d): Async event LS_REJECT occurred (m[0]=%x, m[1]=%x, m[2]=%x, m[3]=%x)",
      VAR_7->vp_idx,
      FUNC_2(VAR_8[0]), FUNC_2(VAR_8[1]),
      FUNC_2(VAR_8[2]), FUNC_2(VAR_8[3]));

  if (FUNC_2(VAR_8[3]) == 1) {

   VAR_7->hw->exch_starvation++;
   if (VAR_7->hw->exch_starvation > 5) {
    FUNC_4(VAR_5, VAR_7, 0xd03a,
        "Exchange starvation-. Resetting RISC\n");

    VAR_7->hw->exch_starvation = 0;
    if (FUNC_0(VAR_7->hw))
     FUNC_7(VAR_0,
         &VAR_7->dpc_flags);
    else
     FUNC_7(VAR_1,
         &VAR_7->dpc_flags);
    FUNC_5(VAR_7);
   }
  }
  break;

 case 135:
  FUNC_3(VAR_4, VAR_7, 0xf03d,
      "qla_target(%d): Port update async event %#x "
      "occurred: updating the ports database (m[0]=%x, m[1]=%x, "
      "m[2]=%x, m[3]=%x)", VAR_7->vp_idx, VAR_6,
      FUNC_2(VAR_8[0]), FUNC_2(VAR_8[1]),
      FUNC_2(VAR_8[2]), FUNC_2(VAR_8[3]));

  VAR_11 = FUNC_2(VAR_8[2]);
  if (VAR_11 == 0x4) {
   FUNC_3(VAR_4, VAR_7, 0xf03e,
       "Async MB 2: Got PLOGI Complete\n");
   VAR_7->hw->exch_starvation = 0;
  } else if (VAR_11 == 0x7)
   FUNC_3(VAR_4, VAR_7, 0xf03f,
       "Async MB 2: Port Logged Out\n");
  break;
 default:
  break;
 }

}
