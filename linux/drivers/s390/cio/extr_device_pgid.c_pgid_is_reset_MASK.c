
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgid {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct pgid *VAR_0)
{
 char *VAR_1;

 for (VAR_1 = (char *)VAR_0 + 1; VAR_1 < (char *)(VAR_0 + 1); VAR_1++) {
  if (*VAR_1 != 0)
   return 0;
 }
 return 1;
}
