
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct mvs_prv_info* lldd_ha; } ;
struct mvs_prv_info {unsigned short n_host; int scan_finished; struct mvs_info** mvi; } ;
struct mvs_info {TYPE_1__* chip; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int n_phy; } ;


 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct mvs_info*,int) ;

void FUNC_2(struct Scsi_Host *VAR_0)
{
 int VAR_1, VAR_2;
 unsigned short VAR_3;
 struct mvs_info *VAR_4;
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_0);
 struct mvs_prv_info *VAR_6 = VAR_5->lldd_ha;

 VAR_3 = ((struct mvs_prv_info *)VAR_5->lldd_ha)->n_host;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = ((struct mvs_prv_info *)VAR_5->lldd_ha)->mvi[VAR_2];
  for (VAR_1 = 0; VAR_1 < VAR_4->chip->n_phy; ++VAR_1)
   FUNC_1(VAR_4, VAR_1);
 }
 VAR_6->scan_finished = 1;
}
