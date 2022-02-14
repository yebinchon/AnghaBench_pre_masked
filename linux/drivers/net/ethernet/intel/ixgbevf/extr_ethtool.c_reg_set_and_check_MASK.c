
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static bool FUNC_4(struct ixgbevf_adapter *VAR_0, u64 *VAR_1,
         int VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_0(VAR_0->hw.hw_addr)) {
  *VAR_1 = 1;
  return 1;
 }
 VAR_6 = FUNC_2(&VAR_0->hw, VAR_2);
 FUNC_1(&VAR_0->hw, VAR_2, VAR_4 & VAR_3);
 VAR_5 = FUNC_2(&VAR_0->hw, VAR_2);
 if ((VAR_4 & VAR_3) != (VAR_5 & VAR_3)) {
  FUNC_3("set/check reg %04X test failed: got 0x%08X expected 0x%08X\n",
         VAR_2, (VAR_5 & VAR_3), VAR_4 & VAR_3);
  *VAR_1 = VAR_2;
  FUNC_1(&VAR_0->hw, VAR_2, VAR_6);
  return 1;
 }
 FUNC_1(&VAR_0->hw, VAR_2, VAR_6);
 return 0;
}
