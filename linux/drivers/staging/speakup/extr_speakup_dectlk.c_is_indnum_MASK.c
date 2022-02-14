
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



__attribute__((used)) static int FUNC_0(u_char *VAR_0)
{
 if ((*VAR_0 >= '0') && (*VAR_0 <= '9')) {
  *VAR_0 = *VAR_0 - '0';
  return 1;
 }
 return 0;
}
