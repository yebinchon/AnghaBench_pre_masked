
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_sas_phy {unsigned int id; } ;
struct asd_port {unsigned int phy_mask; int num_phys; } ;
struct asd_phy {struct asd_port* asd_port; struct asd_sas_phy sas_phy; } ;
struct asd_ha_struct {int asd_ports_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct asd_ha_struct *VAR_0, struct asd_phy *VAR_1)
{
 struct asd_port *VAR_2 = VAR_1->asd_port;
 struct asd_sas_phy *VAR_3 = &VAR_1->sas_phy;
 unsigned long VAR_4;

 FUNC_0(&VAR_0->asd_ports_lock, VAR_4);
 if (VAR_2) {
  VAR_2->num_phys--;
  VAR_2->phy_mask &= ~(1U << VAR_3->id);
  VAR_1->asd_port = ((void*)0);
 }
 FUNC_1(&VAR_0->asd_ports_lock, VAR_4);
}
