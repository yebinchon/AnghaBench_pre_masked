
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int vlan; } ;
struct TYPE_5__ {TYPE_1__ vlan; } ;
struct TYPE_6__ {int cmd; int vlan_mac_flags; TYPE_2__ u; } ;
struct bnx2x_vlan_mac_ramrod_params {unsigned long ramrod_flags; TYPE_3__ user_req; struct bnx2x_vlan_mac_obj* vlan_mac_obj; } ;
struct bnx2x_vlan_mac_obj {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int ramrod_param ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_vlan_mac_ramrod_params*) ;
 int FUNC_4 (struct bnx2x_vlan_mac_ramrod_params*,int ,int) ;
 int FUNC_5 (int ,unsigned long*) ;

int FUNC_6(struct bnx2x *VAR_6, u16 VAR_7,
         struct bnx2x_vlan_mac_obj *VAR_8, bool VAR_9,
         unsigned long *VAR_10)
{
 int VAR_11;
 struct bnx2x_vlan_mac_ramrod_params VAR_12;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));


 VAR_12.vlan_mac_obj = VAR_8;
 VAR_12.ramrod_flags = *VAR_10;


 if (!FUNC_5(VAR_5, VAR_10)) {
  VAR_12.user_req.u.vlan.vlan = VAR_7;
  FUNC_2(VAR_1, &VAR_12.user_req.vlan_mac_flags);

  if (VAR_9)
   VAR_12.user_req.cmd = VAR_2;
  else
   VAR_12.user_req.cmd = VAR_3;
 }

 VAR_11 = FUNC_3(VAR_6, &VAR_12);

 if (VAR_11 == -VAR_4) {

  FUNC_1(VAR_0, "Failed to schedule ADD operations: %d\n", VAR_11);
  VAR_11 = 0;
 } else if (VAR_11 < 0) {
  FUNC_0("%s VLAN failed\n", (VAR_9 ? "Set" : "Del"));
 }

 return VAR_11;
}
