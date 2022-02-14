
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;



__attribute__((used)) static bool FUNC_0(s64 VAR_0, s64 VAR_1)
{

 s64 VAR_2 = (s64)((u64)VAR_0 + (u64)VAR_1);

 if (VAR_1 < 0)
  return VAR_2 > VAR_0;
 return VAR_2 < VAR_0;
}
