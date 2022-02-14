
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int target; int lun; } ;
struct ctlr_info {struct hpsa_scsi_dev_t** dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ctlr_info*,struct hpsa_scsi_dev_t*,char*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_2,
 int VAR_3, struct hpsa_scsi_dev_t *VAR_4,
 struct hpsa_scsi_dev_t *VAR_5[], int *VAR_6,
 struct hpsa_scsi_dev_t *VAR_7[], int *VAR_8)
{

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);
 VAR_7[*VAR_8] = VAR_2->dev[VAR_3];
 (*VAR_8)++;





 if (VAR_4->target == -1) {
  VAR_4->target = VAR_2->dev[VAR_3]->target;
  VAR_4->lun = VAR_2->dev[VAR_3]->lun;
 }

 VAR_2->dev[VAR_3] = VAR_4;
 VAR_5[*VAR_6] = VAR_4;
 (*VAR_6)++;

 FUNC_1(VAR_1, VAR_2, VAR_4, "replaced");
}
