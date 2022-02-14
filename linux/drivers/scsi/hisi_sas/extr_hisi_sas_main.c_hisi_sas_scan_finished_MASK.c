
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int dummy; } ;
struct hisi_hba {struct sas_ha_struct sha; } ;
struct Scsi_Host {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct sas_ha_struct*) ;
 struct hisi_hba* FUNC_1 (struct Scsi_Host*) ;

int FUNC_2(struct Scsi_Host *VAR_1, unsigned long VAR_2)
{
 struct hisi_hba *VAR_3 = FUNC_1(VAR_1);
 struct sas_ha_struct *VAR_4 = &VAR_3->sha;


 if (VAR_2 < VAR_0)
  return 0;

 FUNC_0(VAR_4);
 return 1;
}
