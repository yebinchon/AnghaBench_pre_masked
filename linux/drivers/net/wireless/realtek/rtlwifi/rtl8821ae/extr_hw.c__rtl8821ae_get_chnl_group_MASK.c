
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0)
{
 u8 VAR_1 = 0;

 if (VAR_0 <= 14) {
  if (1 <= VAR_0 && VAR_0 <= 2)
   VAR_1 = 0;
 else if (3 <= VAR_0 && VAR_0 <= 5)
   VAR_1 = 1;
 else if (6 <= VAR_0 && VAR_0 <= 8)
   VAR_1 = 2;
 else if (9 <= VAR_0 && VAR_0 <= 11)
   VAR_1 = 3;
 else
   VAR_1 = 4;
 } else {
  if (36 <= VAR_0 && VAR_0 <= 42)
   VAR_1 = 0;
 else if (44 <= VAR_0 && VAR_0 <= 48)
   VAR_1 = 1;
 else if (50 <= VAR_0 && VAR_0 <= 58)
   VAR_1 = 2;
 else if (60 <= VAR_0 && VAR_0 <= 64)
   VAR_1 = 3;
 else if (100 <= VAR_0 && VAR_0 <= 106)
   VAR_1 = 4;
 else if (108 <= VAR_0 && VAR_0 <= 114)
   VAR_1 = 5;
 else if (116 <= VAR_0 && VAR_0 <= 122)
   VAR_1 = 6;
 else if (124 <= VAR_0 && VAR_0 <= 130)
   VAR_1 = 7;
 else if (132 <= VAR_0 && VAR_0 <= 138)
   VAR_1 = 8;
 else if (140 <= VAR_0 && VAR_0 <= 144)
   VAR_1 = 9;
 else if (149 <= VAR_0 && VAR_0 <= 155)
   VAR_1 = 10;
 else if (157 <= VAR_0 && VAR_0 <= 161)
   VAR_1 = 11;
 else if (165 <= VAR_0 && VAR_0 <= 171)
   VAR_1 = 12;
 else if (173 <= VAR_0 && VAR_0 <= 177)
   VAR_1 = 13;
 else
  FUNC_0(1,
     "rtl8821ae: 5G, Channel %d in Group not found\n",
     VAR_0);
 }
 return VAR_1;
}
