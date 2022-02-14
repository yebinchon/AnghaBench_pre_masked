
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct atl1_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atl1_adapter *VAR_0)
{
 u32 VAR_1;


 VAR_1 = 0x6500;
 FUNC_1(VAR_1, VAR_0->hw.hw_addr + 0x12FC);

 VAR_1 = FUNC_0(VAR_0->hw.hw_addr + 0x1008);
 VAR_1 |= 0x8000;
 FUNC_1(VAR_1, VAR_0->hw.hw_addr + 0x1008);
}
