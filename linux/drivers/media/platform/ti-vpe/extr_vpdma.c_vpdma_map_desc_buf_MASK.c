
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpdma_data {TYPE_1__* pdev; } ;
struct vpdma_buf {int mapped; int dma_addr; int size; int addr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

int FUNC_4(struct vpdma_data *VAR_2, struct vpdma_buf *VAR_3)
{
 struct device *VAR_4 = &VAR_2->pdev->dev;

 FUNC_0(VAR_3->mapped);
 VAR_3->dma_addr = FUNC_2(VAR_4, VAR_3->addr, VAR_3->size,
    VAR_0);
 if (FUNC_3(VAR_4, VAR_3->dma_addr)) {
  FUNC_1(VAR_4, "failed to map buffer\n");
  return -VAR_1;
 }

 VAR_3->mapped = 1;

 return 0;
}
