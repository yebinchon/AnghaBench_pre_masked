
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct sts_entry_fx00 {int comp_status; int scsi_status; size_t handle; size_t sense_len; int * data; int residual_len; } ;
struct scsi_cmnd {unsigned int underflow; int cmnd; TYPE_1__* device; int sense_buffer; } ;
struct rsp_que {int * status_srb; } ;
struct req_que {size_t num_outstanding_cmds; TYPE_2__** outstanding_cmds; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct TYPE_16__ {scalar_t__ type; int (* done ) (TYPE_2__*,int) ;TYPE_4__* fcport; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_17__ {int host_no; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef size_t int32_t ;
struct TYPE_18__ {int tgt_id; int vha; int state; } ;
typedef TYPE_4__ fc_port_t ;
typedef int __le16 ;
struct TYPE_15__ {int lun; int id; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct scsi_cmnd* FUNC_0 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_17 ;
 int FUNC_12 (int ,TYPE_4__*,int,int) ;
 int FUNC_13 (TYPE_3__*,struct req_que*,size_t) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_2__*,int *,size_t,size_t,struct rsp_que*,int) ;
 int FUNC_16 (TYPE_3__*,struct req_que*,void*,TYPE_2__*,int,int) ;
 size_t FUNC_17 (struct scsi_cmnd*) ;
 int FUNC_18 (struct scsi_cmnd*,size_t) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_21(scsi_qla_host_t *VAR_18, struct rsp_que *VAR_19, void *VAR_20)
{
 srb_t *VAR_21;
 fc_port_t *VAR_22;
 struct scsi_cmnd *VAR_23;
 struct sts_entry_fx00 *VAR_24;
 __le16 VAR_25;
 __le16 VAR_26;
 __le16 VAR_27;
 int32_t VAR_28;
 uint32_t VAR_29, VAR_30, VAR_31, VAR_32,
     VAR_33;
 uint8_t *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);
 struct qla_hw_data *VAR_36 = VAR_18->hw;
 uint32_t VAR_37, VAR_38;
 uint16_t VAR_39;
 struct req_que *VAR_40;
 int VAR_41 = 1;
 int VAR_42 = 0;

 VAR_24 = (struct sts_entry_fx00 *) VAR_20;

 VAR_25 = VAR_24->comp_status;
 VAR_26 = VAR_24->scsi_status & FUNC_7((uint16_t)VAR_12);
 VAR_37 = VAR_24->handle;
 VAR_38 = FUNC_3(VAR_37);

 VAR_39 = FUNC_4(VAR_37);
 VAR_40 = VAR_36->req_q_map[VAR_39];


 if (VAR_38 < VAR_40->num_outstanding_cmds)
  VAR_21 = VAR_40->outstanding_cmds[VAR_38];
 else
  VAR_21 = ((void*)0);

 if (VAR_21 == ((void*)0)) {
  FUNC_11(VAR_17, VAR_18, 0x3034,
      "Invalid status handle (0x%x).\n", VAR_38);

  FUNC_19(VAR_6, &VAR_18->dpc_flags);
  FUNC_14(VAR_18);
  return;
 }

 if (VAR_21->type == VAR_10) {
  VAR_40->outstanding_cmds[VAR_38] = ((void*)0);
  FUNC_16(VAR_18, VAR_40, VAR_20, VAR_21,
      VAR_26, VAR_25);
  return;
 }


 if (VAR_25 == 137 && VAR_26 == 0) {
  FUNC_13(VAR_18, VAR_40, VAR_38);
  return;
 }

 VAR_40->outstanding_cmds[VAR_38] = ((void*)0);
 VAR_23 = FUNC_0(VAR_21);
 if (VAR_23 == ((void*)0)) {
  FUNC_11(VAR_17, VAR_18, 0x3048,
      "Command already returned (0x%x/%p).\n",
      VAR_38, VAR_21);

  return;
 }

 VAR_27 = VAR_26 & FUNC_7((uint16_t)VAR_16);

 VAR_22 = VAR_21->fcport;

 VAR_29 = VAR_30 = VAR_31 = VAR_32 =
  VAR_33 = 0;
 if (VAR_26 & FUNC_7((uint16_t)VAR_15))
  VAR_29 = VAR_24->sense_len;
 if (VAR_26 & FUNC_7(((uint16_t)VAR_14
     | (uint16_t)VAR_13)))
  VAR_32 = FUNC_9(VAR_24->residual_len);
 if (VAR_25 == FUNC_7((uint16_t)136))
  VAR_33 = FUNC_9(VAR_24->residual_len);
 VAR_34 = VAR_35 = VAR_24->data;
 VAR_30 = sizeof(VAR_24->data);


 if (VAR_25 == 137 &&
     VAR_26 & FUNC_7((uint16_t)VAR_13))
  VAR_25 = FUNC_7((uint16_t)VAR_0);




 switch (FUNC_8(VAR_25)) {
 case 137:
 case 130:
  if (VAR_26 == 0) {
   VAR_42 = VAR_2 << 16;
   break;
  }
  if (VAR_26 & FUNC_7(((uint16_t)VAR_14
      | (uint16_t)VAR_13))) {
   VAR_28 = VAR_32;
   FUNC_18(VAR_23, VAR_28);

   if (!VAR_27 &&
       ((unsigned)(FUNC_17(VAR_23) - VAR_28) <
        VAR_23->underflow)) {
    FUNC_11(VAR_17, VAR_22->vha, 0x3050,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes).\n",
        VAR_28, FUNC_17(VAR_23));

    VAR_42 = VAR_1 << 16;
    break;
   }
  }
  VAR_42 = VAR_2 << 16 | FUNC_8(VAR_27);

