
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;







void FUNC_2(struct ixgbe_adapter *VAR_2,
       u64 VAR_3)
{
 u32 VAR_4;

 switch (VAR_2->hw.mac.type) {
 case 133:
  VAR_4 = (VAR_1 & VAR_3);
  FUNC_1(&VAR_2->hw, VAR_0, VAR_4);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4 = (VAR_3 & 0xFFFFFFFF);
  FUNC_1(&VAR_2->hw, FUNC_0(0), VAR_4);
  VAR_4 = (VAR_3 >> 32);
  FUNC_1(&VAR_2->hw, FUNC_0(1), VAR_4);
  break;
 default:
  break;
 }
}
