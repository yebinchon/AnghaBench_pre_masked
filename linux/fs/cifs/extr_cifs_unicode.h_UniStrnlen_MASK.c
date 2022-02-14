
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static inline size_t
FUNC_0(const wchar_t *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 while (*VAR_0++) {
  VAR_2++;
  if (VAR_2 >= VAR_1)
   break;
 }
 return VAR_2;
}
