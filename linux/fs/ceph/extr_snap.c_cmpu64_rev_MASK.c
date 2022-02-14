
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 if (*(u64 *)VAR_0 < *(u64 *)VAR_1)
  return 1;
 if (*(u64 *)VAR_0 > *(u64 *)VAR_1)
  return -1;
 return 0;
}
