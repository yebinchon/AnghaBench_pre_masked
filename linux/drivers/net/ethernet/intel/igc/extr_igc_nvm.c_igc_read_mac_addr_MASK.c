
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_2__ {void** perm_addr; void** addr; } ;
struct igc_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 size_t FUNC_2 (int ) ;

s32 FUNC_3(struct igc_hw *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u16 VAR_6;

 VAR_4 = FUNC_2(FUNC_0(0));
 VAR_5 = FUNC_2(FUNC_1(0));

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3->mac.perm_addr[VAR_6] = (u8)(VAR_5 >> (VAR_6 * 8));

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_3->mac.perm_addr[VAR_6 + 4] = (u8)(VAR_4 >> (VAR_6 * 8));

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_3->mac.addr[VAR_6] = VAR_3->mac.perm_addr[VAR_6];

 return 0;
}
