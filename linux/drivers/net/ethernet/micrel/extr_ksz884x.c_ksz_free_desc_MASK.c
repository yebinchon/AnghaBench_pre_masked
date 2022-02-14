
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ring; scalar_t__ ring_phys; int * ring_virt; } ;
struct TYPE_5__ {int * ring; scalar_t__ ring_phys; int * ring_virt; } ;
struct ksz_hw {TYPE_3__ tx_desc_info; TYPE_2__ rx_desc_info; } ;
struct TYPE_4__ {int * alloc_virt; scalar_t__ alloc_size; int dma_addr; } ;
struct dev_info {TYPE_1__ desc_pool; int pdev; struct ksz_hw hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct dev_info *VAR_0)
{
 struct ksz_hw *VAR_1 = &VAR_0->hw;


 VAR_1->rx_desc_info.ring_virt = ((void*)0);
 VAR_1->tx_desc_info.ring_virt = ((void*)0);
 VAR_1->rx_desc_info.ring_phys = 0;
 VAR_1->tx_desc_info.ring_phys = 0;


 if (VAR_0->desc_pool.alloc_virt)
  FUNC_1(
   VAR_0->pdev,
   VAR_0->desc_pool.alloc_size,
   VAR_0->desc_pool.alloc_virt,
   VAR_0->desc_pool.dma_addr);


 VAR_0->desc_pool.alloc_size = 0;
 VAR_0->desc_pool.alloc_virt = ((void*)0);

 FUNC_0(VAR_1->rx_desc_info.ring);
 VAR_1->rx_desc_info.ring = ((void*)0);
 FUNC_0(VAR_1->tx_desc_info.ring);
 VAR_1->tx_desc_info.ring = ((void*)0);
}
