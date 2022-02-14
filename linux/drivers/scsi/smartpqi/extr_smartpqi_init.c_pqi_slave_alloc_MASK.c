
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct scsi_device {int allow_restart; struct pqi_scsi_dev* hostdata; int lun; int host; } ;
struct sas_rphy {int dummy; } ;
struct pqi_scsi_dev {int target_lun_valid; scalar_t__ advertised_queue_depth; scalar_t__ queue_depth; struct scsi_device* sdev; int lun; int target; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 struct pqi_scsi_dev* FUNC_1 (struct pqi_ctrl_info*,struct sas_rphy*) ;
 struct pqi_scsi_dev* FUNC_2 (struct pqi_ctrl_info*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct pqi_scsi_dev*) ;
 int FUNC_4 (struct scsi_device*,scalar_t__) ;
 struct scsi_target* FUNC_5 (struct scsi_device*) ;
 scalar_t__ FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (struct scsi_device*) ;
 struct pqi_ctrl_info* FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct sas_rphy* FUNC_11 (struct scsi_target*) ;

__attribute__((used)) static int FUNC_12(struct scsi_device *VAR_1)
{
 struct pqi_scsi_dev *VAR_2;
 unsigned long VAR_3;
 struct pqi_ctrl_info *VAR_4;
 struct scsi_target *VAR_5;
 struct sas_rphy *VAR_6;

 VAR_4 = FUNC_8(VAR_1->host);

 FUNC_9(&VAR_4->scsi_device_list_lock, VAR_3);

 if (FUNC_6(VAR_1) == VAR_0) {
  VAR_5 = FUNC_5(VAR_1);
  VAR_6 = FUNC_11(VAR_5);
  VAR_2 = FUNC_1(VAR_4, VAR_6);
  if (VAR_2) {
   VAR_2->target = FUNC_7(VAR_1);
   VAR_2->lun = VAR_1->lun;
   VAR_2->target_lun_valid = 1;
  }
 } else {
  VAR_2 = FUNC_2(VAR_4, FUNC_6(VAR_1),
   FUNC_7(VAR_1), VAR_1->lun);
 }

 if (VAR_2) {
  VAR_1->hostdata = VAR_2;
  VAR_2->sdev = VAR_1;
  if (VAR_2->queue_depth) {
   VAR_2->advertised_queue_depth = VAR_2->queue_depth;
   FUNC_4(VAR_1,
    VAR_2->advertised_queue_depth);
  }
  if (FUNC_3(VAR_2))
   FUNC_0(VAR_1);
  else
   VAR_1->allow_restart = 1;
 }

 FUNC_10(&VAR_4->scsi_device_list_lock, VAR_3);

 return 0;
}
