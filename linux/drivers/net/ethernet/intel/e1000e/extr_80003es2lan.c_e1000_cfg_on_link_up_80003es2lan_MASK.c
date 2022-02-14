
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = 0;
 u16 VAR_4;
 u16 VAR_5;

 if (VAR_2->phy.media_type == VAR_1) {
  VAR_3 = FUNC_2(VAR_2, &VAR_4,
            &VAR_5);
  if (VAR_3)
   return VAR_3;

  if (VAR_4 == VAR_0)
   VAR_3 = FUNC_0(VAR_2);
  else
   VAR_3 = FUNC_1(VAR_2, VAR_5);
 }

 return VAR_3;
}
