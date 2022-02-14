
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_rx_ring {int cnt; TYPE_1__* rxbufs; } ;
struct nfp_net_dp {int xdp_prog; } ;
struct TYPE_2__ {int * frag; scalar_t__ dma_addr; } ;


 int FUNC_0 (struct nfp_net_dp*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct nfp_net_dp *VAR_0,
     struct nfp_net_rx_ring *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->cnt - 1; VAR_2++) {




  if (!VAR_1->rxbufs[VAR_2].frag)
   continue;

  FUNC_0(VAR_0, VAR_1->rxbufs[VAR_2].dma_addr);
  FUNC_1(VAR_1->rxbufs[VAR_2].frag, VAR_0->xdp_prog);
  VAR_1->rxbufs[VAR_2].dma_addr = 0;
  VAR_1->rxbufs[VAR_2].frag = ((void*)0);
 }
}
