
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_1 >= 4096)
  *VAR_0 = 4096;
 else if (VAR_1 >= 2048)
  *VAR_0 = 2048;
 else if (VAR_1 >= 1024)
  *VAR_0 = 1024;
 else if (VAR_1 >= 512)
  *VAR_0 = 512;
}
