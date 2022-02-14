
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct hisi_sas_port {int port_attached; int id; } ;
struct hisi_sas_phy {struct hisi_sas_port* port; int port_id; } ;
struct hisi_hba {int lock; } ;
struct asd_sas_port {struct hisi_sas_port* lldd_port; } ;
struct asd_sas_phy {struct asd_sas_port* port; struct hisi_sas_phy* lldd_phy; struct sas_ha_struct* ha; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct hisi_sas_port* FUNC_2 (struct asd_sas_port*) ;

__attribute__((used)) static void FUNC_3(struct asd_sas_phy *VAR_0)
{
 struct sas_ha_struct *VAR_1 = VAR_0->ha;
 struct hisi_hba *VAR_2 = VAR_1->lldd_ha;
 struct hisi_sas_phy *VAR_3 = VAR_0->lldd_phy;
 struct asd_sas_port *VAR_4 = VAR_0->port;
 struct hisi_sas_port *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;

 if (!VAR_4)
  return;

 FUNC_0(&VAR_2->lock, VAR_6);
 VAR_5->port_attached = 1;
 VAR_5->id = VAR_3->port_id;
 VAR_3->port = VAR_5;
 VAR_4->lldd_port = VAR_5;
 FUNC_1(&VAR_2->lock, VAR_6);
}
