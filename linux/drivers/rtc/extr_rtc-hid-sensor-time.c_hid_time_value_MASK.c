
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u32 FUNC_0(size_t VAR_0, char *VAR_1)
{
 switch (VAR_0) {
 case 1:
  return *(u8 *)VAR_1;
 case 2:
  return *(u16 *)VAR_1;
 case 4:
  return *(u32 *)VAR_1;
 default:
  return (u32)(~0U);
 }
}
