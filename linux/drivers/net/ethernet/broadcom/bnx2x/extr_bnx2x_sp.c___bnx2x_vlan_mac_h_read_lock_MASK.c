
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_obj {int head_reader; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_1,
     struct bnx2x_vlan_mac_obj *VAR_2)
{

 VAR_2->head_reader++;
 FUNC_0(VAR_0, "vlan_mac_lock - locked reader - number %d\n",
    VAR_2->head_reader);

 return 0;
}
