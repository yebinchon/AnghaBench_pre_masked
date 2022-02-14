
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(__le16 VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0);
 switch (VAR_1 & 0xc) {
 case 4:
  if ((VAR_1 & 0xe0) == 0xc0)
   return 10;
  return 16;
 case 8:
  if ((VAR_1 & 0x300) == 0x300)
   return 30;
 }
 return 24;
}
