
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* pci_dev; TYPE_1__* type; } ;
struct TYPE_4__ {int * resource; } ;
struct TYPE_3__ {int (* mem_bar ) (struct efx_nic*) ;} ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static unsigned int FUNC_2(struct efx_nic *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->type->mem_bar(VAR_0);
 return FUNC_0(&VAR_0->pci_dev->resource[VAR_1]);
}
