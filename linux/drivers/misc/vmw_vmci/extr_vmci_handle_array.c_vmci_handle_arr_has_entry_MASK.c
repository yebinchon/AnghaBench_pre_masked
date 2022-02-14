
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vmci_handle_arr {size_t size; int * entries; } ;
struct vmci_handle {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct vmci_handle) ;

bool FUNC_1(const struct vmci_handle_arr *VAR_0,
          struct vmci_handle VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
  if (FUNC_0(VAR_0->entries[VAR_2], VAR_1))
   return 1;

 return 0;
}
