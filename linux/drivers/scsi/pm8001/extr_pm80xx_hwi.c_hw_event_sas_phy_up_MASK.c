
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sas_identify_frame {int dummy; } ;
struct sas_ha_struct {int (* notify_phy_event ) (TYPE_2__*,int ) ;} ;
struct pm8001_port {size_t port_state; unsigned int wide_port_phymap; int port_attached; } ;
struct TYPE_5__ {int frame_rcvd_lock; int attached_sas_addr; int oob_mode; } ;
struct TYPE_4__ {size_t device_type; int target_port_protocols; } ;
struct pm8001_phy {int phy_attached; int frame_rcvd_size; TYPE_2__ sas_phy; int frame_rcvd; TYPE_1__ identify; int phy_type; int phy_state; } ;
struct pm8001_hba_info {scalar_t__ flags; struct pm8001_phy* phy; struct sas_ha_struct* sas; struct pm8001_port* port; } ;
struct TYPE_6__ {size_t dev_type; } ;
struct hw_event_resp {TYPE_3__ sas_identify; int phyid_npip_portstate; int lr_status_evt_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 int FUNC_4 (struct pm8001_hba_info*,size_t) ;
 int FUNC_5 (struct pm8001_phy*,int ) ;
 int FUNC_6 (struct pm8001_phy*,size_t) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,size_t,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_12(struct pm8001_hba_info *VAR_8, void *VAR_9)
{
 struct hw_event_resp *VAR_10 =
  (struct hw_event_resp *)(VAR_9 + 4);
 u32 VAR_11 =
  FUNC_1(VAR_10->lr_status_evt_portid);
 u32 VAR_12 = FUNC_1(VAR_10->phyid_npip_portstate);

 u8 VAR_13 =
  (u8)((VAR_11 & 0xF0000000) >> 28);
 u8 VAR_14 = (u8)(VAR_11 & 0x000000FF);
 u8 VAR_15 =
  (u8)((VAR_12 & 0xFF0000) >> 16);
 u8 VAR_16 = (u8)(VAR_12 & 0x0000000F);

 struct pm8001_port *VAR_17 = &VAR_8->port[VAR_14];
 struct sas_ha_struct *VAR_18 = VAR_8->sas;
 struct pm8001_phy *VAR_19 = &VAR_8->phy[VAR_15];
 unsigned long VAR_20;
 u8 VAR_21 = VAR_10->sas_identify.dev_type;
 VAR_17->port_state = VAR_16;
 VAR_17->wide_port_phymap |= (1U << VAR_15);
 VAR_19->phy_state = VAR_2;
 FUNC_0(VAR_8, FUNC_7(
  "portid:%d; phyid:%d; linkrate:%d; "
  "portstate:%x; devicetype:%x\n",
  VAR_14, VAR_15, VAR_13, VAR_16, VAR_21));

 switch (VAR_21) {
 case 128:
  FUNC_0(VAR_8,
   FUNC_7("device type no device.\n"));
  break;
 case 130:
  FUNC_0(VAR_8, FUNC_7("end device.\n"));
  FUNC_8(VAR_8, VAR_15,
   VAR_1);
  VAR_17->port_attached = 1;
  FUNC_6(VAR_19, VAR_13);
  break;
 case 131:
  FUNC_0(VAR_8,
   FUNC_7("expander device.\n"));
  VAR_17->port_attached = 1;
  FUNC_6(VAR_19, VAR_13);
  break;
 case 129:
  FUNC_0(VAR_8,
   FUNC_7("fanout expander device.\n"));
  VAR_17->port_attached = 1;
  FUNC_6(VAR_19, VAR_13);
  break;
 default:
  FUNC_0(VAR_8,
   FUNC_7("unknown device type(%x)\n", VAR_21));
  break;
 }
 VAR_19->phy_type |= VAR_4;
 VAR_19->identify.device_type = VAR_21;
 VAR_19->phy_attached = 1;
 if (VAR_19->identify.device_type == 130)
  VAR_19->identify.target_port_protocols = VAR_7;
 else if (VAR_19->identify.device_type != 128)
  VAR_19->identify.target_port_protocols = VAR_6;
 VAR_19->sas_phy.oob_mode = VAR_5;
 VAR_18->notify_phy_event(&VAR_19->sas_phy, VAR_0);
 FUNC_9(&VAR_19->sas_phy.frame_rcvd_lock, VAR_20);
 FUNC_3(VAR_19->frame_rcvd, &VAR_10->sas_identify,
  sizeof(struct sas_identify_frame)-4);
 VAR_19->frame_rcvd_size = sizeof(struct sas_identify_frame) - 4;
 FUNC_5(VAR_19, VAR_19->sas_phy.attached_sas_addr);
 FUNC_10(&VAR_19->sas_phy.frame_rcvd_lock, VAR_20);
 if (VAR_8->flags == VAR_3)
  FUNC_2(200);
 FUNC_4(VAR_8, VAR_15);
}
