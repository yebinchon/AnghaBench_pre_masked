
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct se_cmd {TYPE_6__* se_lun; int se_cmd_flags; int * t_task_cdb; TYPE_4__* se_sess; TYPE_2__* se_tfo; int * __t_task_cdb; struct se_device* se_dev; } ;
typedef scalar_t__ sense_reason_t ;
struct TYPE_11__ {int cmd_pdus; } ;
struct TYPE_12__ {TYPE_5__ lun_stats; } ;
struct TYPE_10__ {TYPE_3__* se_node_acl; } ;
struct TYPE_9__ {int initiatorname; } ;
struct TYPE_8__ {int fabric_name; } ;
struct TYPE_7__ {scalar_t__ (* parse_cdb ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char*,int,unsigned long) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (unsigned char*) ;
 scalar_t__ FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 scalar_t__ FUNC_8 (struct se_cmd*) ;

sense_reason_t
FUNC_9(struct se_cmd *VAR_6, unsigned char *VAR_7)
{
 struct se_device *VAR_8 = VAR_6->se_dev;
 sense_reason_t VAR_9;





 if (FUNC_5(VAR_7) > VAR_2) {
  FUNC_3("Received SCSI CDB with command_size: %d that"
   " exceeds SCSI_MAX_VARLEN_CDB_SIZE: %d\n",
   FUNC_5(VAR_7), VAR_2);
  return VAR_3;
 }





 if (FUNC_5(VAR_7) > sizeof(VAR_6->__t_task_cdb)) {
  VAR_6->t_task_cdb = FUNC_1(FUNC_5(VAR_7),
      VAR_0);
  if (!VAR_6->t_task_cdb) {
   FUNC_3("Unable to allocate cmd->t_task_cdb"
    " %u > sizeof(cmd->__t_task_cdb): %lu ops\n",
    FUNC_5(VAR_7),
    (unsigned long)sizeof(VAR_6->__t_task_cdb));
   return VAR_4;
  }
 } else
  VAR_6->t_task_cdb = &VAR_6->__t_task_cdb[0];



 FUNC_2(VAR_6->t_task_cdb, VAR_7, FUNC_5(VAR_7));

 FUNC_7(VAR_6);

 VAR_9 = VAR_8->transport->parse_cdb(VAR_6);
 if (VAR_9 == VAR_5)
  FUNC_4("%s/%s: Unsupported SCSI Opcode 0x%02x, sending CHECK_CONDITION.\n",
        VAR_6->se_tfo->fabric_name,
        VAR_6->se_sess->se_node_acl->initiatorname,
        VAR_6->t_task_cdb[0]);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_6->se_cmd_flags |= VAR_1;
 FUNC_0(&VAR_6->se_lun->lun_stats.cmd_pdus);
 return 0;
}
