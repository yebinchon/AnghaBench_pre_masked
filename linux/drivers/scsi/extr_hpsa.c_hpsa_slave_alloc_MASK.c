
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct scsi_device {struct hpsa_scsi_dev_t* hostdata; int lun; } ;
struct sas_rphy {int dummy; } ;
struct hpsa_scsi_dev_t {int ioaccel_cmds_out; scalar_t__ expose_device; int lun; int target; } ;
struct ctlr_info {int devlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct hpsa_scsi_dev_t* FUNC_1 (struct ctlr_info*,struct sas_rphy*) ;
 struct hpsa_scsi_dev_t* FUNC_2 (struct ctlr_info*,scalar_t__,int ,int ) ;
 struct scsi_target* FUNC_3 (struct scsi_device*) ;
 scalar_t__ FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*) ;
 struct ctlr_info* FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct sas_rphy* FUNC_9 (struct scsi_target*) ;

__attribute__((used)) static int FUNC_10(struct scsi_device *VAR_1)
{
 struct hpsa_scsi_dev_t *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 struct ctlr_info *VAR_4;

 VAR_4 = FUNC_6(VAR_1);
 FUNC_7(&VAR_4->devlock, VAR_3);
 if (FUNC_4(VAR_1) == VAR_0) {
  struct scsi_target *VAR_5;
  struct sas_rphy *VAR_6;

  VAR_5 = FUNC_3(VAR_1);
  VAR_6 = FUNC_9(VAR_5);
  VAR_2 = FUNC_1(VAR_4, VAR_6);
  if (VAR_2) {
   VAR_2->target = FUNC_5(VAR_1);
   VAR_2->lun = VAR_1->lun;
  }
 }
 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_4, FUNC_4(VAR_1),
     FUNC_5(VAR_1), VAR_1->lun);

 if (VAR_2 && VAR_2->expose_device) {
  FUNC_0(&VAR_2->ioaccel_cmds_out, 0);
  VAR_1->hostdata = VAR_2;
 } else
  VAR_1->hostdata = ((void*)0);
 FUNC_8(&VAR_4->devlock, VAR_3);
 return 0;
}
