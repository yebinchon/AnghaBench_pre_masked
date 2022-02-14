
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(char *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = 0;
 char *VAR_3 = VAR_0 + VAR_1;
 while (VAR_0 < VAR_3) {
  VAR_2 = ((VAR_2 >> 1) + *(VAR_0++)) ^
   ((VAR_2 & 0x00000001) ? 0x80000000 : 0);
 }
 return VAR_2;
}
