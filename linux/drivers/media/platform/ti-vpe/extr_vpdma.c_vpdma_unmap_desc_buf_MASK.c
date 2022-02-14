
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpdma_data {TYPE_1__* pdev; } ;
struct vpdma_buf {int mapped; int size; int dma_addr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

void FUNC_1(struct vpdma_data *VAR_1, struct vpdma_buf *VAR_2)
{
 struct device *VAR_3 = &VAR_1->pdev->dev;

 if (VAR_2->mapped)
  FUNC_0(VAR_3, VAR_2->dma_addr, VAR_2->size,
    VAR_0);

 VAR_2->mapped = 0;
}
