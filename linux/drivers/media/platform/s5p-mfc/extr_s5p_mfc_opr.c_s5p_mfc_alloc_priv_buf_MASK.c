
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_priv_buf {int size; scalar_t__ dma; unsigned int ctx; scalar_t__ virt; } ;
struct s5p_mfc_dev {int mem_size; scalar_t__ mem_base; scalar_t__* dma_base; struct device** mem_dev; scalar_t__ mem_virt; int mem_bitmap; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_3 (struct device*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct s5p_mfc_dev *VAR_4, unsigned int VAR_5,
      struct s5p_mfc_priv_buf *VAR_6)
{
 unsigned int VAR_7 = VAR_4->mem_size >> VAR_2;
 unsigned int VAR_8 = VAR_6->size >> VAR_2;
 unsigned int VAR_9 = (VAR_3 >> VAR_2) - 1;
 unsigned int VAR_10, VAR_11;

 FUNC_4(3, "Allocating priv: %zu\n", VAR_6->size);

 if (VAR_4->mem_virt) {
  VAR_10 = FUNC_0(VAR_4->mem_bitmap, VAR_7, 0, VAR_8, VAR_9);
  if (VAR_10 > VAR_7)
   goto no_mem;

  FUNC_1(VAR_4->mem_bitmap, VAR_10, VAR_8);
  VAR_11 = VAR_10 << VAR_2;
  VAR_6->virt = VAR_4->mem_virt + VAR_11;
  VAR_6->dma = VAR_4->mem_base + VAR_11;
 } else {
  struct device *VAR_12 = VAR_4->mem_dev[VAR_5];
  dma_addr_t VAR_13 = VAR_4->dma_base[VAR_5];

  VAR_6->ctx = VAR_5;
  VAR_6->virt = FUNC_2(VAR_12, VAR_6->size, &VAR_6->dma, VAR_1);
  if (!VAR_6->virt)
   goto no_mem;
  if (VAR_6->dma < VAR_13) {
   FUNC_5("Invalid memory configuration - buffer (%pad) is below base memory address(%pad)\n",
    &VAR_6->dma, &VAR_13);
   FUNC_3(VAR_12, VAR_6->size, VAR_6->virt, VAR_6->dma);
   return -VAR_0;
  }
 }

 FUNC_4(3, "Allocated addr %p %pad\n", VAR_6->virt, &VAR_6->dma);
 return 0;
no_mem:
 FUNC_5("Allocating private buffer of size %zu failed\n", VAR_6->size);
 return -VAR_0;
}
