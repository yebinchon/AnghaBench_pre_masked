
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {int num_phys; int strict_wide_ports; struct asd_sas_port** sas_port; struct asd_sas_phy** sas_phy; int * sas_addr; int lldd_module; int sas_ha_name; } ;
struct isci_host {struct asd_sas_port* sas_ports; TYPE_2__* phys; TYPE_1__* pdev; struct sas_ha_struct sas_ha; } ;
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int dummy; } ;
struct TYPE_4__ {struct asd_sas_phy sas_phy; int * sas_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct sas_ha_struct*) ;

__attribute__((used)) static int FUNC_2(struct isci_host *VAR_6)
{
 int VAR_7;
 struct sas_ha_struct *VAR_8 = &(VAR_6->sas_ha);
 struct asd_sas_phy **VAR_9;
 struct asd_sas_port **VAR_10;

 VAR_9 = FUNC_0(&VAR_6->pdev->dev,
    VAR_3, sizeof(void *),
    VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_0(&VAR_6->pdev->dev,
     VAR_4, sizeof(void *),
     VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_8->sas_ha_name = VAR_0;
 VAR_8->lldd_module = VAR_5;
 VAR_8->sas_addr = &VAR_6->phys[0].sas_addr[0];

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_9[VAR_7] = &VAR_6->phys[VAR_7].sas_phy;
  VAR_10[VAR_7] = &VAR_6->sas_ports[VAR_7];
 }

 VAR_8->sas_phy = VAR_9;
 VAR_8->sas_port = VAR_10;
 VAR_8->num_phys = VAR_3;

 VAR_8->strict_wide_ports = 1;

 FUNC_1(VAR_8);

 return 0;
}
