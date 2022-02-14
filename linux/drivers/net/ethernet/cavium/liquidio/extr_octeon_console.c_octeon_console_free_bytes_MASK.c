
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline int FUNC_0(u32 VAR_0,
         u32 VAR_1,
         u32 VAR_2)
{
 if (VAR_2 >= VAR_0 || VAR_1 >= VAR_0)
  return -1;

 return ((VAR_0 - 1) - (VAR_1 - VAR_2)) % VAR_0;
}
