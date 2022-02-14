
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_cmnd {int request; scalar_t__ result; TYPE_1__* device; } ;
struct pqi_scsi_dev {int scsi_cmds_outstanding; scalar_t__ aio_enabled; scalar_t__ raid_bypass_enabled; } ;
struct pqi_queue_group {int dummy; } ;
struct pqi_ctrl_info {struct pqi_queue_group* queue_groups; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct pqi_scsi_dev* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,struct scsi_cmnd*,struct pqi_queue_group*) ;
 scalar_t__ FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_6 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_7 (struct pqi_ctrl_info*) ;
 int FUNC_8 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_9 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_10 (struct pqi_scsi_dev*) ;
 size_t FUNC_11 (struct pqi_ctrl_info*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_12 (struct pqi_scsi_dev*) ;
 int FUNC_13 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,struct scsi_cmnd*,struct pqi_queue_group*) ;
 int FUNC_14 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,struct scsi_cmnd*,struct pqi_queue_group*) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*,int ) ;
 struct pqi_ctrl_info* FUNC_17 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_18(struct Scsi_Host *VAR_2,
 struct scsi_cmnd *VAR_3)
{
 int VAR_4;
 struct pqi_ctrl_info *VAR_5;
 struct pqi_scsi_dev *VAR_6;
 u16 VAR_7;
 struct pqi_queue_group *VAR_8;
 bool VAR_9;

 VAR_6 = VAR_3->device->hostdata;
 VAR_5 = FUNC_17(VAR_2);

 if (!VAR_6) {
  FUNC_16(VAR_3, VAR_0);
  FUNC_15(VAR_3);
  return 0;
 }

 FUNC_1(&VAR_6->scsi_cmds_outstanding);

 if (FUNC_7(VAR_5) || FUNC_9(VAR_5,
        VAR_6)) {
  FUNC_16(VAR_3, VAR_0);
  FUNC_15(VAR_3);
  return 0;
 }

 FUNC_5(VAR_5);
 if (FUNC_4(VAR_5) || FUNC_10(VAR_6) ||
     FUNC_6(VAR_5)) {
  VAR_4 = VAR_1;
  goto out;
 }





 VAR_3->result = 0;

 VAR_7 = FUNC_11(VAR_5, VAR_3);
 VAR_8 = &VAR_5->queue_groups[VAR_7];

 if (FUNC_12(VAR_6)) {
  VAR_9 = 0;
  if (VAR_6->raid_bypass_enabled &&
    !FUNC_2(VAR_3->request)) {
   VAR_4 = FUNC_13(VAR_5, VAR_6,
    VAR_3, VAR_8);
   if (VAR_4 == 0 || VAR_4 == VAR_1)
    VAR_9 = 1;
  }
  if (!VAR_9)
   VAR_4 = FUNC_14(VAR_5, VAR_6, VAR_3,
    VAR_8);
 } else {
  if (VAR_6->aio_enabled)
   VAR_4 = FUNC_3(VAR_5, VAR_6, VAR_3,
    VAR_8);
  else
   VAR_4 = FUNC_14(VAR_5, VAR_6, VAR_3,
    VAR_8);
 }

out:
 FUNC_8(VAR_5);
 if (VAR_4)
  FUNC_0(&VAR_6->scsi_cmds_outstanding);

 return VAR_4;
}
