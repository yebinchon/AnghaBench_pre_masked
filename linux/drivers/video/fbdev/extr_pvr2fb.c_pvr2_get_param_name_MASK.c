
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_params {int val; char* name; } ;



__attribute__((used)) static char *FUNC_0(const struct pvr2_params *VAR_0, int VAR_1,
     int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0[VAR_3].val == VAR_1)
   return VAR_0[VAR_3].name;
 }
 return ((void*)0);
}
