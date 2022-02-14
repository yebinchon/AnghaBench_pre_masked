
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_dma_dscr {int * vaddr; int daddr; int size; } ;
struct mei_device {int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mei_device *VAR_0,
          struct mei_dma_dscr *VAR_1)
{
 if (!VAR_1->vaddr)
  return;

 FUNC_0(VAR_0->dev, VAR_1->size, VAR_1->vaddr, VAR_1->daddr);
 VAR_1->vaddr = ((void*)0);
}
