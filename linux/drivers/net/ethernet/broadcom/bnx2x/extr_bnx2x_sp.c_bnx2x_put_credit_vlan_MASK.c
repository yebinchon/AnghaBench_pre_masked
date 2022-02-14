
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {struct bnx2x_credit_pool_obj* vlans_pool; } ;
struct bnx2x_credit_pool_obj {int (* put ) (struct bnx2x_credit_pool_obj*,int) ;} ;


 int FUNC_0 (struct bnx2x_credit_pool_obj*,int) ;

__attribute__((used)) static bool FUNC_1(struct bnx2x_vlan_mac_obj *VAR_0)
{
 struct bnx2x_credit_pool_obj *VAR_1 = VAR_0->vlans_pool;

 return VAR_1->put(VAR_1, 1);
}
