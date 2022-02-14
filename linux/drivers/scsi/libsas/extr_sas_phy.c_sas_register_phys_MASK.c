
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* shost; } ;
struct sas_ha_struct {int num_phys; int sas_addr; TYPE_2__ core; struct asd_sas_phy** sas_phy; } ;
struct asd_sas_phy {TYPE_4__* phy; int tproto; int iproto; scalar_t__ frame_rcvd_size; int sas_prim_lock; int frame_rcvd_lock; struct sas_ha_struct* ha; int * port; int port_phy_el; int event_nr; scalar_t__ error; } ;
struct TYPE_8__ {int phy_identifier; int sas_address; int target_port_protocols; int initiator_port_protocols; } ;
struct TYPE_9__ {void* negotiated_linkrate; void* maximum_linkrate; void* minimum_linkrate; void* maximum_linkrate_hw; void* minimum_linkrate_hw; TYPE_3__ identify; } ;
struct TYPE_6__ {int shost_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sas_ha_struct *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys; VAR_3++) {
  struct asd_sas_phy *VAR_4 = VAR_2->sas_phy[VAR_3];

  VAR_4->error = 0;
  FUNC_2(&VAR_4->event_nr, 0);
  FUNC_0(&VAR_4->port_phy_el);

  VAR_4->port = ((void*)0);
  VAR_4->ha = VAR_2;
  FUNC_5(&VAR_4->frame_rcvd_lock);
  FUNC_5(&VAR_4->sas_prim_lock);
  VAR_4->frame_rcvd_size = 0;

  VAR_4->phy = FUNC_4(&VAR_2->core.shost->shost_gendev, VAR_3);
  if (!VAR_4->phy)
   return -VAR_0;

  VAR_4->phy->identify.initiator_port_protocols =
   VAR_4->iproto;
  VAR_4->phy->identify.target_port_protocols = VAR_4->tproto;
  VAR_4->phy->identify.sas_address = FUNC_1(VAR_2->sas_addr);
  VAR_4->phy->identify.phy_identifier = VAR_3;
  VAR_4->phy->minimum_linkrate_hw = VAR_1;
  VAR_4->phy->maximum_linkrate_hw = VAR_1;
  VAR_4->phy->minimum_linkrate = VAR_1;
  VAR_4->phy->maximum_linkrate = VAR_1;
  VAR_4->phy->negotiated_linkrate = VAR_1;

  FUNC_3(VAR_4->phy);
 }

 return 0;
}
