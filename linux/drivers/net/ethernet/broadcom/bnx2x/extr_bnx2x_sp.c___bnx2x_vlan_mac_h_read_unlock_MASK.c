
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {scalar_t__ head_exe_request; int head_reader; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_obj*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_1,
       struct bnx2x_vlan_mac_obj *VAR_2)
{
 if (!VAR_2->head_reader) {
  FUNC_0("Need to release vlan mac reader lock, but lock isn't taken\n");



 } else {
  VAR_2->head_reader--;
  FUNC_1(VAR_0, "vlan_mac_lock - decreased readers to %d\n",
     VAR_2->head_reader);
 }




 if (!VAR_2->head_reader && VAR_2->head_exe_request) {
  FUNC_1(VAR_0, "vlan_mac_lock - reader release encountered a pending request\n");


  FUNC_2(VAR_1, VAR_2);
 }
}
