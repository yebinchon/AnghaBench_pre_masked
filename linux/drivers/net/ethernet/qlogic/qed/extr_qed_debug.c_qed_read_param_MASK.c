
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static u32 FUNC_1(u32 *VAR_0,
     const char **VAR_1,
     const char **VAR_2, u32 *VAR_3)
{
 char *VAR_4 = (char *)VAR_0;
 size_t VAR_5 = 0;


 *VAR_1 = VAR_4;
 VAR_5 += FUNC_0(*VAR_1) + 1;


 if (*(VAR_4 + VAR_5++)) {

  *VAR_2 = VAR_4 + VAR_5;
  *VAR_3 = 0;
  VAR_5 += FUNC_0(*VAR_2) + 1;
  if (VAR_5 & 0x3)
   VAR_5 += (4 - (VAR_5 & 0x3));
 } else {

  *VAR_2 = ((void*)0);
  if (VAR_5 & 0x3)
   VAR_5 += (4 - (VAR_5 & 0x3));
  *VAR_3 = *(u32 *)(VAR_4 + VAR_5);
  VAR_5 += 4;
 }

 return (u32)VAR_5 / 4;
}
