
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_device {TYPE_2__* transport; TYPE_1__* se_hba; } ;
struct se_cmd {int se_cmd_flags; unsigned char* sense_buffer; int scsi_status; int scsi_sense_length; int se_lun; struct se_device* se_dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int hba_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static unsigned char *FUNC_2(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;

 FUNC_0(!VAR_2->se_lun);

 if (!VAR_3)
  return ((void*)0);

 if (VAR_2->se_cmd_flags & VAR_0)
  return ((void*)0);

 VAR_2->scsi_sense_length = VAR_1;

 FUNC_1("HBA_[%u]_PLUG[%s]: Requesting sense for SAM STATUS: 0x%02x\n",
  VAR_3->se_hba->hba_id, VAR_3->transport->name, VAR_2->scsi_status);
 return VAR_2->sense_buffer;
}
