
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct pqi_scsi_dev {int dummy; } ;
struct pqi_queue_group {int dummy; } ;
struct pqi_io_request {struct pqi_queue_group* queue_group; struct scsi_cmnd* scmd; } ;
struct pqi_ctrl_info {int dummy; } ;
struct TYPE_2__ {int host; struct pqi_scsi_dev* hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pqi_scsi_dev*) ;
 int FUNC_1 (struct pqi_io_request*) ;
 int FUNC_2 (struct pqi_ctrl_info*,struct pqi_io_request*,struct pqi_scsi_dev*,struct scsi_cmnd*,struct pqi_queue_group*) ;
 int FUNC_3 (struct pqi_io_request*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 struct pqi_ctrl_info* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct pqi_io_request *VAR_1)
{
 struct scsi_cmnd *VAR_2;
 struct pqi_scsi_dev *VAR_3;
 struct pqi_ctrl_info *VAR_4;
 struct pqi_queue_group *VAR_5;

 VAR_2 = VAR_1->scmd;
 VAR_3 = VAR_2->device->hostdata;
 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_1);
  FUNC_5(VAR_2, VAR_0);
  FUNC_4(VAR_2);
  return 0;
 }

 VAR_4 = FUNC_6(VAR_2->device->host);
 VAR_5 = VAR_1->queue_group;

 FUNC_3(VAR_1);

 return FUNC_2(VAR_4, VAR_1,
  VAR_3, VAR_2, VAR_5);
}
