
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_exe_queue_obj {scalar_t__ (* get ) (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;} ;
struct bnx2x_vlan_mac_obj {scalar_t__ (* put_credit ) (struct bnx2x_vlan_mac_obj*) ;scalar_t__ (* get_credit ) (struct bnx2x_vlan_mac_obj*) ;int (* check_move ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,struct bnx2x_vlan_mac_obj*,int *) ;struct bnx2x_exe_queue_obj exe_queue; } ;
union bnx2x_qable_obj {struct bnx2x_vlan_mac_obj vlan_mac; } ;
struct TYPE_3__ {int vlan_mac_flags; int cmd; int u; struct bnx2x_vlan_mac_obj* target_obj; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;
typedef int query_elem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x_exeq_elem*,struct bnx2x_exeq_elem*,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,struct bnx2x_vlan_mac_obj*,int *) ;
 scalar_t__ FUNC_4 (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;
 scalar_t__ FUNC_5 (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;
 scalar_t__ FUNC_6 (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;
 scalar_t__ FUNC_7 (struct bnx2x_vlan_mac_obj*) ;
 scalar_t__ FUNC_8 (struct bnx2x_vlan_mac_obj*) ;
 scalar_t__ FUNC_9 (struct bnx2x_vlan_mac_obj*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static inline int FUNC_11(struct bnx2x *VAR_7,
            union bnx2x_qable_obj *VAR_8,
            struct bnx2x_exeq_elem *VAR_9)
{
 struct bnx2x_vlan_mac_obj *VAR_10 = &VAR_8->vlan_mac;
 struct bnx2x_vlan_mac_obj *VAR_11 = VAR_9->cmd_data.vlan_mac.target_obj;
 struct bnx2x_exeq_elem VAR_12;
 struct bnx2x_exe_queue_obj *VAR_13 = &VAR_10->exe_queue;
 struct bnx2x_exe_queue_obj *VAR_14 = &VAR_11->exe_queue;




 if (!VAR_10->check_move(VAR_7, VAR_10, VAR_11,
          &VAR_9->cmd_data.vlan_mac.u)) {
  FUNC_1(VAR_2, "MOVE command is not allowed considering current registry state\n");
  return -VAR_6;
 }





 FUNC_2(&VAR_12, VAR_9, sizeof(VAR_12));


 VAR_12.cmd_data.vlan_mac.cmd = VAR_4;
 if (VAR_13->get(VAR_13, &VAR_12)) {
  FUNC_0("There is a pending DEL command on the source queue already\n");
  return -VAR_6;
 }


 if (VAR_13->get(VAR_13, VAR_9)) {
  FUNC_1(VAR_2, "There is a pending MOVE command already\n");
  return -VAR_5;
 }


 VAR_12.cmd_data.vlan_mac.cmd = VAR_3;
 if (VAR_14->get(VAR_14, &VAR_12)) {
  FUNC_0("There is a pending ADD command on the destination queue already\n");
  return -VAR_6;
 }


 if (!(FUNC_10(VAR_1,
         &VAR_9->cmd_data.vlan_mac.vlan_mac_flags) ||
     VAR_11->get_credit(VAR_11)))
  return -VAR_6;

 if (!(FUNC_10(VAR_0,
         &VAR_9->cmd_data.vlan_mac.vlan_mac_flags) ||
     VAR_10->put_credit(VAR_10))) {

  VAR_11->put_credit(VAR_11);
  return -VAR_6;
 }

 return 0;
}
