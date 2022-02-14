
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct scsi_qla_host {int hardware_lock; TYPE_2__* isp_ops; } ;
struct queue_entry {int dummy; } ;
struct TYPE_3__ {int entryCount; int entryType; } ;
struct qla4_marker_entry {int lun; void* modifier; void* target; TYPE_1__ hdr; } ;
struct ddb_entry {int fw_ddb_index; } ;
struct TYPE_4__ {int (* queue_iocb ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*,struct queue_entry**) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 () ;

int FUNC_7(struct scsi_qla_host *VAR_3,
 struct ddb_entry *VAR_4, uint64_t VAR_5, uint16_t VAR_6)
{
 struct qla4_marker_entry *VAR_7;
 unsigned long VAR_8 = 0;
 uint8_t VAR_9 = VAR_2;


 FUNC_3(&VAR_3->hardware_lock, VAR_8);


 if (FUNC_2(VAR_3, (struct queue_entry **) &VAR_7) !=
     VAR_2) {
  VAR_9 = VAR_1;
  goto exit_send_marker;
 }


 VAR_7->hdr.entryType = VAR_0;
 VAR_7->hdr.entryCount = 1;
 VAR_7->target = FUNC_0(VAR_4->fw_ddb_index);
 VAR_7->modifier = FUNC_0(VAR_6);
 FUNC_1(VAR_5, &VAR_7->lun);
 FUNC_6();


 VAR_3->isp_ops->queue_iocb(VAR_3);

exit_send_marker:
 FUNC_4(&VAR_3->hardware_lock, VAR_8);
 return VAR_9;
}
