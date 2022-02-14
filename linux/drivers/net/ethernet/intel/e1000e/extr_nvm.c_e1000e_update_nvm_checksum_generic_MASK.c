
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 int FUNC_2 (char*) ;

s32 FUNC_3(struct e1000_hw *VAR_2)
{
 s32 VAR_3;
 u16 VAR_4 = 0;
 u16 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = FUNC_0(VAR_2, VAR_5, 1, &VAR_6);
  if (VAR_3) {
   FUNC_2("NVM Read Error while updating checksum.\n");
   return VAR_3;
  }
  VAR_4 += VAR_6;
 }
 VAR_4 = (u16)VAR_1 - VAR_4;
 VAR_3 = FUNC_1(VAR_2, VAR_0, 1, &VAR_4);
 if (VAR_3)
  FUNC_2("NVM Write Error while updating checksum.\n");

 return VAR_3;
}
