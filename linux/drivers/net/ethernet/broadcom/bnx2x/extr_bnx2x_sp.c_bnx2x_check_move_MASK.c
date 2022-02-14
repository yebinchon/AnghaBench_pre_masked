
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bnx2x_classification_ramrod_data {int dummy; } bnx2x_classification_ramrod_data ;
struct bnx2x_vlan_mac_registry_elem {int dummy; } ;
struct bnx2x_vlan_mac_obj {int (* check_add ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union bnx2x_classification_ramrod_data*) ;struct bnx2x_vlan_mac_registry_elem* (* check_del ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union bnx2x_classification_ramrod_data*) ;} ;
struct bnx2x {int dummy; } ;


 struct bnx2x_vlan_mac_registry_elem* FUNC_0 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union bnx2x_classification_ramrod_data*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union bnx2x_classification_ramrod_data*) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_0,
        struct bnx2x_vlan_mac_obj *VAR_1,
        struct bnx2x_vlan_mac_obj *VAR_2,
        union bnx2x_classification_ramrod_data *VAR_3)
{
 struct bnx2x_vlan_mac_registry_elem *VAR_4;
 int VAR_5;




 VAR_4 = VAR_1->check_del(VAR_0, VAR_1, VAR_3);


 VAR_5 = VAR_2->check_add(VAR_0, VAR_2, VAR_3);




 if (VAR_5 || !VAR_4)
  return 0;

 return 1;
}
