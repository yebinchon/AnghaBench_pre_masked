
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1c_hw {int perm_mac_addr; int mac_addr; } ;


 int FUNC_0 (struct atl1c_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct atl1c_hw *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_0->perm_mac_addr);

 FUNC_2(VAR_0->mac_addr, VAR_0->perm_mac_addr, sizeof(VAR_0->perm_mac_addr));
 return VAR_1;
}
