
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* inner_mac; int mac_lsb; int mac_mid; int mac_msb; int header; } ;
union eth_classify_rule_cmd {TYPE_1__ mac; } ;
typedef int u8 ;
struct eth_classify_rules_ramrod_data {int header; union eth_classify_rule_cmd* rules; } ;
struct bnx2x_raw_obj {int state; int cid; int cl_id; scalar_t__ rdata; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct TYPE_7__ {int is_inner_mac; int * mac; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct TYPE_9__ {int cmd; unsigned long vlan_mac_flags; TYPE_3__ u; struct bnx2x_vlan_mac_obj* target_obj; } ;
struct TYPE_10__ {TYPE_4__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_5__ cmd_data; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char*,int *,int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (struct bnx2x*,int,int *,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct eth_classify_rules_ramrod_data*,int ,int) ;
 scalar_t__ FUNC_7 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_8,
     struct bnx2x_vlan_mac_obj *VAR_9,
     struct bnx2x_exeq_elem *VAR_10, int VAR_11,
     int VAR_12)
{
 struct bnx2x_raw_obj *VAR_13 = &VAR_9->raw;
 struct eth_classify_rules_ramrod_data *VAR_14 =
  (struct eth_classify_rules_ramrod_data *)(VAR_13->rdata);
 int VAR_15 = VAR_11 + 1, VAR_16 = VAR_10->cmd_data.vlan_mac.cmd;
 union eth_classify_rule_cmd *VAR_17 = &VAR_14->rules[VAR_11];
 bool VAR_18 = (VAR_16 == VAR_5) ? 1 : 0;
 unsigned long *VAR_19 = &VAR_10->cmd_data.vlan_mac.vlan_mac_flags;
 u8 *VAR_20 = VAR_10->cmd_data.vlan_mac.u.mac.mac;
 if (VAR_16 != VAR_6) {
  if (FUNC_7(VAR_1, VAR_19))
   FUNC_2(VAR_8, VAR_18, VAR_20,
          VAR_3);
  else if (FUNC_7(VAR_0, VAR_19))
   FUNC_2(VAR_8, VAR_18, VAR_20,
          VAR_2);
 }


 if (VAR_11 == 0)
  FUNC_6(VAR_14, 0, sizeof(*VAR_14));


 FUNC_3(VAR_8, VAR_9, VAR_18, VAR_7,
          &VAR_17->mac.header);

 FUNC_0(VAR_4, "About to %s MAC %pM for Queue %d\n",
    (VAR_18 ? "add" : "delete"), VAR_20, VAR_13->cl_id);


 FUNC_1(&VAR_17->mac.mac_msb,
         &VAR_17->mac.mac_mid,
         &VAR_17->mac.mac_lsb, VAR_20);
 VAR_17->mac.inner_mac =
  FUNC_5(VAR_10->cmd_data.vlan_mac.u.mac.is_inner_mac);


 if (VAR_16 == VAR_6) {
  VAR_17++;
  VAR_15++;


  FUNC_3(VAR_8,
     VAR_10->cmd_data.vlan_mac.target_obj,
           1, VAR_7,
           &VAR_17->mac.header);


  FUNC_1(&VAR_17->mac.mac_msb,
          &VAR_17->mac.mac_mid,
          &VAR_17->mac.mac_lsb, VAR_20);
  VAR_17->mac.inner_mac =
   FUNC_5(VAR_10->cmd_data.vlan_mac.
      u.mac.is_inner_mac);
 }




 FUNC_4(VAR_13->cid, VAR_13->state, &VAR_14->header,
     VAR_15);
}
