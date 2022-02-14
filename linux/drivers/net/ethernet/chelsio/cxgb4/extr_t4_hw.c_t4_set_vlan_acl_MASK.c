
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_cmd ;
typedef scalar_t__ u16 ;
struct fw_acl_vlan_cmd {int dropnovlan_fm; int nvlan; int * vlanid; void* en_to_len16; void* op_to_vfn; } ;
struct adapter {int mbox; int pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_3 (struct fw_acl_vlan_cmd) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (unsigned int) ;
 int FUNC_6 (struct fw_acl_vlan_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,int ,struct fw_acl_vlan_cmd*,int,int *) ;

int FUNC_8(struct adapter *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
      u16 VAR_10)
{
 struct fw_acl_vlan_cmd VAR_11;
 unsigned int VAR_12;

 VAR_12 = (VAR_10 ? VAR_2 : 0);
 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.op_to_vfn = FUNC_5(FUNC_2(VAR_0) |
      VAR_5 |
      VAR_6 |
      VAR_4 |
      FUNC_0(VAR_7->pf) |
      FUNC_1(VAR_9));
 VAR_11.en_to_len16 = FUNC_5(VAR_12 | FUNC_3(VAR_11));

 VAR_11.dropnovlan_fm = (VAR_12
      ? (VAR_1 |
         VAR_3) : 0);
 if (VAR_12 != 0) {
  VAR_11.nvlan = 1;
  VAR_11.vlanid[0] = FUNC_4(VAR_10);
 }

 return FUNC_7(VAR_7, VAR_7->mbox, &VAR_11, sizeof(VAR_11), ((void*)0));
}
