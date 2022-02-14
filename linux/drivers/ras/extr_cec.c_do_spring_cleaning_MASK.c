
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ce_array {int n; int* array; int decays_done; scalar_t__ decay_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ce_array *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->n; VAR_3++) {
  u8 VAR_4 = FUNC_0(VAR_2->array[VAR_3]);

  if (!VAR_4)
   continue;

  VAR_4--;

  VAR_2->array[VAR_3] &= ~(VAR_1 << VAR_0);
  VAR_2->array[VAR_3] |= (VAR_4 << VAR_0);
 }
 VAR_2->decay_count = 0;
 VAR_2->decays_done++;
}
