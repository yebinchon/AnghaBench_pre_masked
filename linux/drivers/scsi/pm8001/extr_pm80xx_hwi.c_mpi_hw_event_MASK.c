
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sas_ha_struct {int (* notify_phy_event ) (struct asd_sas_phy*,int ) ;int (* notify_port_event ) (struct asd_sas_phy*,int ) ;struct asd_sas_phy** sas_phy; } ;
struct pm8001_port {int wide_port_phymap; } ;
struct asd_sas_phy {int sas_prim; int sas_prim_lock; } ;
struct pm8001_phy {int * reset_completion; int port_reset_status; struct asd_sas_phy sas_phy; int phy_attached; int phy_state; } ;
struct pm8001_hba_info {struct pm8001_phy* phy; TYPE_1__* chip; int reset_in_progress; struct pm8001_port* port; struct sas_ha_struct* sas; } ;
struct hw_event_resp {int phyid_npip_portstate; int lr_status_evt_portid; } ;
struct TYPE_2__ {unsigned long n_phy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pm8001_hba_info*,void*) ;
 int FUNC_3 (struct pm8001_hba_info*,void*) ;
 int FUNC_4 (struct pm8001_hba_info*,void*) ;
 int FUNC_5 (struct pm8001_hba_info*,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,int ,int const,size_t,size_t,int,int ) ;
 int FUNC_9 (struct asd_sas_phy*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct asd_sas_phy*,int ) ;
 int FUNC_13 (struct asd_sas_phy*,int ) ;
 int FUNC_14 (struct asd_sas_phy*,int ) ;
 int FUNC_15 (struct asd_sas_phy*,int ) ;
 int FUNC_16 (struct asd_sas_phy*,int ) ;
 int FUNC_17 (struct asd_sas_phy*,int ) ;
 int FUNC_18 (struct asd_sas_phy*,int ) ;
 int FUNC_19 (struct asd_sas_phy*,int ) ;
 int FUNC_20 (struct asd_sas_phy*,int ) ;
 int FUNC_21 (struct asd_sas_phy*,int ) ;
 int FUNC_22 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static int FUNC_23(struct pm8001_hba_info *VAR_9, void *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 struct hw_event_resp *VAR_13 =
  (struct hw_event_resp *)(VAR_10 + 4);
 u32 VAR_14 =
  FUNC_6(VAR_13->lr_status_evt_portid);
 u32 VAR_15 = FUNC_6(VAR_13->phyid_npip_portstate);
 u8 VAR_16 = (u8)(VAR_14 & 0x000000FF);
 u8 VAR_17 =
  (u8)((VAR_15 & 0xFF0000) >> 16);
 u16 VAR_18 =
  (u16)((VAR_14 & 0x00FFFF00) >> 8);
 u8 VAR_19 =
  (u8)((VAR_14 & 0x0F000000) >> 24);
 struct sas_ha_struct *VAR_20 = VAR_9->sas;
 struct pm8001_phy *VAR_21 = &VAR_9->phy[VAR_17];
 struct pm8001_port *VAR_22 = &VAR_9->port[VAR_16];
 struct asd_sas_phy *VAR_23 = VAR_20->sas_phy[VAR_17];
 FUNC_0(VAR_9,
  FUNC_7("portid:%d phyid:%d event:0x%x status:0x%x\n",
    VAR_16, VAR_17, VAR_18, VAR_19));

 switch (VAR_18) {

 case 130:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PHY_START_STATUS\n"));
  FUNC_4(VAR_9, VAR_10);
  break;
 case 129:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_SATA_PHY_UP\n"));
  FUNC_5(VAR_9, VAR_10);
  break;
 case 128:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_SATA_SPINUP_HOLD\n"));
  VAR_20->notify_phy_event(&VAR_21->sas_phy, VAR_2);
  break;
 case 137:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PHY_DOWN\n"));
  FUNC_2(VAR_9, VAR_10);
  if (VAR_9->reset_in_progress) {
   FUNC_0(VAR_9,
    FUNC_7("Reset in progress\n"));
   return 0;
  }
  VAR_21->phy_attached = 0;
  VAR_21->phy_state = VAR_3;
  break;
 case 135:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PORT_INVALID\n"));
  FUNC_9(VAR_23);
  VAR_21->phy_attached = 0;
  VAR_20->notify_port_event(VAR_23, VAR_6);
  break;


 case 149:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_BROADCAST_CHANGE\n"));
  FUNC_8(VAR_9, 0, 149,
   VAR_16, VAR_17, 1, 0);
  FUNC_10(&VAR_23->sas_prim_lock, VAR_11);
  VAR_23->sas_prim = 149;
  FUNC_11(&VAR_23->sas_prim_lock, VAR_11);
  VAR_20->notify_port_event(VAR_23, VAR_4);
  break;
 case 136:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PHY_ERROR\n"));
  FUNC_9(&VAR_21->sas_phy);
  VAR_21->phy_attached = 0;
  VAR_20->notify_phy_event(&VAR_21->sas_phy, VAR_1);
  break;
 case 148:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_BROADCAST_EXP\n"));
  FUNC_10(&VAR_23->sas_prim_lock, VAR_11);
  VAR_23->sas_prim = 148;
  FUNC_11(&VAR_23->sas_prim_lock, VAR_11);
  VAR_20->notify_port_event(VAR_23, VAR_4);
  break;
 case 141:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_LINK_ERR_INVALID_DWORD\n"));
  FUNC_8(VAR_9, 0,
   141, VAR_16, VAR_17, 0, 0);
  break;
 case 142:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_LINK_ERR_DISPARITY_ERROR\n"));
  FUNC_8(VAR_9, 0,
   142,
   VAR_16, VAR_17, 0, 0);
  break;
 case 143:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_LINK_ERR_CODE_VIOLATION\n"));
  FUNC_8(VAR_9, 0,
   143,
   VAR_16, VAR_17, 0, 0);
  break;
 case 140:
  FUNC_0(VAR_9, FUNC_7(
    "HW_EVENT_LINK_ERR_LOSS_OF_DWORD_SYNCH\n"));
  FUNC_8(VAR_9, 0,
   140,
   VAR_16, VAR_17, 0, 0);
  break;
 case 138:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_MALFUNCTION\n"));
  break;
 case 147:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_BROADCAST_SES\n"));
  FUNC_10(&VAR_23->sas_prim_lock, VAR_11);
  VAR_23->sas_prim = 147;
  FUNC_11(&VAR_23->sas_prim_lock, VAR_11);
  VAR_20->notify_port_event(VAR_23, VAR_4);
  break;
 case 144:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_INBOUND_CRC_ERROR\n"));
  FUNC_8(VAR_9, 0,
   144,
   VAR_16, VAR_17, 0, 0);
  break;
 case 146:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_HARD_RESET_RECEIVED\n"));
  VAR_20->notify_port_event(VAR_23, VAR_5);
  break;
 case 145:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_ID_FRAME_TIMEOUT\n"));
  FUNC_9(VAR_23);
  VAR_21->phy_attached = 0;
  VAR_20->notify_port_event(VAR_23, VAR_6);
  break;
 case 139:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_LINK_ERR_PHY_RESET_FAILED\n"));
  FUNC_8(VAR_9, 0,
   139,
   VAR_16, VAR_17, 0, 0);
  FUNC_9(VAR_23);
  VAR_21->phy_attached = 0;
  VAR_20->notify_port_event(VAR_23, VAR_6);
  break;
 case 131:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PORT_RESET_TIMER_TMO\n"));
  FUNC_8(VAR_9, 0, 137,
   VAR_16, VAR_17, 0, 0);
  FUNC_9(VAR_23);
  VAR_21->phy_attached = 0;
  VAR_20->notify_port_event(VAR_23, VAR_6);
  if (VAR_9->phy[VAR_17].reset_completion) {
   VAR_9->phy[VAR_17].port_reset_status =
     VAR_8;
   FUNC_1(VAR_9->phy[VAR_17].reset_completion);
   VAR_9->phy[VAR_17].reset_completion = ((void*)0);
  }
  break;
 case 133:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PORT_RECOVERY_TIMER_TMO\n"));
  FUNC_8(VAR_9, 0,
   133,
   VAR_16, VAR_17, 0, 0);
  for (VAR_12 = 0; VAR_12 < VAR_9->chip->n_phy; VAR_12++) {
   if (VAR_22->wide_port_phymap & (1 << VAR_12)) {
    VAR_21 = &VAR_9->phy[VAR_12];
    VAR_20->notify_phy_event(&VAR_21->sas_phy,
      VAR_0);
    VAR_22->wide_port_phymap &= ~(1 << VAR_12);
   }
  }
  break;
 case 134:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PORT_RECOVER\n"));
  FUNC_3(VAR_9, VAR_10);
  break;
 case 132:
  FUNC_0(VAR_9,
   FUNC_7("HW_EVENT_PORT_RESET_COMPLETE\n"));
  if (VAR_9->phy[VAR_17].reset_completion) {
   VAR_9->phy[VAR_17].port_reset_status =
     VAR_7;
   FUNC_1(VAR_9->phy[VAR_17].reset_completion);
   VAR_9->phy[VAR_17].reset_completion = ((void*)0);
  }
  break;
 case 150:
  FUNC_0(VAR_9,
   FUNC_7("EVENT_BROADCAST_ASYNCH_EVENT\n"));
  break;
 default:
  FUNC_0(VAR_9,
   FUNC_7("Unknown event type 0x%x\n", VAR_18));
  break;
 }
 return 0;
}
