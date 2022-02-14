
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle_arr {struct vmci_handle* entries; scalar_t__ size; } ;
struct vmci_handle {int dummy; } ;



struct vmci_handle *FUNC_0(struct vmci_handle_arr *VAR_0)
{
 if (VAR_0->size)
  return VAR_0->entries;

 return ((void*)0);
}
