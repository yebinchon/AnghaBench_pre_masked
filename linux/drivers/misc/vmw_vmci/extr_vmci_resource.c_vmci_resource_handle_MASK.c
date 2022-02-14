
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_resource {struct vmci_handle handle; } ;



struct vmci_handle FUNC_0(struct vmci_resource *VAR_0)
{
 return VAR_0->handle;
}
