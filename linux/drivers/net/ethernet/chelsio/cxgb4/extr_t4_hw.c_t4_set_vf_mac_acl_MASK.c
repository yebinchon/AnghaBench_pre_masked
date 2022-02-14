
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_acl_mac_cmd {unsigned int nmac; int macaddr0; int macaddr1; int macaddr2; int macaddr3; void* en_to_len16; void* op_to_vfn; } ;
struct adapter {int pf; int mbox; } ;
typedef int cmd ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (struct fw_acl_mac_cmd) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct fw_acl_mac_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,int ,struct fw_acl_mac_cmd*,int,struct fw_acl_mac_cmd*) ;

int FUNC_8(struct adapter *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, u8 *VAR_6)
{
 struct fw_acl_mac_cmd VAR_7;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_vfn = FUNC_4(FUNC_2(VAR_0) |
        VAR_1 |
        VAR_2 |
        FUNC_0(VAR_3->pf) |
        FUNC_1(VAR_4));


 VAR_7.en_to_len16 = FUNC_4((unsigned int)FUNC_3(VAR_7));
 VAR_7.nmac = VAR_5;

 switch (VAR_3->pf) {
 case 3:
  FUNC_5(VAR_7.macaddr3, VAR_6, sizeof(VAR_7.macaddr3));
  break;
 case 2:
  FUNC_5(VAR_7.macaddr2, VAR_6, sizeof(VAR_7.macaddr2));
  break;
 case 1:
  FUNC_5(VAR_7.macaddr1, VAR_6, sizeof(VAR_7.macaddr1));
  break;
 case 0:
  FUNC_5(VAR_7.macaddr0, VAR_6, sizeof(VAR_7.macaddr0));
  break;
 }

 return FUNC_7(VAR_3, VAR_3->mbox, &VAR_7, sizeof(VAR_7), &VAR_7);
}
