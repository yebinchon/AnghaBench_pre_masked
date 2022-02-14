
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int FUNC_0 (int,int) ;

s32 FUNC_1(s32 VAR_0, int VAR_1)
{
 int VAR_2;
 s32 VAR_3;
 VAR_3 = VAR_0;
 if (VAR_1 > 31)
  VAR_1 = 31;
 else if (VAR_1 < -31)
  VAR_1 = -31;
 if (VAR_1 >= 0) {
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   VAR_3 = FUNC_0(VAR_3, VAR_3);
 } else {
  VAR_3 = VAR_3 >> (-VAR_1);
 }

 return VAR_3;
}
