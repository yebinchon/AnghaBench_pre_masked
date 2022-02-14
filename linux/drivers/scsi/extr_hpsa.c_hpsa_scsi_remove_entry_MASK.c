
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int dummy; } ;
struct ctlr_info {int ndevices; struct hpsa_scsi_dev_t** dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ctlr_info*,struct hpsa_scsi_dev_t*,char*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_2, int VAR_3,
 struct hpsa_scsi_dev_t *VAR_4[], int *VAR_5)
{

 int VAR_6;
 struct hpsa_scsi_dev_t *VAR_7;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);

 VAR_7 = VAR_2->dev[VAR_3];
 VAR_4[*VAR_5] = VAR_2->dev[VAR_3];
 (*VAR_5)++;

 for (VAR_6 = VAR_3; VAR_6 < VAR_2->ndevices-1; VAR_6++)
  VAR_2->dev[VAR_6] = VAR_2->dev[VAR_6+1];
 VAR_2->ndevices--;
 FUNC_1(VAR_1, VAR_2, VAR_7, "removed");
}
