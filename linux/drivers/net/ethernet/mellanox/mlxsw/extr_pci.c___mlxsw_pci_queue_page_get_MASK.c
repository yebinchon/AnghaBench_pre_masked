
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mapaddr; } ;
struct mlxsw_pci_queue {TYPE_1__ mem_item; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;

__attribute__((used)) static dma_addr_t FUNC_0(struct mlxsw_pci_queue *VAR_1,
          int VAR_2)
{
 return VAR_1->mem_item.mapaddr + VAR_0 * VAR_2;
}
