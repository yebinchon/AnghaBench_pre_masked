
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t loff_t ;



__attribute__((used)) static inline size_t FUNC_0(loff_t VAR_0, size_t VAR_1, size_t VAR_2)
{
 if (VAR_0 > VAR_2)
  return 0;

 if ((VAR_0 + VAR_1) > VAR_2)
  return VAR_2 - VAR_0;

 return VAR_1;
}
