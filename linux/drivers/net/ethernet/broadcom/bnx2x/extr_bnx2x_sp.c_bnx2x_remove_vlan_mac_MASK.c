
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* put_credit ) (TYPE_3__*) ;int (* get_credit ) (TYPE_3__*) ;} ;
union bnx2x_qable_obj {TYPE_3__ vlan_mac; } ;
struct TYPE_5__ {int cmd; int vlan_mac_flags; } ;
struct TYPE_6__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_2,
      union bnx2x_qable_obj *VAR_3,
      struct bnx2x_exeq_elem *VAR_4)
{
 int VAR_5 = 0;


 if (FUNC_2(VAR_0,
       &VAR_4->cmd_data.vlan_mac.vlan_mac_flags))
  return 0;

 switch (VAR_4->cmd_data.vlan_mac.cmd) {
 case 130:
 case 128:
  VAR_5 = VAR_3->vlan_mac.put_credit(&VAR_3->vlan_mac);
  break;
 case 129:
  VAR_5 = VAR_3->vlan_mac.get_credit(&VAR_3->vlan_mac);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_5 != 1)
  return -VAR_1;

 return 0;
}
