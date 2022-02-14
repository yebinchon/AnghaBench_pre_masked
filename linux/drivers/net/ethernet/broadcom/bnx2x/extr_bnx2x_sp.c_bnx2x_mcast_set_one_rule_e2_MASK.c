
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union bnx2x_mcast_config_data {int bin; int mac; } ;
typedef int u8 ;
struct eth_multicast_rules_ramrod_data {TYPE_3__* rules; } ;
struct bnx2x_raw_obj {int func_id; scalar_t__ rdata; } ;
struct TYPE_4__ {int vec; } ;
struct TYPE_5__ {TYPE_1__ aprox_match; } ;
struct bnx2x_mcast_obj {int engine_id; TYPE_2__ registry; struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;
struct TYPE_6__ {int cmd_general_data; int bin_id; int func_id; int engine_id; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;





 int VAR_0 ;
 int FUNC_3 (int ,char*,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bnx2x_mcast_obj*) ;
 int FUNC_6 (struct bnx2x_mcast_obj*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_2,
     struct bnx2x_mcast_obj *VAR_3, int VAR_4,
     union bnx2x_mcast_config_data *VAR_5,
     enum bnx2x_mcast_cmd VAR_6)
{
 struct bnx2x_raw_obj *VAR_7 = &VAR_3->raw;
 struct eth_multicast_rules_ramrod_data *VAR_8 =
  (struct eth_multicast_rules_ramrod_data *)(VAR_7->rdata);
 u8 VAR_9 = VAR_7->func_id;
 u8 VAR_10 = FUNC_6(VAR_3);
 int VAR_11;

 if ((VAR_6 == 132) || (VAR_6 == 130) ||
     (VAR_6 == 129))
  VAR_10 |= VAR_1;

 VAR_8->rules[VAR_4].cmd_general_data |= VAR_10;


 switch (VAR_6) {
 case 132:
  VAR_11 = FUNC_4(VAR_5->mac);
  FUNC_1(VAR_3->registry.aprox_match.vec, VAR_11);
  break;

 case 131:






  VAR_11 = FUNC_5(VAR_3);
  break;

 case 130:
  VAR_11 = VAR_5->bin;
  break;

 case 129:
  VAR_11 = VAR_5->bin;
  FUNC_1(VAR_3->registry.aprox_match.vec, VAR_11);
  break;

 case 128:
  VAR_11 = VAR_5->bin;
  FUNC_0(VAR_3->registry.aprox_match.vec, VAR_11);
  break;

 default:
  FUNC_2("Unknown command: %d\n", VAR_6);
  return;
 }

 FUNC_3(VAR_0, "%s bin %d\n",
    ((VAR_10 & VAR_1) ?
    "Setting" : "Clearing"), VAR_11);

 VAR_8->rules[VAR_4].bin_id = (u8)VAR_11;
 VAR_8->rules[VAR_4].func_id = VAR_9;
 VAR_8->rules[VAR_4].engine_id = VAR_3->engine_id;
}
