
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {scalar_t__ volume_offline; int scsi3addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct hpsa_scsi_dev_t*,struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_2 (struct hpsa_scsi_dev_t*,struct hpsa_scsi_dev_t*) ;

__attribute__((used)) static int FUNC_3(struct hpsa_scsi_dev_t *VAR_4,
 struct hpsa_scsi_dev_t *VAR_5[], int VAR_6,
 int *VAR_7)
{
 int VAR_8;




 if (VAR_4 == ((void*)0))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (VAR_5[VAR_8] == ((void*)0))
   continue;
  if (FUNC_0(VAR_4->scsi3addr, VAR_5[VAR_8]->scsi3addr)) {
   *VAR_7 = VAR_8;
   if (FUNC_1(VAR_4, VAR_5[VAR_8])) {
    if (FUNC_2(VAR_4, VAR_5[VAR_8]))
     return 3;
    return 2;
   } else {

    if (VAR_4->volume_offline)
     return 0;
    return 1;
   }
  }
 }
 *VAR_7 = -1;
 return 0;
}
