
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ixgbe_q_vector {struct ixgbe_adapter* adapter; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_adapter*,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct ixgbe_q_vector *VAR_4,
      struct sk_buff *VAR_5)
{
 struct ixgbe_adapter *VAR_6;
 struct ixgbe_hw *VAR_7;
 u64 VAR_8 = 0;
 u32 VAR_9;


 if (!VAR_4 || !VAR_4->adapter)
  return;

 VAR_6 = VAR_4->adapter;
 VAR_7 = &VAR_6->hw;





 VAR_9 = FUNC_0(VAR_7, VAR_2);
 if (!(VAR_9 & VAR_3))
  return;

 VAR_8 |= (u64)FUNC_0(VAR_7, VAR_1);
 VAR_8 |= (u64)FUNC_0(VAR_7, VAR_0) << 32;

 FUNC_1(VAR_6, FUNC_2(VAR_5), VAR_8);
}
