
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {int (* delete_all ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;

int FUNC_3(struct bnx2x *VAR_1,
         struct bnx2x_vlan_mac_obj *VAR_2,
         int VAR_3, bool VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = 0, VAR_7 = 0;


 if (VAR_4)
  FUNC_1(VAR_0, &VAR_6);


 FUNC_1(VAR_3, &VAR_7);

 VAR_5 = VAR_2->delete_all(VAR_1, VAR_2, &VAR_7, &VAR_6);
 if (VAR_5 < 0)
  FUNC_0("Failed to delete MACs: %d\n", VAR_5);

 return VAR_5;
}
