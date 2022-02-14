
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ce_array {int n; int * array; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ce_array*,int) ;

__attribute__((used)) static u64 FUNC_3(struct ce_array *VAR_1)
{
 unsigned int VAR_2 = VAR_0;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->n; VAR_3++) {
  unsigned int VAR_5 = FUNC_0(VAR_1->array[VAR_3]);

  if (VAR_2 > VAR_5) {
   VAR_2 = VAR_5;
   VAR_4 = VAR_3;
  }
 }

 FUNC_2(VAR_1, VAR_4);

 return FUNC_1(VAR_1->array[VAR_4]);
}
