
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pm8001_port {unsigned int wide_port_phymap; } ;
struct TYPE_4__ {int oob_mode; } ;
struct pm8001_phy {int phy_attached; int phy_state; TYPE_2__ sas_phy; } ;
struct pm8001_hba_info {struct pm8001_port* port; struct pm8001_phy* phy; } ;
struct TYPE_3__ {size_t dev_type; } ;
struct hw_event_resp {TYPE_1__ sas_identify; int lr_status_evt_portid; int phyid_npip_portstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pm8001_phy*,size_t) ;
 int FUNC_2 (struct pm8001_hba_info*,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct pm8001_hba_info *VAR_4,
     void *VAR_5)
{
 struct hw_event_resp *VAR_6 = (struct hw_event_resp *)(VAR_5 + 4);
 u32 VAR_7 = FUNC_0(VAR_6->phyid_npip_portstate);
 u8 VAR_8 = (u8)((VAR_7 & 0xFF0000) >> 16);
 u32 VAR_9 =
  FUNC_0(VAR_6->lr_status_evt_portid);
 u8 VAR_10 = VAR_6->sas_identify.dev_type;
 u8 VAR_11 = (u8)((VAR_9 & 0xF0000000) >> 28);
 struct pm8001_phy *VAR_12 = &VAR_4->phy[VAR_8];
 u8 VAR_13 = (u8)(VAR_9 & 0x000000FF);
 struct pm8001_port *VAR_14 = &VAR_4->port[VAR_13];

 if (VAR_10 == VAR_2) {
  FUNC_2(VAR_4, VAR_8,
     VAR_0);
 }

 VAR_14->wide_port_phymap |= (1U << VAR_8);
 FUNC_1(VAR_12, VAR_11);
 VAR_12->sas_phy.oob_mode = VAR_3;
 VAR_12->phy_state = VAR_1;
 VAR_12->phy_attached = 1;
}
