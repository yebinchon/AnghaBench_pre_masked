
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_rx_ring {int dummy; } ;
struct nfp_net_r_vector {struct nfp_net* nfp_net; struct nfp_net_rx_ring* rx_ring; } ;
struct nfp_net_dp {int dummy; } ;
struct nfp_net {struct nfp_net_dp dp; } ;


 scalar_t__ FUNC_0 (struct nfp_net*,struct nfp_net_dp*,struct nfp_net_r_vector*,struct nfp_net_rx_ring*) ;

__attribute__((used)) static bool FUNC_1(struct nfp_net_r_vector *VAR_0)
{
 struct nfp_net_rx_ring *VAR_1 = VAR_0->rx_ring;
 struct nfp_net *VAR_2 = VAR_0->nfp_net;
 struct nfp_net_dp *VAR_3 = &VAR_2->dp;
 unsigned int VAR_4 = 512;

 while (FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1) && VAR_4--)
  continue;

 return VAR_4;
}
