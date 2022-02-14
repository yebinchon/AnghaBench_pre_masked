
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct discover_resp {int linkrate; int iproto; int tproto; scalar_t__ attached_sata_dev; int pmax_linkrate; int pmin_linkrate; int hmax_linkrate; int hmin_linkrate; int attached_dev_type; int virtual; int routing_attr; int change_count; int attached_phy_id; int * attached_sas_addr; int attached_sata_ps; int attached_sata_host; } ;
struct smp_resp {int result; struct discover_resp disc; } ;
struct sas_rphy {int dev; } ;
struct sas_ha_struct {int state; } ;
struct expander_device {struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; int attached_dev_type; int linkrate; int phy_id; int attached_iproto; int attached_tproto; int last_da_index; int * attached_sas_addr; TYPE_4__* phy; int virtual; int routing_attr; int phy_change_count; int attached_phy_id; int attached_sata_ps; scalar_t__ attached_sata_dev; int attached_sata_host; } ;
struct domain_device {int * sas_addr; TYPE_2__* port; struct sas_rphy* rphy; struct expander_device ex_dev; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
typedef enum sas_device_type { ____Placeholder_sas_device_type } sas_device_type ;
struct TYPE_9__ {int initiator_port_protocols; int target_port_protocols; int phy_identifier; int device_type; scalar_t__ sas_address; } ;
struct TYPE_10__ {scalar_t__ negotiated_linkrate; int enabled; int maximum_linkrate; int minimum_linkrate; int maximum_linkrate_hw; int minimum_linkrate_hw; TYPE_3__ identify; } ;
struct TYPE_7__ {int pending; } ;
struct TYPE_8__ {TYPE_1__ disc; struct sas_ha_struct* ha; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;



 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 int VAR_8 ;



 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,char*,scalar_t__,int,int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct domain_device*,struct ex_phy*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct discover_resp*) ;

__attribute__((used)) static void FUNC_13(struct domain_device *VAR_9, int VAR_10, void *VAR_11)
{
 enum sas_device_type VAR_12;
 enum sas_linkrate VAR_13;
 u8 VAR_14[VAR_4];
 struct smp_resp *VAR_15 = VAR_11;
 struct discover_resp *VAR_16 = &VAR_15->disc;
 struct sas_ha_struct *VAR_17 = VAR_9->port->ha;
 struct expander_device *VAR_18 = &VAR_9->ex_dev;
 struct ex_phy *VAR_19 = &VAR_18->ex_phy[VAR_10];
 struct sas_rphy *VAR_20 = VAR_9->rphy;
 bool VAR_21 = !VAR_19->phy;
 char *VAR_22;

 if (VAR_21) {
  if (FUNC_2(FUNC_11(VAR_5, &VAR_17->state)))
   return;
  VAR_19->phy = FUNC_7(&VAR_20->dev, VAR_10);


  FUNC_0(!VAR_19->phy);
 }

 switch (VAR_15->result) {
 case 128:
  VAR_19->phy_state = VAR_3;
  break;
 default:
  VAR_19->phy_state = VAR_2;
  break;
 case 129:
  VAR_19->phy_state = VAR_1;
  break;
 }


 VAR_12 = VAR_19->attached_dev_type;
 VAR_13 = VAR_19->linkrate;
 FUNC_3(VAR_14, VAR_19->attached_sas_addr, VAR_4);


 if (VAR_19->phy_state == VAR_3) {
  FUNC_4(VAR_19->attached_sas_addr, 0, VAR_4);
  VAR_19->attached_dev_type = 131;
  if (!FUNC_11(VAR_5, &VAR_17->state)) {
   VAR_19->phy_id = VAR_10;
   goto skip;
  } else
   goto out;
 }

 VAR_19->attached_dev_type = FUNC_12(VAR_16);
 if (FUNC_11(VAR_5, &VAR_17->state))
  goto out;
 VAR_19->phy_id = VAR_10;
 VAR_19->linkrate = VAR_16->linkrate;
 VAR_19->attached_sata_host = VAR_16->attached_sata_host;
 VAR_19->attached_sata_dev = VAR_16->attached_sata_dev;
 VAR_19->attached_sata_ps = VAR_16->attached_sata_ps;
 VAR_19->attached_iproto = VAR_16->iproto << 1;
 VAR_19->attached_tproto = VAR_16->tproto << 1;



 if (VAR_19->attached_dev_type == 131 ||
     VAR_19->linkrate < VAR_6)
  FUNC_4(VAR_19->attached_sas_addr, 0, VAR_4);
 else
  FUNC_3(VAR_19->attached_sas_addr, VAR_16->attached_sas_addr, VAR_4);
 VAR_19->attached_phy_id = VAR_16->attached_phy_id;
 VAR_19->phy_change_count = VAR_16->change_count;
 VAR_19->routing_attr = VAR_16->routing_attr;
 VAR_19->virtual = VAR_16->virtual;
 VAR_19->last_da_index = -1;

 VAR_19->phy->identify.sas_address = FUNC_1(VAR_19->attached_sas_addr);
 VAR_19->phy->identify.device_type = VAR_16->attached_dev_type;
 VAR_19->phy->identify.initiator_port_protocols = VAR_19->attached_iproto;
 VAR_19->phy->identify.target_port_protocols = VAR_19->attached_tproto;
 if (!VAR_19->attached_tproto && VAR_16->attached_sata_dev)
  VAR_19->phy->identify.target_port_protocols = VAR_8;
 VAR_19->phy->identify.phy_identifier = VAR_10;
 VAR_19->phy->minimum_linkrate_hw = VAR_16->hmin_linkrate;
 VAR_19->phy->maximum_linkrate_hw = VAR_16->hmax_linkrate;
 VAR_19->phy->minimum_linkrate = VAR_16->pmin_linkrate;
 VAR_19->phy->maximum_linkrate = VAR_16->pmax_linkrate;
 VAR_19->phy->negotiated_linkrate = VAR_19->linkrate;
 VAR_19->phy->enabled = (VAR_19->linkrate != VAR_7);

 skip:
 if (VAR_21)
  if (FUNC_6(VAR_19->phy)) {
   FUNC_8(VAR_19->phy);
   return;
  }

 out:
 switch (VAR_19->attached_dev_type) {
 case 130:
  VAR_22 = "stp pending";
  break;
 case 131:
  VAR_22 = "no device";
  break;
 case 133:
  if (VAR_19->attached_iproto) {
   if (VAR_19->attached_tproto)
    VAR_22 = "host+target";
   else
    VAR_22 = "host";
  } else {
   if (VAR_16->attached_sata_dev)
    VAR_22 = "stp";
   else
    VAR_22 = "ssp";
  }
  break;
 case 134:
 case 132:
  VAR_22 = "smp";
  break;
 default:
  VAR_22 = "unknown";
 }




 if (VAR_21 || VAR_19->attached_dev_type != VAR_12 ||
     VAR_19->linkrate != VAR_13 ||
     FUNC_1(VAR_19->attached_sas_addr) != FUNC_1(VAR_14))
            ;
 else
  return;





 if (FUNC_11(VAR_5, &VAR_17->state))
  FUNC_10(VAR_0, &VAR_9->port->disc.pending);

 FUNC_5("%sex %016llx phy%02d:%c:%X attached: %016llx (%s)\n",
   FUNC_11(VAR_5, &VAR_17->state) ? "ata: " : "",
   FUNC_1(VAR_9->sas_addr), VAR_19->phy_id,
   FUNC_9(VAR_9, VAR_19), VAR_19->linkrate,
   FUNC_1(VAR_19->attached_sas_addr), VAR_22);
}
