
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0, int *VAR_1, int *VAR_2)
{
 if (VAR_2)
  *VAR_2 = VAR_0 & 0x7FFF;
 if (VAR_1)
  *VAR_1 = (VAR_0 >> 16) & 0x7FFF;
}
