
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_priv_buf {size_t ctx; int size; int dma; int * virt; } ;
struct s5p_mfc_dev {struct device** mem_dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int *,int ) ;

void FUNC_1(struct s5p_mfc_dev *VAR_0,
         struct s5p_mfc_priv_buf *VAR_1)
{
 struct device *VAR_2 = VAR_0->mem_dev[VAR_1->ctx];
 FUNC_0(VAR_2, VAR_1->size, VAR_1->virt, VAR_1->dma);
 VAR_1->virt = ((void*)0);
 VAR_1->dma = 0;
 VAR_1->size = 0;
}
