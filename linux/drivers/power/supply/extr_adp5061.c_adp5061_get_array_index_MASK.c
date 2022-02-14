
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(const int *VAR_0, u8 VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2 < VAR_0[VAR_3])
   break;
 }

 return VAR_3-1;
}
