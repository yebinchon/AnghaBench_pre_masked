
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_1__* device; } ;
struct pqi_scsi_dev {int dummy; } ;
struct pqi_io_request {struct scsi_cmnd* scmd; int raid_bypass; } ;
struct pqi_ctrl_info {int dummy; } ;
struct TYPE_2__ {int host; struct pqi_scsi_dev* hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_2 (struct pqi_scsi_dev*) ;
 struct pqi_ctrl_info* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct pqi_io_request *VAR_2)
{
 struct scsi_cmnd *VAR_3;
 struct pqi_scsi_dev *VAR_4;
 struct pqi_ctrl_info *VAR_5;

 if (!VAR_2->raid_bypass)
  return 0;

 VAR_3 = VAR_2->scmd;
 if ((VAR_3->result & 0xff) == VAR_1)
  return 0;
 if (FUNC_0(VAR_3->result) == VAR_0)
  return 0;

 VAR_4 = VAR_3->device->hostdata;
 if (FUNC_2(VAR_4))
  return 0;

 VAR_5 = FUNC_3(VAR_3->device->host);
 if (FUNC_1(VAR_5))
  return 0;

 return 1;
}
