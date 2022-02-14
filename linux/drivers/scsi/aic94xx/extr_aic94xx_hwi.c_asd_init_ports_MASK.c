
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_port {scalar_t__ num_phys; scalar_t__ phy_mask; int attached_sas_addr; int sas_addr; } ;
struct asd_ha_struct {struct asd_port* asd_ports; int asd_ports_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct asd_ha_struct *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->asd_ports_lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct asd_port *VAR_4 = &VAR_2->asd_ports[VAR_3];

  FUNC_0(VAR_4->sas_addr, 0, VAR_1);
  FUNC_0(VAR_4->attached_sas_addr, 0, VAR_1);
  VAR_4->phy_mask = 0;
  VAR_4->num_phys = 0;
 }
}
