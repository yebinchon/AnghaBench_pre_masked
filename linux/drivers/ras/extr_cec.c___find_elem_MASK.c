
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ce_array {int n; int * array; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ce_array *VAR_1, u64 VAR_2, unsigned int *VAR_3)
{
 int VAR_4 = 0, VAR_5 = VAR_1->n - 1;
 u64 VAR_6;

 while (VAR_4 <= VAR_5) {
  int VAR_7 = (VAR_4 + VAR_5) >> 1;

  VAR_6 = FUNC_0(VAR_1->array[VAR_7]);

  if (VAR_6 < VAR_2)
   VAR_4 = VAR_7 + 1;
  else if (VAR_6 > VAR_2)
   VAR_5 = VAR_7 - 1;
  else if (VAR_6 == VAR_2) {
   if (VAR_3)
    *VAR_3 = VAR_7;

   return VAR_7;
  }
 }
 if (VAR_3)
  *VAR_3 = VAR_4;

 return -VAR_0;
}
