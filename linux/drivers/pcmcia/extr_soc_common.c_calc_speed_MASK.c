
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short
FUNC_0(unsigned short *VAR_0, int VAR_1, unsigned short VAR_2)
{
 unsigned short VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3 < VAR_0[VAR_4])
   VAR_3 = VAR_0[VAR_4];
 if (VAR_3 == 0)
  VAR_3 = VAR_2;

 return VAR_3;
}
