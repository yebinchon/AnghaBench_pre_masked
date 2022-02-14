
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int rsts; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct TYPE_6__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mbx; TYPE_3__ mac; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;






__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3 = (VAR_2 < 32) ? 0 : 1;
 u32 VAR_4 = VAR_2 % 32;
 u32 VAR_5 = 0;

 switch (VAR_1->mac.type) {
 case 132:
  VAR_5 = FUNC_1(VAR_1, FUNC_2(VAR_3));
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_5 = FUNC_1(VAR_1, FUNC_3(VAR_3));
  break;
 default:
  break;
 }

 if (VAR_5 & FUNC_0(VAR_4)) {
  FUNC_4(VAR_1, FUNC_3(VAR_3), FUNC_0(VAR_4));
  VAR_1->mbx.stats.rsts++;
  return 0;
 }

 return VAR_0;
}
