
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; int vft_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct ixgbe_hw*,int,unsigned int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_2);

 if (VAR_6->flags & VAR_1) {

  VAR_8 |= VAR_3;
  FUNC_4(VAR_7, VAR_2, VAR_8);
 } else {
  VAR_8 &= ~VAR_3;
  FUNC_4(VAR_7, VAR_2, VAR_8);
  return;
 }


 if (VAR_7->mac.type == VAR_5)
  return;


 if (VAR_6->flags2 & VAR_0)
  return;


 VAR_6->flags2 |= VAR_0;


 for (VAR_9 = VAR_4; --VAR_9;) {
  u32 VAR_10 = FUNC_3(VAR_9 * 2 + FUNC_5(0) / 32);
  u32 VAR_11 = FUNC_1(VAR_7, VAR_10);

  VAR_11 |= FUNC_0(FUNC_5(0) % 32);
  FUNC_4(VAR_7, VAR_10, VAR_11);
 }


 for (VAR_9 = VAR_7->mac.vft_size; VAR_9--;)
  FUNC_4(VAR_7, FUNC_2(VAR_9), ~0U);
}
