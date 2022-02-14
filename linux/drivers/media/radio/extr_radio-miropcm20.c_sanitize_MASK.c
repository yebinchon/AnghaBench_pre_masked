
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(char *VAR_0, int VAR_1)
{
 int VAR_2;
 bool VAR_3 = 1;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] < 32) {
   VAR_0[VAR_2] = ' ';
   VAR_3 = 0;
  }
 }
 return VAR_3;
}
