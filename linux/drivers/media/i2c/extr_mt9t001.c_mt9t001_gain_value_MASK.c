
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;



__attribute__((used)) static u16 FUNC_0(s32 *VAR_0)
{
 if (*VAR_0 <= 32)
  return *VAR_0;

 if (*VAR_0 <= 64) {
  *VAR_0 &= ~1;
  return (1 << 6) | (*VAR_0 >> 1);
 }

 *VAR_0 &= ~7;
 return ((*VAR_0 - 64) << 5) | (1 << 6) | 32;
}
