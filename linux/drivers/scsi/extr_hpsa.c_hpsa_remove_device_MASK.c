
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct hpsa_scsi_dev_t {int removed; int lun; int target; int bus; } ;
struct ctlr_info {int scsi_host; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpsa_scsi_dev_t*) ;
 int FUNC_1 (int ,struct ctlr_info*,struct hpsa_scsi_dev_t*,char*) ;
 int FUNC_2 (struct ctlr_info*,struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_3 (struct hpsa_scsi_dev_t*) ;
 struct scsi_device* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_7(struct ctlr_info *VAR_1,
   struct hpsa_scsi_dev_t *VAR_2)
{
 struct scsi_device *VAR_3 = ((void*)0);

 if (!VAR_1->scsi_host)
  return;




 VAR_2->removed = 1;
 FUNC_2(VAR_1, VAR_2);

 if (FUNC_3(VAR_2)) {
  VAR_3 = FUNC_4(VAR_1->scsi_host, VAR_2->bus,
      VAR_2->target, VAR_2->lun);
  if (VAR_3) {
   FUNC_6(VAR_3);
   FUNC_5(VAR_3);
  } else {





   FUNC_1(VAR_0, VAR_1, VAR_2,
     "didn't find device for removal.");
  }
 } else {

  FUNC_0(VAR_2);
 }
}
