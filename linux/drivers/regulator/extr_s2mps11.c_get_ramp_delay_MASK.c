
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 unsigned char VAR_1 = 0;

 VAR_0 /= 6250;

 while (1) {
  VAR_0 = VAR_0 >> 1;
  if (VAR_0 == 0)
   break;
  VAR_1++;
 }

 if (VAR_1 > 3)
  VAR_1 = 3;

 return VAR_1;
}
