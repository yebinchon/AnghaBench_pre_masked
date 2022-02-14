
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int *) ;







s32 FUNC_2(struct ixgbe_hw *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 switch (VAR_1->mac.type) {
 case 133:
  return FUNC_0(VAR_1, VAR_2);
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 default:
  break;
 }
 return -VAR_0;
}
