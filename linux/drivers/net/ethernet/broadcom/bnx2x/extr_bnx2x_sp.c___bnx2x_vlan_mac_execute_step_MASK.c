
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct bnx2x_vlan_mac_obj {TYPE_1__ exe_queue; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_obj*) ;
 int FUNC_3 (struct bnx2x*,TYPE_1__*,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_1,
      struct bnx2x_vlan_mac_obj *VAR_2,
      unsigned long *VAR_3)
{
 int VAR_4 = 0;

 FUNC_4(&VAR_2->exe_queue.lock);

 FUNC_0(VAR_0, "vlan_mac_execute_step - trying to take writer lock\n");
 VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4 != 0) {
  FUNC_1(VAR_1, VAR_2, *VAR_3);




  VAR_4 = 1;
 } else {
  VAR_4 = FUNC_3(VAR_1, &VAR_2->exe_queue, VAR_3);
 }
 FUNC_5(&VAR_2->exe_queue.lock);

 return VAR_4;
}
