
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {int disco_q; int phy_port_lock; TYPE_2__ core; } ;
struct expander_device {int ex_change_count; } ;
struct domain_device {struct expander_device ex_dev; int dev_type; int pathways; } ;
struct asd_sas_port {int num_phys; unsigned int phy_mask; int * port; int phy_list_lock; scalar_t__ oob_mode; scalar_t__ tproto; scalar_t__ iproto; scalar_t__ class; int attached_sas_addr; int sas_addr; int phy_list; struct domain_device* port_dev; } ;
struct asd_sas_phy {unsigned int id; struct asd_sas_port* port; int port_phy_el; int phy; struct sas_ha_struct* ha; } ;
struct TYPE_6__ {int (* lldd_port_deformed ) (struct asd_sas_phy*) ;} ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct asd_sas_port*) ;
 int FUNC_6 (struct domain_device*,int *) ;
 int FUNC_7 (struct asd_sas_port*,int ) ;
 int FUNC_8 (struct asd_sas_phy*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct asd_sas_port*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct asd_sas_phy*) ;
 struct sas_internal* FUNC_17 (int ) ;

void FUNC_18(struct asd_sas_phy *VAR_2, int VAR_3)
{
 struct sas_ha_struct *VAR_4 = VAR_2->ha;
 struct asd_sas_port *VAR_5 = VAR_2->port;
 struct sas_internal *VAR_6 =
  FUNC_17(VAR_4->core.shost->transportt);
 struct domain_device *VAR_7;
 unsigned long VAR_8;

 if (!VAR_5)
  return;

 VAR_7 = VAR_5->port_dev;
 if (VAR_7)
  VAR_7->pathways--;

 if (VAR_5->num_phys == 1) {
  FUNC_11(VAR_5, VAR_3);
  FUNC_5(VAR_5);
  FUNC_9(VAR_5->port);
  VAR_5->port = ((void*)0);
 } else {
  FUNC_10(VAR_5->port, VAR_2->phy);
  FUNC_6(VAR_7, VAR_5->port);
 }

 if (VAR_6->dft->lldd_port_deformed)
  VAR_6->dft->lldd_port_deformed(VAR_2);

 FUNC_13(&VAR_4->phy_port_lock, VAR_8);
 FUNC_12(&VAR_5->phy_list_lock);

 FUNC_3(&VAR_2->port_phy_el);
 FUNC_8(VAR_2, ((void*)0));
 VAR_2->port = ((void*)0);
 VAR_5->num_phys--;
 VAR_5->phy_mask &= ~(1U << VAR_2->id);

 if (VAR_5->num_phys == 0) {
  FUNC_0(&VAR_5->phy_list);
  FUNC_4(VAR_5->sas_addr, 0, VAR_1);
  FUNC_4(VAR_5->attached_sas_addr, 0, VAR_1);
  VAR_5->class = 0;
  VAR_5->iproto = 0;
  VAR_5->tproto = 0;
  VAR_5->oob_mode = 0;
  VAR_5->phy_mask = 0;
 }
 FUNC_14(&VAR_5->phy_list_lock);
 FUNC_15(&VAR_4->phy_port_lock, VAR_8);


 if (VAR_5->port && VAR_7 && FUNC_1(VAR_7->dev_type)) {
  struct expander_device *VAR_9 = &VAR_7->ex_dev;

  VAR_9->ex_change_count = -1;
  FUNC_7(VAR_5, VAR_0);
 }
 FUNC_2(VAR_4->disco_q);

 return;
}
