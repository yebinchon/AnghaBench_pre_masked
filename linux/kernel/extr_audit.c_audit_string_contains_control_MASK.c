
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(const char *VAR_0, size_t VAR_1)
{
 const unsigned char *VAR_2;
 for (VAR_2 = VAR_0; VAR_2 < (const unsigned char *)VAR_0 + VAR_1; VAR_2++) {
  if (*VAR_2 == '"' || *VAR_2 < 0x21 || *VAR_2 > 0x7e)
   return 1;
 }
 return 0;
}
