
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int strict_wide_ports; int num_phys; TYPE_4__ core; int * sas_addr; int lldd_module; int dev; int sas_ha_name; TYPE_2__** sas_phy; int ** sas_port; struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int * sas_addr; int dev; TYPE_3__* phy; TYPE_1__* port; } ;
struct pm8001_chip_info {int n_phy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int * sas_addr; } ;
struct TYPE_7__ {int dev_sas_addr; TYPE_2__ sas_phy; } ;
struct TYPE_5__ {int sas_port; } ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_2,
         const struct pm8001_chip_info *VAR_3)
{
 int VAR_4 = 0;
 struct pm8001_hba_info *VAR_5;
 struct sas_ha_struct *VAR_6 = FUNC_0(VAR_2);

 VAR_5 = VAR_6->lldd_ha;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_phy; VAR_4++) {
  VAR_6->sas_phy[VAR_4] = &VAR_5->phy[VAR_4].sas_phy;
  VAR_6->sas_port[VAR_4] = &VAR_5->port[VAR_4].sas_port;
  VAR_6->sas_phy[VAR_4]->sas_addr =
   (u8 *)&VAR_5->phy[VAR_4].dev_sas_addr;
 }
 VAR_6->sas_ha_name = VAR_0;
 VAR_6->dev = VAR_5->dev;
 VAR_6->strict_wide_ports = 1;
 VAR_6->lldd_module = VAR_1;
 VAR_6->sas_addr = &VAR_5->sas_addr[0];
 VAR_6->num_phys = VAR_3->n_phy;
 VAR_6->core.shost = VAR_2;
}
