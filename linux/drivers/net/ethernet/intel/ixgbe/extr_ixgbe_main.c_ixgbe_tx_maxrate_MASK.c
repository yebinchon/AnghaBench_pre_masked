
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
       int VAR_7, u32 VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_2(VAR_6);
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11 = FUNC_1(VAR_9);

 if (!VAR_8)
  return 0;


 VAR_11 <<= VAR_3;
 VAR_11 /= VAR_8;


 VAR_11 &= VAR_2 |
 VAR_1;


 VAR_11 |= VAR_4;

 FUNC_0(VAR_10, VAR_5, VAR_7);
 FUNC_0(VAR_10, VAR_0, VAR_11);

 return 0;
}
