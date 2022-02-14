
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1)
{

 VAR_1 += VAR_0;

 VAR_1 = VAR_1 % 64;

 if (VAR_1 < 50)
  return 50 - VAR_1;

 if (VAR_1 >= 61)
  return 64 + 50 - VAR_1;

 return 0;
}
