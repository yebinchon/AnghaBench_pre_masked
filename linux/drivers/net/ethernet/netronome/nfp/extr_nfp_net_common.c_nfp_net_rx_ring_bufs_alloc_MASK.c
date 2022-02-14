
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_rx_ring {int cnt; struct nfp_net_rx_buf* rxbufs; } ;
struct nfp_net_rx_buf {int frag; int dma_addr; } ;
struct nfp_net_dp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_dp*,int *) ;
 int FUNC_1 (struct nfp_net_dp*,struct nfp_net_rx_ring*) ;

__attribute__((used)) static int
FUNC_2(struct nfp_net_dp *VAR_1,
      struct nfp_net_rx_ring *VAR_2)
{
 struct nfp_net_rx_buf *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_2->rxbufs;

 for (VAR_4 = 0; VAR_4 < VAR_2->cnt - 1; VAR_4++) {
  VAR_3[VAR_4].frag = FUNC_0(VAR_1, &VAR_3[VAR_4].dma_addr);
  if (!VAR_3[VAR_4].frag) {
   FUNC_1(VAR_1, VAR_2);
   return -VAR_0;
  }
 }

 return 0;
}
