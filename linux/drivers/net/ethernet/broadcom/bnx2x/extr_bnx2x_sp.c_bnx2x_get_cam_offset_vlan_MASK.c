
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {struct bnx2x_credit_pool_obj* vlans_pool; } ;
struct bnx2x_credit_pool_obj {int (* get_entry ) (struct bnx2x_credit_pool_obj*,int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bnx2x_credit_pool_obj*,int*) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x_vlan_mac_obj *VAR_0, int *VAR_1)
{
 struct bnx2x_credit_pool_obj *VAR_2 = VAR_0->vlans_pool;

 FUNC_0(!VAR_2);

 return VAR_2->get_entry(VAR_2, VAR_1);
}
