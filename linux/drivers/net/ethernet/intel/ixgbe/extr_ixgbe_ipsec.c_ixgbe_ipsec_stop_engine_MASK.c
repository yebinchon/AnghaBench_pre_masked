
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11;

 FUNC_3(VAR_9);


 FUNC_2(VAR_10, VAR_1, 0);
 FUNC_2(VAR_10, VAR_0, 0);


 VAR_11 = FUNC_0(VAR_10, VAR_5);
 VAR_11 |= VAR_6;
 VAR_11 &= ~VAR_7;
 FUNC_2(VAR_10, VAR_5, VAR_11);

 VAR_11 = FUNC_0(VAR_10, VAR_2);
 VAR_11 |= VAR_3;
 FUNC_2(VAR_10, VAR_2, VAR_11);


 FUNC_2(VAR_10, VAR_4, 0x250);


 VAR_11 = FUNC_0(VAR_10, VAR_8);
 VAR_11 = (VAR_11 & 0xfffffff0) | 0x1;
 FUNC_2(VAR_10, VAR_8, VAR_11);


 FUNC_2(VAR_10, VAR_5, VAR_6);
 FUNC_2(VAR_10, VAR_2, VAR_3);

 FUNC_1(VAR_10);
}
