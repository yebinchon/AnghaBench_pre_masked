
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int hw_addr; } ;
struct ixgbe_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static bool FUNC_4(struct ixgbe_adapter *VAR_1, u64 *VAR_2, int VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 if (FUNC_2(VAR_1->hw.hw_addr)) {
  *VAR_2 = 1;
  return 1;
 }
 VAR_7 = FUNC_1(&VAR_1->hw, VAR_3);
 FUNC_3(&VAR_1->hw, VAR_3, VAR_5 & VAR_4);
 VAR_6 = FUNC_1(&VAR_1->hw, VAR_3);
 if ((VAR_5 & VAR_4) != (VAR_6 & VAR_4)) {
  FUNC_0(VAR_0, "set/check reg %04X test failed: got 0x%08X expected 0x%08X\n",
        VAR_3, (VAR_6 & VAR_4), (VAR_5 & VAR_4));
  *VAR_2 = VAR_3;
  FUNC_3(&VAR_1->hw, VAR_3, VAR_7);
  return 1;
 }
 FUNC_3(&VAR_1->hw, VAR_3, VAR_7);
 return 0;
}
