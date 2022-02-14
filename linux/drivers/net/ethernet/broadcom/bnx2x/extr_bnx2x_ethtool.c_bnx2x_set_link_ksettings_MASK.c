
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ duplex; int speed; scalar_t__ port; int autoneg; int phy_address; int cmd; } ;
struct TYPE_10__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_4__ base; TYPE_3__ link_modes; } ;
struct TYPE_14__ {int multi_phy_config; int* req_line_speed; scalar_t__* req_duplex; TYPE_1__* phy; int * speed_cap_mask; } ;
struct TYPE_9__ {int* supported; int* advertising; } ;
struct TYPE_13__ {scalar_t__ bc_ver; } ;
struct TYPE_12__ {int line_speed; } ;
struct bnx2x {scalar_t__ state; int pending_max; TYPE_7__ link_params; TYPE_2__ port; TYPE_6__ common; TYPE_5__ link_vars; } ;
struct TYPE_8__ {scalar_t__ type; int media_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;


 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;


 scalar_t__ VAR_35 ;





 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*,int) ;
 int FUNC_10 (int*,int ) ;
 struct bnx2x* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_50,
        const struct ethtool_link_ksettings *VAR_51)
{
 struct bnx2x *VAR_52 = FUNC_11(VAR_50);
 u32 VAR_53, VAR_54, VAR_55, VAR_56;
 u32 VAR_57, VAR_58;
 u32 VAR_59;
 u8 VAR_60 = VAR_51->base.duplex;

 FUNC_10(&VAR_59,
      VAR_51->link_modes.supported);
 FUNC_10(&VAR_53,
      VAR_51->link_modes.advertising);

 if (FUNC_1(VAR_52))
  return 0;

 FUNC_0(VAR_16, "ethtool_cmd: cmd %d\n"
    "  supported 0x%x  advertising 0x%x  speed %u\n"
    "  duplex %d  port %d  phy_address %d\n"
    "  autoneg %d\n",
    VAR_51->base.cmd, VAR_59, VAR_53,
    VAR_51->base.speed,
    VAR_51->base.duplex, VAR_51->base.port, VAR_51->base.phy_address,
    VAR_51->base.autoneg);

 VAR_57 = VAR_51->base.speed;


 if (VAR_60 == VAR_19)
  VAR_60 = VAR_18;

 if (FUNC_2(VAR_52)) {
  u32 VAR_61;
  u32 VAR_62 = VAR_52->link_vars.line_speed;


  if (!VAR_62)
   VAR_62 = 10000;

  if (VAR_52->common.bc_ver < VAR_35) {
   FUNC_0(VAR_16,
      "To set speed BC %X or higher is required, please upgrade BC\n",
      VAR_35);
   return -VAR_20;
  }

  VAR_61 = (VAR_57 * 100) / VAR_62;

  if (VAR_62 < VAR_57 || !VAR_61) {
   FUNC_0(VAR_16,
      "Speed setting should be in a range from 1%% to 100%% of actual line speed\n");
   return -VAR_20;
  }

  if (VAR_52->state != VAR_17)

   VAR_52->pending_max = VAR_61;
  else
   FUNC_9(VAR_52, VAR_61);

  return 0;
 }

 VAR_54 = FUNC_5(VAR_52);
 VAR_55 = VAR_52->link_params.multi_phy_config;
 if (VAR_51->base.port != FUNC_6(VAR_52)) {
  switch (VAR_51->base.port) {
  case 133:
   if (!(VAR_52->port.supported[0] & VAR_49 ||
         VAR_52->port.supported[1] & VAR_49)) {
    FUNC_0(VAR_16,
       "Unsupported port type\n");
    return -VAR_20;
   }
   VAR_52->link_params.multi_phy_config &=
    ~VAR_24;
   if (VAR_52->link_params.multi_phy_config &
       VAR_26)
    VAR_52->link_params.multi_phy_config |=
    VAR_25;
   else
    VAR_52->link_params.multi_phy_config |=
    VAR_23;
   break;
  case 135:
  case 136:
  case 134:
   if (!(VAR_52->port.supported[0] & VAR_48 ||
         VAR_52->port.supported[1] & VAR_48)) {
    FUNC_0(VAR_16,
       "Unsupported port type\n");
    return -VAR_20;
   }
   VAR_52->link_params.multi_phy_config &=
    ~VAR_24;
   if (VAR_52->link_params.multi_phy_config &
       VAR_26)
    VAR_52->link_params.multi_phy_config |=
    VAR_23;
   else
    VAR_52->link_params.multi_phy_config |=
    VAR_25;
   break;
  default:
   FUNC_0(VAR_16, "Unsupported port type\n");
   return -VAR_20;
  }
 }

 VAR_56 = VAR_52->link_params.multi_phy_config;

 VAR_54 = FUNC_5(VAR_52);

 VAR_52->link_params.multi_phy_config = VAR_55;
 FUNC_0(VAR_16, "cfg_idx = %x\n", VAR_54);

 if (VAR_51->base.autoneg == VAR_15) {
  u32 VAR_63 = VAR_52->port.supported[VAR_54];
  if (VAR_52->link_params.phy[VAR_22].type ==
      VAR_34)
   VAR_63 |= (VAR_43 |
            VAR_42);
  if (!(VAR_52->port.supported[VAR_54] & VAR_47)) {
   FUNC_0(VAR_16, "Autoneg not supported\n");
   return -VAR_20;
  }


  if (VAR_53 & ~VAR_63) {
   FUNC_0(VAR_16,
      "Advertisement parameters are not supported\n");
   return -VAR_20;
  }

  VAR_52->link_params.req_line_speed[VAR_54] = VAR_36;
  VAR_52->link_params.req_duplex[VAR_54] = VAR_60;
  VAR_52->port.advertising[VAR_54] = (VAR_12 |
      VAR_53);
  if (VAR_53) {

   VAR_52->link_params.speed_cap_mask[VAR_54] = 0;
   if (VAR_53 & VAR_9) {
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
    VAR_31;
   }
   if (VAR_53 & VAR_8)
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
    VAR_30;

   if (VAR_53 & VAR_6)
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
    VAR_27;

   if (VAR_53 & VAR_7) {
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
         VAR_28;
   }
   if (VAR_53 & VAR_5) {
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
     VAR_32;
   }
   if (VAR_53 & (VAR_4 |
      VAR_3))
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
     VAR_32;

   if (VAR_53 & (VAR_2 |
      VAR_1 |
      VAR_0))
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
     VAR_29;

   if (VAR_53 & VAR_10)
    VAR_52->link_params.speed_cap_mask[VAR_54] |=
     VAR_33;
  }
 } else {

  switch (VAR_57) {
  case 132:
   if (VAR_60 == VAR_18) {
    if (!(VAR_52->port.supported[VAR_54] &
          VAR_44)) {
     FUNC_0(VAR_16,
        "10M full not supported\n");
     return -VAR_20;
    }

    VAR_53 = (VAR_8 |
            VAR_14);
   } else {
    if (!(VAR_52->port.supported[VAR_54] &
          VAR_45)) {
     FUNC_0(VAR_16,
        "10M half not supported\n");
     return -VAR_20;
    }

    VAR_53 = (VAR_9 |
            VAR_14);
   }
   break;

  case 131:
   if (VAR_60 == VAR_18) {
    if (!(VAR_52->port.supported[VAR_54] &
      VAR_42)) {
     FUNC_0(VAR_16,
        "100M full not supported\n");
     return -VAR_20;
    }

    VAR_53 = (VAR_6 |
            VAR_14);
   } else {
    if (!(VAR_52->port.supported[VAR_54] &
      VAR_43)) {
     FUNC_0(VAR_16,
        "100M half not supported\n");
     return -VAR_20;
    }

    VAR_53 = (VAR_7 |
            VAR_14);
   }
   break;

  case 130:
   if (VAR_60 != VAR_18) {
    FUNC_0(VAR_16,
       "1G half not supported\n");
    return -VAR_20;
   }

   if (VAR_52->port.supported[VAR_54] &
        VAR_41) {
    VAR_53 = (VAR_4 |
            VAR_14);

   } else if (VAR_52->port.supported[VAR_54] &
       VAR_40) {
    VAR_53 = VAR_3;
   } else {
    FUNC_0(VAR_16,
       "1G full not supported\n");
    return -VAR_20;
   }

   break;

  case 128:
   if (VAR_60 != VAR_18) {
    FUNC_0(VAR_16,
       "2.5G half not supported\n");
    return -VAR_20;
   }

   if (!(VAR_52->port.supported[VAR_54]
         & VAR_46)) {
    FUNC_0(VAR_16,
       "2.5G full not supported\n");
    return -VAR_20;
   }

   VAR_53 = (VAR_11 |
           VAR_14);
   break;

  case 129:
   if (VAR_60 != VAR_18) {
    FUNC_0(VAR_16,
       "10G half not supported\n");
    return -VAR_20;
   }
   VAR_58 = FUNC_4(VAR_52);
   if ((VAR_52->port.supported[VAR_54] &
        VAR_39) &&
       (VAR_52->link_params.phy[VAR_58].media_type !=
        VAR_21)) {
    VAR_53 = (VAR_2 |
            VAR_13);
   } else if (VAR_52->port.supported[VAR_54] &
          VAR_38) {
    VAR_53 = (VAR_0 |
            VAR_13);
   } else {
    FUNC_0(VAR_16,
       "10G full not supported\n");
    return -VAR_20;
   }

   break;

  default:
   FUNC_0(VAR_16, "Unsupported speed %u\n", VAR_57);
   return -VAR_20;
  }

  VAR_52->link_params.req_line_speed[VAR_54] = VAR_57;
  VAR_52->link_params.req_duplex[VAR_54] = VAR_60;
  VAR_52->port.advertising[VAR_54] = VAR_53;
 }

 FUNC_0(VAR_16, "req_line_speed %d\n"
    "  req_duplex %d  advertising 0x%x\n",
    VAR_52->link_params.req_line_speed[VAR_54],
    VAR_52->link_params.req_duplex[VAR_54],
    VAR_52->port.advertising[VAR_54]);


 VAR_52->link_params.multi_phy_config = VAR_56;
 if (FUNC_12(VAR_50)) {
  FUNC_8(VAR_52, VAR_37);
  FUNC_3(VAR_52);
  FUNC_7(VAR_52);
 }

 return 0;
}
