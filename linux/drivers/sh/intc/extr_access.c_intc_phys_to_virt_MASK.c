
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_window {unsigned long phys; unsigned long size; scalar_t__ virt; } ;
struct intc_desc_int {int nr_windows; struct intc_window* window; } ;



unsigned long FUNC_0(struct intc_desc_int *VAR_0, unsigned long VAR_1)
{
 struct intc_window *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->nr_windows; VAR_3++) {
  VAR_2 = VAR_0->window + VAR_3;

  if (VAR_1 < VAR_2->phys)
   continue;

  if (VAR_1 >= (VAR_2->phys + VAR_2->size))
   continue;

  VAR_1 -= VAR_2->phys;
  VAR_1 += (unsigned long)VAR_2->virt;

  return VAR_1;
 }


 return VAR_1;
}
