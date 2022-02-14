
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int requested_mode; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_2__ fc; TYPE_1__ mac; } ;
typedef int s32 ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2)
{




 switch (VAR_2->mac.type) {
 case 130:
 case 129:
 case 128:
  if (VAR_2->fc.requested_mode == VAR_0)
   VAR_2->fc.requested_mode = VAR_1;
  break;
 default:
  break;
 }

 return FUNC_0(VAR_2);
}
