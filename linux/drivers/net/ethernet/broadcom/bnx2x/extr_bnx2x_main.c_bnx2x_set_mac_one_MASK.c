
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int mac; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct TYPE_6__ {int cmd; int vlan_mac_flags; TYPE_2__ u; } ;
struct bnx2x_vlan_mac_ramrod_params {unsigned long ramrod_flags; TYPE_3__ user_req; struct bnx2x_vlan_mac_obj* vlan_mac_obj; } ;
struct bnx2x_vlan_mac_obj {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int ramrod_param ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_vlan_mac_ramrod_params*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct bnx2x_vlan_mac_ramrod_params*,int ,int) ;
 int FUNC_6 (int ,unsigned long*) ;

int FUNC_7(struct bnx2x *VAR_6, u8 *VAR_7,
        struct bnx2x_vlan_mac_obj *VAR_8, bool VAR_9,
        int VAR_10, unsigned long *VAR_11)
{
 int VAR_12;
 struct bnx2x_vlan_mac_ramrod_params VAR_13;

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));


 VAR_13.vlan_mac_obj = VAR_8;
 VAR_13.ramrod_flags = *VAR_11;


 if (!FUNC_6(VAR_5, VAR_11)) {
  FUNC_4(VAR_13.user_req.u.mac.mac, VAR_7, VAR_4);

  FUNC_2(VAR_10, &VAR_13.user_req.vlan_mac_flags);


  if (VAR_9)
   VAR_13.user_req.cmd = VAR_1;
  else
   VAR_13.user_req.cmd = VAR_2;
 }

 VAR_12 = FUNC_3(VAR_6, &VAR_13);

 if (VAR_12 == -VAR_3) {
  FUNC_1(VAR_0, "Failed to schedule ADD operations: %d\n", VAR_12);

  VAR_12 = 0;
 } else if (VAR_12 < 0)
  FUNC_0("%s MAC failed\n", (VAR_9 ? "Set" : "Del"));

 return VAR_12;
}
