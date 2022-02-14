
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_res_to_temp {int resist; int temp; } ;
struct ab8500_btemp {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct ab8500_btemp *VAR_0,
 const struct abx500_res_to_temp *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;






 if (VAR_3 > VAR_1[0].resist)
  VAR_4 = 0;
 else if (VAR_3 <= VAR_1[VAR_2 - 1].resist)
  VAR_4 = VAR_2 - 2;
 else {
  VAR_4 = 0;
  while (!(VAR_3 <= VAR_1[VAR_4].resist &&
   VAR_3 > VAR_1[VAR_4 + 1].resist))
   VAR_4++;
 }

 return VAR_1[VAR_4].temp + ((VAR_1[VAR_4 + 1].temp - VAR_1[VAR_4].temp) *
  (VAR_3 - VAR_1[VAR_4].resist)) / (VAR_1[VAR_4 + 1].resist - VAR_1[VAR_4].resist);
}
