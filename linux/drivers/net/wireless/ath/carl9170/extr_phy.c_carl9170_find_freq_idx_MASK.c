
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static int FUNC_0(int VAR_0, u8 *VAR_1, u8 VAR_2)
{
 int VAR_3 = VAR_0 - 2;

 while (VAR_3 >= 0) {
  if (VAR_2 >= VAR_1[VAR_3])
   return VAR_3;
  VAR_3--;
 }

 return 0;
}
