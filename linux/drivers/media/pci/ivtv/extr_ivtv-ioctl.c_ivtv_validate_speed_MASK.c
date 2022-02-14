
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 < 0 ? -1 : 1;
 int VAR_3;

 if (VAR_0 == 0)
  VAR_0 = 1000;
 if (VAR_1 < 0)
  VAR_1 = -VAR_1;
 if (VAR_0 < 0)
  VAR_0 = -VAR_0;

 if (VAR_0 <= VAR_1) {
  if (VAR_1 > 1500)
   return VAR_2 * 2000;
  if (VAR_1 > 1000)
   return VAR_2 * 1500;
 }
 else {
  if (VAR_1 >= 2000)
   return VAR_2 * 2000;
  if (VAR_1 >= 1500)
   return VAR_2 * 1500;
  if (VAR_1 >= 1000)
   return VAR_2 * 1000;
 }
 if (VAR_1 == 0)
  return 1000;
 if (VAR_1 == 1 || VAR_1 == 1000)
  return VAR_2 * VAR_1;

 VAR_3 = VAR_1;
 VAR_1 = 1000 / VAR_1;
 if (1000 / VAR_0 == VAR_1)
  VAR_1 += (VAR_0 < VAR_3) ? -1 : 1;
 if (VAR_1 > 60) return 1000 / (VAR_2 * 60);
 return 1000 / (VAR_2 * VAR_1);
}
