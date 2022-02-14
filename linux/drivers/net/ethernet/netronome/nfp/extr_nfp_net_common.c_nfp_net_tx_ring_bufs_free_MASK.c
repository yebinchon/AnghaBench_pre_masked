
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_tx_ring {unsigned int cnt; TYPE_1__* txbufs; int is_xdp; } ;
struct nfp_net_dp {int dummy; } ;
struct TYPE_2__ {int frag; int dma_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_net_dp*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nfp_net_dp *VAR_0,
     struct nfp_net_tx_ring *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->is_xdp)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->cnt; VAR_2++) {
  if (!VAR_1->txbufs[VAR_2].frag)
   return;

  FUNC_1(VAR_0, VAR_1->txbufs[VAR_2].dma_addr);
  FUNC_0(FUNC_2(VAR_1->txbufs[VAR_2].frag));
 }
}
