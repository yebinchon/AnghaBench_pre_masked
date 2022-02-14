
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {scalar_t__ head_reader; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_2,
         struct bnx2x_vlan_mac_obj *VAR_3)
{
 if (VAR_3->head_reader) {
  FUNC_0(VAR_0, "vlan_mac_lock writer - There are readers; Busy\n");
  return -VAR_1;
 }

 FUNC_0(VAR_0, "vlan_mac_lock writer - Taken\n");
 return 0;
}
