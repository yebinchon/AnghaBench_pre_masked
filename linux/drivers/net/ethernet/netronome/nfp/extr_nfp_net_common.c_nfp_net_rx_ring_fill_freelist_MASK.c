
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_rx_ring {int cnt; TYPE_1__* rxbufs; } ;
struct nfp_net_dp {int dummy; } ;
struct TYPE_2__ {int dma_addr; int frag; } ;


 int FUNC_0 (struct nfp_net_dp*,struct nfp_net_rx_ring*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct nfp_net_dp *VAR_0,
         struct nfp_net_rx_ring *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->cnt - 1; VAR_2++)
  FUNC_0(VAR_0, VAR_1, VAR_1->rxbufs[VAR_2].frag,
        VAR_1->rxbufs[VAR_2].dma_addr);
}
