
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fw_port_app_priority {int idx; int protocolid; int sel_field; int user_prio_map; } ;
struct TYPE_12__ {int max_pfc_tcs; int pfcen; } ;
struct TYPE_11__ {int strict_priorate; } ;
struct TYPE_10__ {int tsa; int pgrate; int num_tcs_supported; } ;
struct TYPE_9__ {int type; int pgid; } ;
struct TYPE_7__ {int all_syncd_pkd; int dcb_version_to_app_state; } ;
union fw_port_dcb {struct fw_port_app_priority app_priority; TYPE_6__ pfc; TYPE_5__ priorate; TYPE_4__ pgrate; TYPE_3__ pgid; TYPE_1__ control; } ;
struct port_dcb_info {int dcb_version; scalar_t__ state; int msgs; struct app_priority* app_priority; int pfc_num_tcs_supported; int pfcen; int priorate; int tsa; int pgrate; int pg_num_tcs_supported; int pgid; } ;
struct port_info {struct port_dcb_info dcb; } ;
struct net_device {int name; } ;
struct TYPE_8__ {union fw_port_dcb dcb; } ;
struct fw_port_cmd {TYPE_2__ u; int op_to_portid; } ;
struct dcb_app {int selector; int priority; int protocol; } ;
struct app_priority {int protocolid; int sel_field; int user_prio_map; } ;
struct adapter {size_t* chan_map; int pdev_dev; struct net_device** port; } ;
typedef enum cxgb4_dcb_state_input { ____Placeholder_cxgb4_dcb_state_input } cxgb4_dcb_state_input ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_device*,struct port_dcb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,struct dcb_app*) ;
 int FUNC_7 (struct net_device*,struct dcb_app*) ;
 int * VAR_14 ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int) ;
 struct port_info* FUNC_12 (struct net_device*) ;

void FUNC_13(struct adapter *VAR_15,
    const struct fw_port_cmd *VAR_16)
{
 const union fw_port_dcb *VAR_17 = &VAR_16->u.dcb;
 int VAR_18 = FUNC_1(FUNC_4(VAR_16->op_to_portid));
 struct net_device *VAR_19 = VAR_15->port[VAR_15->chan_map[VAR_18]];
 struct port_info *VAR_20 = FUNC_12(VAR_19);
 struct port_dcb_info *VAR_21 = &VAR_20->dcb;
 int VAR_22 = VAR_16->u.dcb.pgid.type;
 int VAR_23;




 if (VAR_22 == VAR_10) {
  enum cxgb4_dcb_state_input VAR_24 =
   ((VAR_16->u.dcb.control.all_syncd_pkd &
     VAR_9)
    ? VAR_5
    : VAR_6);

  if (VAR_21->dcb_version != VAR_13) {
   VAR_23 = FUNC_0(
    FUNC_3(
    VAR_16->u.dcb.control.dcb_version_to_app_state));
   if (VAR_23 == VAR_11 ||
       VAR_23 == VAR_12) {
    VAR_21->dcb_version = VAR_23;
    FUNC_9(VAR_15->pdev_dev, "Interface %s is running %s\n",
      VAR_19->name,
      VAR_14[VAR_21->dcb_version]);
   } else {
    FUNC_9(VAR_15->pdev_dev,
      "Something screwed up, requested firmware for %s, but firmware returned %s instead\n",
      VAR_14[VAR_21->dcb_version],
      VAR_14[VAR_23]);
    VAR_21->dcb_version = VAR_13;
   }
  }

  FUNC_5(VAR_19, VAR_24);
  return;
 }






 if (VAR_21->state == VAR_8 ||
     VAR_21->state == VAR_7) {
  FUNC_8(VAR_15->pdev_dev, "Receiving Firmware DCB messages in State %d\n",
   VAR_21->state);
  return;
 }



 switch (VAR_22) {
 case 130:
  VAR_21->pgid = FUNC_4(VAR_17->pgid.pgid);
  VAR_21->msgs |= VAR_2;
  break;

 case 129:
  VAR_21->pg_num_tcs_supported = VAR_17->pgrate.num_tcs_supported;
  FUNC_11(VAR_21->pgrate, &VAR_17->pgrate.pgrate,
         sizeof(VAR_21->pgrate));
  FUNC_11(VAR_21->tsa, &VAR_17->pgrate.tsa,
         sizeof(VAR_21->tsa));
  VAR_21->msgs |= VAR_3;
  if (VAR_21->msgs & VAR_2)
   FUNC_2(VAR_19, VAR_21);
  break;

 case 128:
  FUNC_11(VAR_21->priorate, &VAR_17->priorate.strict_priorate,
         sizeof(VAR_21->priorate));
  VAR_21->msgs |= VAR_4;
  break;

 case 131:
  VAR_21->pfcen = VAR_17->pfc.pfcen;
  VAR_21->pfc_num_tcs_supported = VAR_17->pfc.max_pfc_tcs;
  VAR_21->msgs |= VAR_1;
  FUNC_2(VAR_19, VAR_21);
  break;

 case 132: {
  const struct fw_port_app_priority *VAR_25 = &VAR_17->app_priority;
  int VAR_26 = VAR_25->idx;
  struct app_priority *VAR_27 = &VAR_21->app_priority[VAR_26];

  struct dcb_app VAR_28 = {
   .protocol = FUNC_3(VAR_25->protocolid),
  };
  int VAR_29;




  if (VAR_21->dcb_version == VAR_12) {
   VAR_28.selector = (VAR_25->sel_field + 1);
   VAR_28.priority = FUNC_10(VAR_25->user_prio_map) - 1;
   VAR_29 = FUNC_6(VAR_19, &VAR_28);
   FUNC_2(VAR_19, VAR_21);
  } else {

   VAR_28.selector = !!(VAR_25->sel_field);
   VAR_28.priority = VAR_25->user_prio_map;
   VAR_29 = FUNC_7(VAR_19, &VAR_28);
  }

  if (VAR_29)
   FUNC_8(VAR_15->pdev_dev,
    "Failed DCB Set Application Priority: sel=%d, prot=%d, prio=%d, err=%d\n",
    VAR_28.selector, VAR_28.protocol, VAR_28.priority, -VAR_29);

  VAR_27->user_prio_map = VAR_25->user_prio_map;
  VAR_27->sel_field = VAR_25->sel_field;
  VAR_27->protocolid = FUNC_3(VAR_25->protocolid);
  VAR_21->msgs |= VAR_0;
  break;
 }

 default:
  FUNC_8(VAR_15->pdev_dev, "Unknown DCB update type received %x\n",
   VAR_22);
  break;
 }
}
