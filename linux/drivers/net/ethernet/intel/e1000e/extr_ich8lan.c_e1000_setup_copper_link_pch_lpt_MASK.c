
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 VAR_5 |= VAR_3;
 VAR_5 &= ~(VAR_2 | VAR_1);
 FUNC_3(VAR_0, VAR_5);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4);
}
