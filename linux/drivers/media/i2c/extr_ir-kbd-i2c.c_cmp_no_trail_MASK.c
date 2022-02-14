
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, u8 *VAR_1, unsigned int VAR_2)
{
 while (--VAR_2) {
  if (*VAR_0++ != *VAR_1++)
   return 1;
 }

 return (*VAR_0 & 0xf0) - (*VAR_1 & 0xf0);
}
