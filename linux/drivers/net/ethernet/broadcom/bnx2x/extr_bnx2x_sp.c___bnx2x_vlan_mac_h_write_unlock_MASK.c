
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {scalar_t__ head_exe_request; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1,
         struct bnx2x_vlan_mac_obj *VAR_2)
{



 while (VAR_2->head_exe_request) {
  FUNC_0(VAR_0, "vlan_mac_lock - writer release encountered a pending request\n");
  FUNC_1(VAR_1, VAR_2);
 }
}
