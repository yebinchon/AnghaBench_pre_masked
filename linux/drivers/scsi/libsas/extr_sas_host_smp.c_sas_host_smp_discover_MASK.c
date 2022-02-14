
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_8__ {int device_type; size_t initiator_port_protocols; size_t target_port_protocols; } ;
struct sas_rphy {TYPE_4__ identify; } ;
struct sas_phy {size_t negotiated_linkrate; int minimum_linkrate; int minimum_linkrate_hw; int maximum_linkrate; int maximum_linkrate_hw; } ;
struct sas_ha_struct {size_t num_phys; TYPE_3__** sas_phy; int sas_addr; } ;
struct TYPE_7__ {TYPE_2__* port; int attached_sas_addr; struct sas_phy* phy; } ;
struct TYPE_6__ {TYPE_1__* port_dev; } ;
struct TYPE_5__ {struct sas_rphy* rphy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sas_ha_struct *VAR_3, u8 *VAR_4,
      u8 VAR_5)
{
 struct sas_phy *VAR_6;
 struct sas_rphy *VAR_7;

 if (VAR_5 >= VAR_3->num_phys) {
  VAR_4[2] = VAR_2;
  return;
 }
 VAR_4[2] = VAR_1;

 VAR_6 = VAR_3->sas_phy[VAR_5]->phy;
 VAR_4[9] = VAR_5;
 VAR_4[13] = VAR_6->negotiated_linkrate;
 FUNC_0(VAR_4 + 16, VAR_3->sas_addr, VAR_0);
 FUNC_0(VAR_4 + 24, VAR_3->sas_phy[VAR_5]->attached_sas_addr,
        VAR_0);
 VAR_4[40] = (VAR_6->minimum_linkrate << 4) |
  VAR_6->minimum_linkrate_hw;
 VAR_4[41] = (VAR_6->maximum_linkrate << 4) |
  VAR_6->maximum_linkrate_hw;

 if (!VAR_3->sas_phy[VAR_5]->port ||
     !VAR_3->sas_phy[VAR_5]->port->port_dev)
  return;

 VAR_7 = VAR_3->sas_phy[VAR_5]->port->port_dev->rphy;
 VAR_4[12] = VAR_7->identify.device_type << 4;
 VAR_4[14] = VAR_7->identify.initiator_port_protocols;
 VAR_4[15] = VAR_7->identify.target_port_protocols;
}
