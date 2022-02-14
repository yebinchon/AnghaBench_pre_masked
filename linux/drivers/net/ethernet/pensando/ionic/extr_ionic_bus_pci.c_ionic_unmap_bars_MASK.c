
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_dev_bar {scalar_t__ len; int * vaddr; scalar_t__ bus_addr; } ;
struct ionic {struct ionic_dev_bar* bars; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ionic *VAR_1)
{
 struct ionic_dev_bar *VAR_2 = VAR_1->bars;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3].vaddr) {
   FUNC_0(VAR_2[VAR_3].vaddr);
   VAR_2[VAR_3].bus_addr = 0;
   VAR_2[VAR_3].vaddr = ((void*)0);
   VAR_2[VAR_3].len = 0;
  }
 }
}
