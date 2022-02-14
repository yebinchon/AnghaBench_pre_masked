
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_priv_buf {unsigned int dma; unsigned int size; size_t ctx; int * virt; } ;
struct s5p_mfc_dev {unsigned int mem_base; struct device** mem_dev; int mem_bitmap; scalar_t__ mem_virt; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct device*,unsigned int,int *,unsigned int) ;

void FUNC_2(struct s5p_mfc_dev *VAR_1,
         struct s5p_mfc_priv_buf *VAR_2)
{
 if (VAR_1->mem_virt) {
  unsigned int VAR_3 = (VAR_2->dma - VAR_1->mem_base) >> VAR_0;
  unsigned int VAR_4 = VAR_2->size >> VAR_0;

  FUNC_0(VAR_1->mem_bitmap, VAR_3, VAR_4);
 } else {
  struct device *VAR_5 = VAR_1->mem_dev[VAR_2->ctx];

  FUNC_1(VAR_5, VAR_2->size, VAR_2->virt, VAR_2->dma);
 }
 VAR_2->virt = ((void*)0);
 VAR_2->dma = 0;
 VAR_2->size = 0;
}
