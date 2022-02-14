
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {unsigned long saved_ramrod_flags; int head_exe_request; int exe_queue; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (struct bnx2x*,int *,unsigned long*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_1,
         struct bnx2x_vlan_mac_obj *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = VAR_2->saved_ramrod_flags;

 FUNC_1(VAR_0, "vlan_mac_lock execute pending command with ramrod flags %lu\n",
    VAR_4);
 VAR_2->head_exe_request = 0;
 VAR_2->saved_ramrod_flags = 0;
 VAR_3 = FUNC_2(VAR_1, &VAR_2->exe_queue, &VAR_4);
 if ((VAR_3 != 0) && (VAR_3 != 1)) {
  FUNC_0("execution of pending commands failed with rc %d\n",
     VAR_3);



 }
}
