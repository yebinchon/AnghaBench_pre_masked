
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static u8 FUNC_1(u32 VAR_0)
{
 u8 VAR_1 = 0;
 VAR_0 &= 0xFFF;
 if (VAR_0 >= 0xC20 && VAR_0 <= 0xC4C)
  VAR_1 = (u8)((VAR_0 - 0xC20) / 4);
 else if (VAR_0 >= 0xE20 && VAR_0 <= 0xE4C)
  VAR_1 = (u8)((VAR_0 - 0xE20) / 4);
 else
  FUNC_0(1,
     "rtl8821ae: Invalid RegAddr 0x%x\n", VAR_0);
 return VAR_1;
}
