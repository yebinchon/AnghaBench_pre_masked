
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_nvm_info {scalar_t__ type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1)
{
 struct e1000_nvm_info *VAR_2 = &VAR_1->nvm;
 s32 VAR_3;
 u16 VAR_4;

 if (VAR_2->type != VAR_0)
  return 0;




 VAR_3 = FUNC_0(VAR_1, 0x10, 1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 if (!(VAR_4 & 0x10)) {







  VAR_3 = FUNC_0(VAR_1, 0x23, 1, &VAR_4);
  if (VAR_3)
   return VAR_3;

  if (!(VAR_4 & 0x8000)) {
   VAR_4 |= 0x8000;
   VAR_3 = FUNC_1(VAR_1, 0x23, 1, &VAR_4);
   if (VAR_3)
    return VAR_3;
   VAR_3 = FUNC_2(VAR_1);
   if (VAR_3)
    return VAR_3;
  }
 }

 return 0;
}
