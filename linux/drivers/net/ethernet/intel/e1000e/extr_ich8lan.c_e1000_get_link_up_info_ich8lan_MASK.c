
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3, u16 *VAR_4,
       u16 *VAR_5)
{
 s32 VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if ((VAR_3->mac.type == VAR_1) &&
     (VAR_3->phy.type == VAR_2) && (*VAR_4 == VAR_0)) {
  VAR_6 = FUNC_0(VAR_3);
 }

 return VAR_6;
}
