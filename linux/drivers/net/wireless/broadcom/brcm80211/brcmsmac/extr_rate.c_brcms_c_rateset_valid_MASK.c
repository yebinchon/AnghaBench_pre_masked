
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct brcms_c_rateset {size_t count; int* rates; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct brcms_c_rateset *VAR_1, bool VAR_2)
{
 uint VAR_3;

 if (!VAR_1->count)
  return 0;

 if (!VAR_2)
  return 1;


 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  if (VAR_1->rates[VAR_3] & VAR_0)
   return 1;
 }
 return 0;
}
