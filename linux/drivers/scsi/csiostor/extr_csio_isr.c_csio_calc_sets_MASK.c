
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct irq_affinity {int nr_sets; unsigned int* set_size; struct csio_hw* priv; } ;
struct csio_hw {unsigned int num_pports; } ;



__attribute__((used)) static void FUNC_0(struct irq_affinity *VAR_0, unsigned int VAR_1)
{
 struct csio_hw *VAR_2 = VAR_0->priv;
 u8 VAR_3;

 if (!VAR_1)
  return;

 if (VAR_1 < VAR_2->num_pports) {
  VAR_0->nr_sets = 1;
  VAR_0->set_size[0] = VAR_1;
  return;
 }

 VAR_0->nr_sets = VAR_2->num_pports;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_pports; VAR_3++)
  VAR_0->set_size[VAR_3] = VAR_1 / VAR_2->num_pports;
}
