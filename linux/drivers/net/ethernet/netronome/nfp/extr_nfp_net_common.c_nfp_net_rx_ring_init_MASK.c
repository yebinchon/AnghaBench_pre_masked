
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_rx_ring {unsigned int idx; int fl_qcidx; scalar_t__ qcp_fl; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_r_vector {int rx_sync; struct nfp_net* nfp_net; } ;
struct nfp_net {int stride_rx; scalar_t__ rx_bar; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfp_net_rx_ring *VAR_0,
       struct nfp_net_r_vector *VAR_1, unsigned int VAR_2)
{
 struct nfp_net *VAR_3 = VAR_1->nfp_net;

 VAR_0->idx = VAR_2;
 VAR_0->r_vec = VAR_1;
 FUNC_1(&VAR_0->r_vec->rx_sync);

 VAR_0->fl_qcidx = VAR_0->idx * VAR_3->stride_rx;
 VAR_0->qcp_fl = VAR_3->rx_bar + FUNC_0(VAR_0->fl_qcidx);
}
