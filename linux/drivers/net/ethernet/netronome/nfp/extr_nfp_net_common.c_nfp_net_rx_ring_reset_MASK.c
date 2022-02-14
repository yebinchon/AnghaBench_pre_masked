
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_rx_ring {scalar_t__ wr_p; scalar_t__ rd_p; int cnt; int size; int rxds; TYPE_1__* rxbufs; } ;
struct TYPE_2__ {int * frag; scalar_t__ dma_addr; } ;


 unsigned int FUNC_0 (struct nfp_net_rx_ring*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nfp_net_rx_ring *VAR_0)
{
 unsigned int VAR_1, VAR_2;




 if (VAR_0->wr_p == 0 && VAR_0->rd_p == 0)
  return;


 VAR_1 = FUNC_0(VAR_0, VAR_0->wr_p);
 VAR_2 = VAR_0->cnt - 1;
 VAR_0->rxbufs[VAR_1].dma_addr = VAR_0->rxbufs[VAR_2].dma_addr;
 VAR_0->rxbufs[VAR_1].frag = VAR_0->rxbufs[VAR_2].frag;
 VAR_0->rxbufs[VAR_2].dma_addr = 0;
 VAR_0->rxbufs[VAR_2].frag = ((void*)0);

 FUNC_1(VAR_0->rxds, 0, VAR_0->size);
 VAR_0->wr_p = 0;
 VAR_0->rd_p = 0;
}
