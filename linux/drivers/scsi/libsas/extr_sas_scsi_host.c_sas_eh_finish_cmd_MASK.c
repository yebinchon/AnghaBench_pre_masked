
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int eh_entry; TYPE_1__* device; } ;
struct sas_task {int dummy; } ;
struct sas_ha_struct {int eh_done_q; int eh_ata_q; } ;
struct domain_device {int dummy; } ;
struct TYPE_2__ {int host; } ;


 struct sas_ha_struct* FUNC_0 (int ) ;
 struct sas_task* FUNC_1 (struct scsi_cmnd*) ;
 struct domain_device* FUNC_2 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct domain_device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct scsi_cmnd*,struct sas_task*) ;
 int FUNC_6 (struct scsi_cmnd*,int *) ;

__attribute__((used)) static void FUNC_7(struct scsi_cmnd *VAR_0)
{
 struct sas_ha_struct *VAR_1 = FUNC_0(VAR_0->device->host);
 struct domain_device *VAR_2 = FUNC_2(VAR_0);
 struct sas_task *VAR_3 = FUNC_1(VAR_0);





 FUNC_5(VAR_0, VAR_3);

 if (FUNC_3(VAR_2)) {



  FUNC_4(&VAR_0->eh_entry, &VAR_1->eh_ata_q);
  return;
 }





 FUNC_6(VAR_0, &VAR_1->eh_done_q);
}
