
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ce_array {int n; int * array; } ;


 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static void FUNC_1(struct ce_array *VAR_0, int VAR_1)
{

 if (VAR_0->n - (VAR_1 + 1))
  FUNC_0((void *)&VAR_0->array[VAR_1],
   (void *)&VAR_0->array[VAR_1 + 1],
   (VAR_0->n - (VAR_1 + 1)) * sizeof(u64));

 VAR_0->n--;
}
