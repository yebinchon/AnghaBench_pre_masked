
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;



__attribute__((used)) static int FUNC_0(pid_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 1;





 if (VAR_1 == 0 || VAR_1 == 1)
  return VAR_1;

 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {

  while (VAR_0[VAR_2] == VAR_0[VAR_2-1]) {
   VAR_2++;
   if (VAR_2 == VAR_1)
    goto after;
  }

  VAR_0[VAR_3] = VAR_0[VAR_2];
  VAR_3++;
 }
after:
 return VAR_3;
}
