
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_vfs; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;







__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11 = FUNC_0(VAR_10, VAR_0);

 switch (VAR_10->mac.type) {
 case 133:
  VAR_11 |= VAR_3;
  break;
 case 130:
 case 129:
 case 128:
  if (VAR_9->num_vfs)
   VAR_11 |= VAR_4;

 case 132:
 case 131:

  FUNC_1(VAR_10, VAR_7,
     (VAR_8 | FUNC_0(VAR_10, VAR_7)));
  VAR_11 &= ~VAR_6;

  VAR_11 |= (VAR_5 | VAR_2);
  VAR_11 |= VAR_1;
  break;
 default:

  return;
 }

 FUNC_1(VAR_10, VAR_0, VAR_11);
}
