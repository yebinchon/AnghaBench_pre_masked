
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ixgbevf_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;


 u32 VAR_8 = VAR_3 | VAR_4 |
        VAR_0 | VAR_1 |
        VAR_2;

 if (VAR_6->num_rx_queues > 1)
  VAR_8 |= FUNC_0(29);

 FUNC_1(VAR_7, VAR_5, VAR_8);
}
