
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s64 ;
typedef int s32 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline s64 FUNC_1(s64 VAR_0, s32 VAR_1)
{
 if ((VAR_0 > 0 && VAR_1 > 0) || (VAR_0 < 0 && VAR_1 < 0))
  return FUNC_0(VAR_0 + VAR_1 / 2, VAR_1);

 return FUNC_0(VAR_0 - VAR_1 / 2, VAR_1);
}
