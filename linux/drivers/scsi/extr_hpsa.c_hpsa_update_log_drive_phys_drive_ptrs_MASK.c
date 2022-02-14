
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {scalar_t__ devtype; scalar_t__ offload_to_be_enabled; int offload_enabled; } ;
struct ctlr_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ctlr_info*,struct hpsa_scsi_dev_t**,int,struct hpsa_scsi_dev_t*) ;
 int FUNC_1 (struct hpsa_scsi_dev_t*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_2,
    struct hpsa_scsi_dev_t *VAR_3[], int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3[VAR_5] == ((void*)0))
   continue;
  if (VAR_3[VAR_5]->devtype != VAR_0 &&
      VAR_3[VAR_5]->devtype != VAR_1)
   continue;
  if (!FUNC_1(VAR_3[VAR_5]))
   continue;
  if (!VAR_3[VAR_5]->offload_enabled && VAR_3[VAR_5]->offload_to_be_enabled)
   FUNC_0(VAR_2, VAR_3, VAR_4, VAR_3[VAR_5]);
 }
}
