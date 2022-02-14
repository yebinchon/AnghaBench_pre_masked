
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {TYPE_1__ core; struct hisi_hba* lldd_ha; } ;
struct platform_device {int dummy; } ;
struct hisi_hba {int timer; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hisi_hba*) ;
 struct sas_ha_struct* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct sas_ha_struct*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(struct platform_device *VAR_0)
{
 struct sas_ha_struct *VAR_1 = FUNC_2(VAR_0);
 struct hisi_hba *VAR_2 = VAR_1->lldd_ha;
 struct Scsi_Host *VAR_3 = VAR_1->core.shost;

 if (FUNC_6(&VAR_2->timer))
  FUNC_0(&VAR_2->timer);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1->core.shost);

 FUNC_1(VAR_2);
 FUNC_5(VAR_3);
 return 0;
}
