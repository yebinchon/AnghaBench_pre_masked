
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int (* validate ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int type; } ;
struct e1000_hw {TYPE_2__ nvm; TYPE_3__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;




 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_3(struct igb_adapter *VAR_0, u64 *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_0->hw;

 *VAR_1 = 0;


 switch (VAR_2->mac.type) {
 case 129:
 case 128:
  if (FUNC_0(VAR_2)) {
   if (VAR_0->hw.nvm.ops.validate(&VAR_0->hw) < 0)
    *VAR_1 = 2;
  }
  break;
 default:
  if (VAR_0->hw.nvm.ops.validate(&VAR_0->hw) < 0)
   *VAR_1 = 2;
  break;
 }

 return *VAR_1;
}
