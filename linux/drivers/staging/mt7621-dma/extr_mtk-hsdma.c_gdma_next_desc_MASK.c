
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int dummy; } ;
struct mtk_hsdma_chan {scalar_t__ next_sg; int * desc; int vchan; } ;


 int * FUNC_0 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mtk_hsdma_chan *VAR_0)
{
 struct virt_dma_desc *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->vchan);
 if (!VAR_1) {
  VAR_0->desc = ((void*)0);
  return 0;
 }
 VAR_0->desc = FUNC_0(VAR_1);
 VAR_0->next_sg = 0;

 return 1;
}
