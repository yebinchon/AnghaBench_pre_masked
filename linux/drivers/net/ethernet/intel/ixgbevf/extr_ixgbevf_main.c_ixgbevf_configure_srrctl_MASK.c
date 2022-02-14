
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbevf_ring {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct ixgbevf_ring*) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_7,
         struct ixgbevf_ring *VAR_8, int VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_7->hw;
 u32 VAR_11;

 VAR_11 = VAR_6;

 VAR_11 |= VAR_2 << VAR_3;
 if (FUNC_2(VAR_8))
  VAR_11 |= VAR_1 >> VAR_4;
 else
  VAR_11 |= VAR_0 >> VAR_4;
 VAR_11 |= VAR_5;

 FUNC_1(VAR_10, FUNC_0(VAR_9), VAR_11);
}
