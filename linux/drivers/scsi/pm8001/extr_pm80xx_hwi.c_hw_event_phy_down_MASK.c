
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sas_ha_struct {int (* notify_phy_event ) (int *,int ) ;} ;
struct pm8001_port {size_t port_state; int port_attached; } ;
struct TYPE_2__ {scalar_t__ device_type; } ;
struct pm8001_phy {int phy_type; int sas_phy; scalar_t__ phy_attached; TYPE_1__ identify; } ;
struct pm8001_hba_info {struct sas_ha_struct* sas; struct pm8001_phy* phy; struct pm8001_port* port; } ;
struct hw_event_resp {int phyid_npip_portstate; int lr_status_evt_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;




 int VAR_2 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct pm8001_hba_info*,int ,int ,size_t,size_t,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct pm8001_hba_info *VAR_3, void *VAR_4)
{
 struct hw_event_resp *VAR_5 =
  (struct hw_event_resp *)(VAR_4 + 4);

 u32 VAR_6 =
  FUNC_1(VAR_5->lr_status_evt_portid);
 u8 VAR_7 = (u8)(VAR_6 & 0x000000FF);
 u32 VAR_8 = FUNC_1(VAR_5->phyid_npip_portstate);
 u8 VAR_9 =
  (u8)((VAR_8 & 0xFF0000) >> 16);
 u8 VAR_10 = (u8)(VAR_8 & 0x0000000F);

 struct pm8001_port *VAR_11 = &VAR_3->port[VAR_7];
 struct pm8001_phy *VAR_12 = &VAR_3->phy[VAR_9];
 u32 VAR_13 = (VAR_12->phy_type & VAR_2);
 VAR_11->port_state = VAR_10;
 VAR_12->identify.device_type = 0;
 VAR_12->phy_attached = 0;
 switch (VAR_10) {
 case 128:
  break;
 case 132:
  FUNC_0(VAR_3,
   FUNC_2(" PortInvalid portID %d\n", VAR_7));
  FUNC_0(VAR_3,
   FUNC_2(" Last phy Down and port invalid\n"));
  if (VAR_13) {
   VAR_12->phy_type = 0;
   VAR_11->port_attached = 0;
   FUNC_3(VAR_3, 0, VAR_0,
     VAR_7, VAR_9, 0, 0);
  }
  FUNC_4(&VAR_12->sas_phy);
  break;
 case 131:
  FUNC_0(VAR_3,
   FUNC_2(" Port In Reset portID %d\n", VAR_7));
  break;
 case 129:
  FUNC_0(VAR_3,
   FUNC_2(" Phy Down and PORT_NOT_ESTABLISHED\n"));
  VAR_11->port_attached = 0;
  break;
 case 130:
  FUNC_0(VAR_3,
   FUNC_2(" Phy Down and PORT_LOSTCOMM\n"));
  FUNC_0(VAR_3,
   FUNC_2(" Last phy Down and port invalid\n"));
  if (VAR_13) {
   VAR_11->port_attached = 0;
   VAR_12->phy_type = 0;
   FUNC_3(VAR_3, 0, VAR_0,
     VAR_7, VAR_9, 0, 0);
  }
  FUNC_4(&VAR_12->sas_phy);
  break;
 default:
  VAR_11->port_attached = 0;
  FUNC_0(VAR_3,
   FUNC_2(" Phy Down and(default) = 0x%x\n",
   VAR_10));
  break;

 }
 if (VAR_13 && (VAR_10 != 131)) {
  struct sas_ha_struct *VAR_14 = VAR_3->sas;

  VAR_14->notify_phy_event(&VAR_12->sas_phy, VAR_1);
 }
}
