
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int lun; int* scsi3addr; scalar_t__ expose_device; int target; int bus; } ;
struct ctlr_info {int ndevices; struct hpsa_scsi_dev_t** dev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct ctlr_info*,int*,int ,int *,int*) ;
 int FUNC_3 (int ,struct ctlr_info*,struct hpsa_scsi_dev_t*,char*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_2,
  struct hpsa_scsi_dev_t *VAR_3,
  struct hpsa_scsi_dev_t *VAR_4[], int *VAR_5)
{

 int VAR_6 = VAR_2->ndevices;
 int VAR_7;
 unsigned char VAR_8[8], VAR_9[8];
 struct hpsa_scsi_dev_t *VAR_10;

 if (VAR_6 >= VAR_0) {
  FUNC_0(&VAR_2->pdev->dev, "too many devices, some will be "
   "inaccessible.\n");
  return -1;
 }


 if (VAR_3->lun != -1)

  goto lun_assigned;





 if (VAR_3->scsi3addr[4] == 0) {

  if (FUNC_2(VAR_2, VAR_3->scsi3addr,
   VAR_3->bus, &VAR_3->target, &VAR_3->lun) != 0)
   return -1;
  goto lun_assigned;
 }







 FUNC_5(VAR_8, VAR_3->scsi3addr, 8);
 VAR_8[4] = 0;
 VAR_8[5] = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_10 = VAR_2->dev[VAR_7];
  FUNC_5(VAR_9, VAR_10->scsi3addr, 8);
  VAR_9[4] = 0;
  VAR_9[5] = 0;

  if (FUNC_4(VAR_8, VAR_9, 8) == 0) {
   VAR_3->bus = VAR_10->bus;
   VAR_3->target = VAR_10->target;
   VAR_3->lun = VAR_3->scsi3addr[4];
   break;
  }
 }
 if (VAR_3->lun == -1) {
  FUNC_1(&VAR_2->pdev->dev, "physical device with no LUN=0,"
   " suspect firmware bug or unsupported hardware "
   "configuration.\n");
  return -1;
 }

lun_assigned:

 VAR_2->dev[VAR_6] = VAR_3;
 VAR_2->ndevices++;
 VAR_4[*VAR_5] = VAR_3;
 (*VAR_5)++;
 FUNC_3(VAR_1, VAR_2, VAR_3,
  VAR_3->expose_device ? "added" : "masked");
 return 0;
}
