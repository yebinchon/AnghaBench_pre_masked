
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(u32 VAR_3)
{
 u16 const VAR_4 = ((u16)VAR_1 + 1u) / VAR_2;

 if (VAR_3 <= 0)
  return 0;

 if (VAR_3 > VAR_4)
  return 0;

 if (VAR_3 - 1u > (u32)VAR_0)
  return 0;

 return 1;
}
