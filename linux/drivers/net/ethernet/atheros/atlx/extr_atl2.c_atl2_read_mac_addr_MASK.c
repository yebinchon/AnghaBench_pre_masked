
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl2_hw {int* perm_mac_addr; int mac_addr; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct atl2_hw*) ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct atl2_hw *VAR_1)
{
 if (FUNC_0(VAR_1)) {


  VAR_1->perm_mac_addr[0] = 0x00;
  VAR_1->perm_mac_addr[1] = 0x13;
  VAR_1->perm_mac_addr[2] = 0x74;
  VAR_1->perm_mac_addr[3] = 0x00;
  VAR_1->perm_mac_addr[4] = 0x5c;
  VAR_1->perm_mac_addr[5] = 0x38;
 }

 FUNC_1(VAR_1->mac_addr, VAR_1->perm_mac_addr, VAR_0);

 return 0;
}
