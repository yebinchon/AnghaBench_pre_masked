
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int block_size; } ;
struct se_device {TYPE_3__* transport; TYPE_2__ dev_attrib; } ;
struct se_cmd {unsigned int data_length; scalar_t__ data_direction; int se_cmd_flags; unsigned int residual_count; int * t_task_cdb; TYPE_1__* se_tfo; scalar_t__ unknown_data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int fabric_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,unsigned int,unsigned int,int ) ;
 int FUNC_3 (struct se_cmd*,struct se_device*,unsigned int) ;

sense_reason_t
FUNC_4(struct se_cmd *VAR_5, unsigned int VAR_6)
{
 struct se_device *VAR_7 = VAR_5->se_dev;

 if (VAR_5->unknown_data_length) {
  VAR_5->data_length = VAR_6;
 } else if (VAR_6 != VAR_5->data_length) {
  FUNC_2("TARGET_CORE[%s]: Expected Transfer Length:"
   " %u does not match SCSI CDB Length: %u for SAM Opcode:"
   " 0x%02x\n", VAR_5->se_tfo->fabric_name,
    VAR_5->data_length, VAR_6, VAR_5->t_task_cdb[0]);

  if (VAR_5->data_direction == VAR_0) {
   if (VAR_5->se_cmd_flags & VAR_2) {
    FUNC_1("Rejecting underflow/overflow"
         " for WRITE data CDB\n");
    return VAR_4;
   }






   if (VAR_6 > VAR_5->data_length) {
    FUNC_1("Rejecting overflow for"
         " WRITE control CDB\n");
    return VAR_4;
   }
  }




  if (VAR_7->dev_attrib.block_size != 512) {
   FUNC_0("Failing OVERFLOW/UNDERFLOW for LBA op"
    " CDB on non 512-byte sector setup subsystem"
    " plugin: %s\n", VAR_7->transport->name);

   return VAR_4;
  }






  if (VAR_6 > VAR_5->data_length) {
   VAR_5->se_cmd_flags |= VAR_1;
   VAR_5->residual_count = (VAR_6 - VAR_5->data_length);
  } else {
   VAR_5->se_cmd_flags |= VAR_3;
   VAR_5->residual_count = (VAR_5->data_length - VAR_6);
   VAR_5->data_length = VAR_6;
  }
 }

 return FUNC_3(VAR_5, VAR_7, VAR_6);

}
