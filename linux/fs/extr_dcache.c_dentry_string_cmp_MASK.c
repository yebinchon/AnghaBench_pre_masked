
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const unsigned char *VAR_0, const unsigned char *VAR_1, unsigned VAR_2)
{
 do {
  if (*VAR_0 != *VAR_1)
   return 1;
  VAR_0++;
  VAR_1++;
  VAR_2--;
 } while (VAR_2);
 return 0;
}
