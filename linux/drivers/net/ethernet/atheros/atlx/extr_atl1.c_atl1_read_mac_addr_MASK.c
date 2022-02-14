
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct atl1_hw {int * perm_mac_addr; int * mac_addr; } ;
typedef int s32 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct atl1_hw*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static s32 FUNC_2(struct atl1_hw *VAR_1)
{
 s32 VAR_2 = 0;
 u16 VAR_3;

 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1->perm_mac_addr);
  VAR_2 = 1;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->mac_addr[VAR_3] = VAR_1->perm_mac_addr[VAR_3];
 return VAR_2;
}
