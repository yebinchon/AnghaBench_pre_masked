
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 *VAR_0)
{



 if (*VAR_0 <= 64)
  return;
 else if (*VAR_0 <= 512)
  *VAR_0 = 512;
 else if (*VAR_0 <= 1024)
  *VAR_0 = 1024;
 else if (*VAR_0 <= 2048)
  *VAR_0 = 2048;
 else
  *VAR_0 = 4096;
}
