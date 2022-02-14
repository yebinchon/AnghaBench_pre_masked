
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_acl_vlan_cmd {int * vlanid; int en_to_len16; int op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fw_acl_vlan_cmd) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct adapter*,struct fw_acl_vlan_cmd*,int,struct fw_acl_vlan_cmd*) ;

int FUNC_6(struct adapter *VAR_3)
{
 struct fw_acl_vlan_cmd VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_4.op_to_vfn = FUNC_4(FUNC_0(VAR_0) |
         VAR_2 | VAR_1);


 VAR_4.en_to_len16 = FUNC_3((unsigned int)FUNC_1(VAR_4));

 VAR_6 = FUNC_5(VAR_3, &VAR_4, sizeof(VAR_4), &VAR_4);

 if (!VAR_6)
  VAR_5 = FUNC_2(VAR_4.vlanid[0]);

 return VAR_5;
}
