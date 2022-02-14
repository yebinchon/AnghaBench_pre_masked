
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vmci_handle_arr {size_t size; struct vmci_handle* entries; } ;
struct vmci_handle {int dummy; } ;


 struct vmci_handle VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

struct vmci_handle
FUNC_1(const struct vmci_handle_arr *VAR_1, u32 VAR_2)
{
 if (FUNC_0(VAR_2 >= VAR_1->size))
  return VAR_0;

 return VAR_1->entries[VAR_2];
}
