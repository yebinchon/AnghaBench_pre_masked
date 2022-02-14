
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct mvs_prv_info* lldd_ha; } ;
struct mvs_prv_info {scalar_t__ scan_finished; } ;
struct Scsi_Host {int dummy; } ;


 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct sas_ha_struct*) ;

int FUNC_2(struct Scsi_Host *VAR_0, unsigned long VAR_1)
{
 struct sas_ha_struct *VAR_2 = FUNC_0(VAR_0);
 struct mvs_prv_info *VAR_3 = VAR_2->lldd_ha;

 if (VAR_3->scan_finished == 0)
  return 0;

 FUNC_1(VAR_2);
 return 1;
}
