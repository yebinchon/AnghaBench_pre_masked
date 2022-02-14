
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2, u32 VAR_3,
      u8 *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6 = 0;




 if (VAR_2->mac.type >= VAR_1)
  return -VAR_0;
 else
  VAR_5 = FUNC_0(VAR_2, VAR_3, 1, &VAR_6);

 if (VAR_5)
  return VAR_5;

 *VAR_4 = (u8)VAR_6;

 return 0;
}
