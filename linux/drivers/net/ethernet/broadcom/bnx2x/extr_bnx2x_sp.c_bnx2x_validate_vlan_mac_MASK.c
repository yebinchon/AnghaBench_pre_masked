
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union bnx2x_qable_obj {int dummy; } bnx2x_qable_obj ;
struct TYPE_3__ {int cmd; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,union bnx2x_qable_obj*,struct bnx2x_exeq_elem*) ;
 int FUNC_1 (struct bnx2x*,union bnx2x_qable_obj*,struct bnx2x_exeq_elem*) ;
 int FUNC_2 (struct bnx2x*,union bnx2x_qable_obj*,struct bnx2x_exeq_elem*) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_1,
       union bnx2x_qable_obj *VAR_2,
       struct bnx2x_exeq_elem *VAR_3)
{
 switch (VAR_3->cmd_data.vlan_mac.cmd) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
