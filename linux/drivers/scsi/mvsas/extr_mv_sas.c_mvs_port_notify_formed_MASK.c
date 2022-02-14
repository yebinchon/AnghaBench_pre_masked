
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {scalar_t__ lldd_ha; struct asd_sas_phy** sas_phy; } ;
struct mvs_prv_info {int n_phy; struct mvs_info** mvi; } ;
struct mvs_port {int port_attached; int wide_port_phymap; } ;
struct mvs_phy {int phy_type; int att_dev_info; struct mvs_port* port; } ;
struct mvs_info {int lock; struct mvs_port* port; TYPE_1__* chip; } ;
struct asd_sas_port {int phy_mask; struct mvs_port* lldd_port; } ;
struct asd_sas_phy {int id; struct asd_sas_port* port; struct mvs_phy* lldd_phy; struct sas_ha_struct* ha; } ;
struct TYPE_4__ {int (* write_port_cfg_data ) (struct mvs_info*,int,int) ;int (* write_port_cfg_addr ) (struct mvs_info*,int,int ) ;} ;
struct TYPE_3__ {int n_phy; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct mvs_info*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mvs_info*,int,int ) ;
 int FUNC_5 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_6(struct asd_sas_phy *VAR_4, int VAR_5)
{
 struct sas_ha_struct *VAR_6 = VAR_4->ha;
 struct mvs_info *VAR_7 = ((void*)0); int VAR_8 = 0, VAR_9;
 struct mvs_phy *VAR_10 = VAR_4->lldd_phy;
 struct asd_sas_port *VAR_11 = VAR_4->port;
 struct mvs_port *VAR_12;
 unsigned long VAR_13 = 0;
 if (!VAR_11)
  return;

 while (VAR_6->sas_phy[VAR_8]) {
  if (VAR_6->sas_phy[VAR_8] == VAR_4)
   break;
  VAR_8++;
 }
 VAR_9 = VAR_8/((struct mvs_prv_info *)VAR_6->lldd_ha)->n_phy;
 VAR_7 = ((struct mvs_prv_info *)VAR_6->lldd_ha)->mvi[VAR_9];
 if (VAR_8 >= VAR_7->chip->n_phy)
  VAR_12 = &VAR_7->port[VAR_8 - VAR_7->chip->n_phy];
 else
  VAR_12 = &VAR_7->port[VAR_8];
 if (VAR_5)
  FUNC_2(&VAR_7->lock, VAR_13);
 VAR_12->port_attached = 1;
 VAR_10->port = VAR_12;
 VAR_11->lldd_port = VAR_12;
 if (VAR_10->phy_type & VAR_3) {
  VAR_12->wide_port_phymap = VAR_11->phy_mask;
  FUNC_0("set wide port phy map %x\n", VAR_11->phy_mask);
  FUNC_1(VAR_7, VAR_4->id);


  if (VAR_10->att_dev_info & VAR_2) {
   VAR_0->write_port_cfg_addr(VAR_7, VAR_8, VAR_1);
   VAR_0->write_port_cfg_data(VAR_7, VAR_8, 0x04);
  }
 }
 if (VAR_5)
  FUNC_3(&VAR_7->lock, VAR_13);
}
