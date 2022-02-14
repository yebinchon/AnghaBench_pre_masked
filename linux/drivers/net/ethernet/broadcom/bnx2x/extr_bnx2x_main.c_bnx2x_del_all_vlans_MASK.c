
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_vlan_mac_obj {int (* delete_all ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;} ;
struct bnx2x {TYPE_1__* sp_objs; } ;
struct TYPE_2__ {struct bnx2x_vlan_mac_obj vlan_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_2)
{
 struct bnx2x_vlan_mac_obj *VAR_3 = &VAR_2->sp_objs[0].vlan_obj;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_0(VAR_0, &VAR_5);
 VAR_6 = VAR_3->delete_all(VAR_2, VAR_3, &VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_2);

 return 0;
}
