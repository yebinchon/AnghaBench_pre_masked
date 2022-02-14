
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_port {int active_phy_mask; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int scic_lock; struct isci_port* ports; } ;
struct asd_sas_port {struct isci_port* lldd_port; } ;
struct asd_sas_phy {struct asd_sas_port* port; TYPE_1__* ha; } ;
struct TYPE_2__ {struct isci_host* lldd_ha; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct isci_phy* FUNC_2 (struct asd_sas_phy*) ;
 int FUNC_3 (struct isci_host*) ;

void FUNC_4(struct asd_sas_phy *VAR_1)
{
 struct isci_host *VAR_2 = VAR_1->ha->lldd_ha;
 struct isci_phy *VAR_3 = FUNC_2(VAR_1);
 struct asd_sas_port *VAR_4 = VAR_1->port;
 struct isci_port *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;




 FUNC_3(VAR_2);

 FUNC_0(&VAR_2->scic_lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = &VAR_2->ports[VAR_7];
  if (VAR_5->active_phy_mask & 1 << VAR_3->phy_index)
   break;
 }
 FUNC_1(&VAR_2->scic_lock, VAR_6);

 if (VAR_7 >= VAR_0)
  VAR_5 = ((void*)0);

 VAR_4->lldd_port = VAR_5;
}
