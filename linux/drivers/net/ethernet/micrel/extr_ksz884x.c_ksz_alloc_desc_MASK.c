
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct ksz_hw_desc {int dummy; } ;
struct TYPE_4__ {int size; int alloc; scalar_t__ ring_phys; struct ksz_hw_desc* ring_virt; } ;
struct ksz_hw {TYPE_2__ tx_desc_info; TYPE_2__ rx_desc_info; } ;
struct TYPE_3__ {int alloc_size; scalar_t__ phys; int * virt; scalar_t__ dma_addr; int * alloc_virt; } ;
struct dev_info {TYPE_1__ desc_pool; int pdev; struct ksz_hw hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int * FUNC_1 (int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct dev_info *VAR_1)
{
 struct ksz_hw *VAR_2 = &VAR_1->hw;
 int VAR_3;


 VAR_1->desc_pool.alloc_size =
  VAR_2->rx_desc_info.size * VAR_2->rx_desc_info.alloc +
  VAR_2->tx_desc_info.size * VAR_2->tx_desc_info.alloc +
  VAR_0;

 VAR_1->desc_pool.alloc_virt =
  FUNC_1(VAR_1->pdev,
          VAR_1->desc_pool.alloc_size,
          &VAR_1->desc_pool.dma_addr);
 if (VAR_1->desc_pool.alloc_virt == ((void*)0)) {
  VAR_1->desc_pool.alloc_size = 0;
  return 1;
 }


 VAR_3 = (((ulong) VAR_1->desc_pool.alloc_virt % VAR_0) ?
  (VAR_0 -
  ((ulong) VAR_1->desc_pool.alloc_virt % VAR_0)) : 0);
 VAR_1->desc_pool.virt = VAR_1->desc_pool.alloc_virt + VAR_3;
 VAR_1->desc_pool.phys = VAR_1->desc_pool.dma_addr + VAR_3;


 VAR_2->rx_desc_info.ring_virt = (struct ksz_hw_desc *)
  VAR_1->desc_pool.virt;
 VAR_2->rx_desc_info.ring_phys = VAR_1->desc_pool.phys;
 VAR_3 = VAR_2->rx_desc_info.alloc * VAR_2->rx_desc_info.size;
 VAR_2->tx_desc_info.ring_virt = (struct ksz_hw_desc *)
  (VAR_1->desc_pool.virt + VAR_3);
 VAR_2->tx_desc_info.ring_phys = VAR_1->desc_pool.phys + VAR_3;

 if (FUNC_0(&VAR_2->rx_desc_info, 0))
  return 1;
 if (FUNC_0(&VAR_2->tx_desc_info, 1))
  return 1;

 return 0;
}
