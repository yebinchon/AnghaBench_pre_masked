
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_domain {int dummy; } ;
struct vmd_dev {TYPE_1__* dev; struct dma_domain dma_domain; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dma_domain*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vmd_dev *VAR_0)
{
 struct dma_domain *VAR_1 = &VAR_0->dma_domain;

 if (FUNC_1(&VAR_0->dev->dev))
  FUNC_0(VAR_1);
}
