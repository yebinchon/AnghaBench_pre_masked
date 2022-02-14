
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int lun; int target; int bus; } ;
struct ctlr_info {int sas_host; int scsi_host; } ;


 int FUNC_0 (int ,struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_1 (struct hpsa_scsi_dev_t*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_0, struct hpsa_scsi_dev_t *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->scsi_host)
  return 1;

 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_2(VAR_0->scsi_host, VAR_1->bus,
     VAR_1->target, VAR_1->lun);
 else
  VAR_2 = FUNC_0(VAR_0->sas_host, VAR_1);

 return VAR_2;
}
