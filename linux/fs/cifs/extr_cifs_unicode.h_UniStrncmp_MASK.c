
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



__attribute__((used)) static inline int
FUNC_0(const wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 if (!VAR_2)
  return 0;
 while ((*VAR_0 == *VAR_1) && *VAR_0 && --VAR_2) {
  VAR_0++;
  VAR_1++;
 }
 return (int) *VAR_0 - (int) *VAR_1;
}
