
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;







__attribute__((used)) static inline void FUNC_2(struct ixgbe_adapter *VAR_2,
         u64 VAR_3)
{
 u32 VAR_4;
 struct ixgbe_hw *VAR_5 = &VAR_2->hw;

 switch (VAR_5->mac.type) {
 case 133:
  VAR_4 = (VAR_1 & VAR_3);
  FUNC_1(VAR_5, VAR_0, VAR_4);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4 = (VAR_3 & 0xFFFFFFFF);
  if (VAR_4)
   FUNC_1(VAR_5, FUNC_0(0), VAR_4);
  VAR_4 = (VAR_3 >> 32);
  if (VAR_4)
   FUNC_1(VAR_5, FUNC_0(1), VAR_4);
  break;
 default:
  break;
 }

}
