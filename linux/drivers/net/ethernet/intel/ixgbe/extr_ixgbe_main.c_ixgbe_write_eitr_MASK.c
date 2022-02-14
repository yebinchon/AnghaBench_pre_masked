
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_q_vector {int v_idx; int itr; struct ixgbe_adapter* adapter; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;







void FUNC_2(struct ixgbe_q_vector *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = VAR_2->adapter;
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = VAR_2->v_idx;
 u32 VAR_6 = VAR_2->itr & VAR_1;

 switch (VAR_3->hw.mac.type) {
 case 133:

  VAR_6 |= (VAR_6 << 16);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:




  VAR_6 |= VAR_0;
  break;
 default:
  break;
 }
 FUNC_1(VAR_4, FUNC_0(VAR_5), VAR_6);
}
