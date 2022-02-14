
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_cmd {int transport_state; TYPE_4__* se_dev; TYPE_3__* se_tfo; int * t_task_cdb; int orig_fe_lun; TYPE_2__* se_sess; int scsi_status; int work; int (* transport_complete_callback ) (struct se_cmd*,int,int*) ;} ;
typedef int sense_reason_t ;
struct TYPE_5__ {int emulate_ua_intlck_ctrl; } ;
struct TYPE_8__ {TYPE_1__ dev_attrib; } ;
struct TYPE_7__ {int (* queue_status ) (struct se_cmd*) ;} ;
struct TYPE_6__ {int se_node_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct se_cmd*,int,int*) ;
 int FUNC_5 (struct se_cmd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,struct se_cmd*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (struct se_cmd*) ;
 int FUNC_9 (struct se_cmd*) ;
 int FUNC_10 (struct se_cmd*) ;
 int FUNC_11 (struct se_cmd*,TYPE_4__*,int,int) ;
 int FUNC_12 (struct se_cmd*,int,int ) ;

void FUNC_13(struct se_cmd *VAR_7,
  sense_reason_t VAR_8)
{
 int VAR_9 = 0, VAR_10;

 FUNC_1("-----[ Storage Engine Exception; sense_reason %d\n",
   VAR_8);
 FUNC_6("-----[ ", VAR_7);




 FUNC_10(VAR_7);

 if (VAR_7->transport_complete_callback)
  VAR_7->transport_complete_callback(VAR_7, 0, &VAR_10);

 if (VAR_7->transport_state & VAR_1) {
  FUNC_0(&VAR_7->work, VAR_5);
  FUNC_3(VAR_6, &VAR_7->work);
  return;
 }

 switch (VAR_8) {
 case 138:
 case 131:
 case 145:
 case 144:
 case 136:
 case 140:
 case 132:
 case 128:
 case 150:
 case 149:
 case 147:
 case 148:
 case 142:
 case 143:
 case 141:
 case 146:
 case 133:
 case 129:
 case 134:
 case 130:
  break;
 case 137:
  VAR_7->scsi_status = VAR_4;
  goto queue_status;
 case 139:
  VAR_7->scsi_status = VAR_2;
  goto queue_status;
 case 135:






  VAR_7->scsi_status = VAR_3;







  if (VAR_7->se_sess &&
      VAR_7->se_dev->dev_attrib.emulate_ua_intlck_ctrl == 2) {
   FUNC_7(VAR_7->se_sess->se_node_acl,
            VAR_7->orig_fe_lun, 0x2C,
     VAR_0);
  }

  goto queue_status;
 default:
  FUNC_2("Unknown transport error for CDB 0x%02x: %d\n",
   VAR_7->t_task_cdb[0], VAR_8);
  VAR_8 = 131;
  break;
 }

 VAR_9 = FUNC_12(VAR_7, VAR_8, 0);
 if (VAR_9)
  goto queue_full;

check_stop:
 FUNC_9(VAR_7);
 return;

queue_status:
 FUNC_8(VAR_7);
 VAR_9 = VAR_7->se_tfo->queue_status(VAR_7);
 if (!VAR_9)
  goto check_stop;
queue_full:
 FUNC_11(VAR_7, VAR_7->se_dev, VAR_9, 0);
}
