
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = 0;


 if ((VAR_3->mac.type == VAR_2) &&
     !(FUNC_3(VAR_1) & VAR_0))
  FUNC_0(VAR_3, 1);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_3);
}