  if (VAR_27 ==
      FUNC_7((uint16_t)VAR_8)) {
   FUNC_11(VAR_17, VAR_22->vha, 0x3051,
       "QUEUE FULL detected.\n");
   break;
  }
  VAR_41 = 0;
  if (VAR_27 != FUNC_7((uint16_t)VAR_11))
   break;

  FUNC_10(VAR_23->sense_buffer, 0, VAR_9);
  if (!(VAR_26 & FUNC_7((uint16_t)VAR_15)))
   break;

  FUNC_15(VAR_21, VAR_35, VAR_30, VAR_29,
      VAR_19, VAR_42);
  break;

 case 136:

  if (FUNC_1(VAR_36) || FUNC_2(VAR_36))
   VAR_28 = VAR_33;
  else
   VAR_28 = VAR_32;
  FUNC_18(VAR_23, VAR_28);
  if (VAR_26 & FUNC_7((uint16_t)VAR_14)) {
   if ((FUNC_1(VAR_36) || FUNC_2(VAR_36))
       && VAR_33 != VAR_32) {
    FUNC_11(VAR_17, VAR_22->vha, 0x3052,
        "Dropped frame(s) detected "
        "(0x%x of 0x%x bytes).\n",
        VAR_28, FUNC_17(VAR_23));

    VAR_42 = VAR_1 << 16 |
        FUNC_8(VAR_27);
    goto check_scsi_status;
   }

   if (!VAR_27 &&
       ((unsigned)(FUNC_17(VAR_23) - VAR_28) <
       VAR_23->underflow)) {
    FUNC_11(VAR_17, VAR_22->vha, 0x3053,
        "Mid-layer underflow "
        "detected (0x%x of 0x%x bytes, "
        "cp->underflow: 0x%x).\n",
        VAR_28, FUNC_17(VAR_23), VAR_23->underflow);

    VAR_42 = VAR_1 << 16;
    break;
   }
  } else if (VAR_27 !=
      FUNC_7((uint16_t)VAR_8) &&
      VAR_27 != FUNC_7((uint16_t)VAR_7)) {





   FUNC_11(VAR_17, VAR_22->vha, 0x3054,
       "Dropped frame(s) detected (0x%x "
       "of 0x%x bytes).\n", VAR_28,
       FUNC_17(VAR_23));

   VAR_42 = VAR_1 << 16 | FUNC_8(VAR_27);
   goto check_scsi_status;
  } else {
   FUNC_11(VAR_17, VAR_22->vha, 0x3055,
       "scsi_status: 0x%x, lscsi_status: 0x%x\n",
       VAR_26, VAR_27);
  }

  VAR_42 = VAR_2 << 16 | FUNC_8(VAR_27);
  VAR_41 = 0;

check_scsi_status:




  if (VAR_27 != 0) {
   if (VAR_27 ==
       FUNC_7((uint16_t)VAR_8)) {
    FUNC_11(VAR_17, VAR_22->vha, 0x3056,
        "QUEUE FULL detected.\n");
    VAR_41 = 1;
    break;
   }
   if (VAR_27 !=
       FUNC_7((uint16_t)VAR_11))
    break;

   FUNC_10(VAR_23->sense_buffer, 0, VAR_9);
   if (!(VAR_26 &
       FUNC_7((uint16_t)VAR_15)))
    break;

   FUNC_15(VAR_21, VAR_35, VAR_30,
       VAR_29, VAR_19, VAR_42);
  }
  break;

 case 132:
 case 133:
 case 134:
 case 135:
 case 131:
 case 128:
 case 129:






  VAR_42 = VAR_4 << 16;

  FUNC_11(VAR_17, VAR_22->vha, 0x3057,
      "Port down status: port-state=0x%x.\n",
      FUNC_6(&VAR_22->state));

  if (FUNC_6(&VAR_22->state) == VAR_5)
   FUNC_12(VAR_22->vha, VAR_22, 1, 1);
  break;

 case 138:
  VAR_42 = VAR_3 << 16;
  break;

 default:
  VAR_42 = VAR_1 << 16;
  break;
 }

 if (VAR_41)
  FUNC_11(VAR_17, VAR_22->vha, 0x3058,
      "FCP command status: 0x%x-0x%x (0x%x) nexus=%ld:%d:%llu "
      "tgt_id: 0x%x lscsi_status: 0x%x cdb=%10phN len=0x%x "
      "rsp_info=%p resid=0x%x fw_resid=0x%x sense_len=0x%x, "
      "par_sense_len=0x%x, rsp_info_len=0x%x\n",
      VAR_25, VAR_26, VAR_42, VAR_18->host_no,
      VAR_23->device->id, VAR_23->device->lun, VAR_22->tgt_id,
      VAR_27, VAR_23->cmnd, FUNC_17(VAR_23),
      VAR_34, VAR_32, VAR_33, VAR_29,
      VAR_30, VAR_31);

 if (VAR_19->status_srb == ((void*)0))
  VAR_21->done(VAR_21, VAR_42);
 else
  FUNC_5(1);
}
