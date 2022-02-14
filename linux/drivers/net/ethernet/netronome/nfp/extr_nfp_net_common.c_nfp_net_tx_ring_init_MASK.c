
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_tx_ring {unsigned int idx; int is_xdp; int qcidx; scalar_t__ qcp_q; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_r_vector {int tx_sync; struct nfp_net* nfp_net; } ;
struct nfp_net {int stride_tx; scalar_t__ tx_bar; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfp_net_tx_ring *VAR_0,
       struct nfp_net_r_vector *VAR_1, unsigned int VAR_2,
       bool VAR_3)
{
 struct nfp_net *VAR_4 = VAR_1->nfp_net;

 VAR_0->idx = VAR_2;
 VAR_0->r_vec = VAR_1;
 VAR_0->is_xdp = VAR_3;
 FUNC_1(&VAR_0->r_vec->tx_sync);

 VAR_0->qcidx = VAR_0->idx * VAR_4->stride_tx;
 VAR_0->qcp_q = VAR_4->tx_bar + FUNC_0(VAR_0->qcidx);
}
