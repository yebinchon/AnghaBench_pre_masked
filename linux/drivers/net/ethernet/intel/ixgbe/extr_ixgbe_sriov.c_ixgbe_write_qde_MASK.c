
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_ring_feature {int mask; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_ring_feature* ring_feature; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_3 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ixgbe_adapter *VAR_4, u32 VAR_5,
       u32 VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_4->hw;
 struct ixgbe_ring_feature *VAR_8 = &VAR_4->ring_feature[VAR_3];
 u32 VAR_9 = FUNC_2(1, ~VAR_8->mask);
 int VAR_10;

 for (VAR_10 = VAR_5 * VAR_9; VAR_10 < ((VAR_5 + 1) * VAR_9); VAR_10++) {
  u32 VAR_11;


  FUNC_0(VAR_7);


  VAR_11 = VAR_2 | VAR_6;
  VAR_11 |= VAR_10 << VAR_1;
  FUNC_1(VAR_7, VAR_0, VAR_11);
 }
}
