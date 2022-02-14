
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {int head_exe_request; unsigned long saved_ramrod_flags; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_1,
        struct bnx2x_vlan_mac_obj *VAR_2,
        unsigned long VAR_3)
{
 VAR_2->head_exe_request = 1;
 VAR_2->saved_ramrod_flags = VAR_3;
 FUNC_0(VAR_0, "Placing pending execution with ramrod flags %lu\n",
    VAR_3);
}
