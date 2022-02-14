
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_ring {int n_links; int dma_addr; struct mite_dma_desc* descs; int hw_dev; } ;
struct mite_dma_desc {int dummy; } ;


 int FUNC_0 (int ,int,struct mite_dma_desc*,int ) ;

__attribute__((used)) static void FUNC_1(struct mite_ring *VAR_0)
{
 struct mite_dma_desc *VAR_1 = VAR_0->descs;

 if (VAR_1) {
  FUNC_0(VAR_0->hw_dev,
      VAR_0->n_links * sizeof(*VAR_1),
      VAR_1, VAR_0->dma_addr);
  VAR_0->descs = ((void*)0);
  VAR_0->dma_addr = 0;
  VAR_0->n_links = 0;
 }
}
