
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {scalar_t__ num_stack_tx_rings; scalar_t__ num_r_vecs; int * rx_rings; int * tx_rings; scalar_t__ fl_bufsz; } ;
struct nfp_net {struct nfp_net_dp dp; } ;


 int VAR_0 ;
 struct nfp_net_dp* FUNC_0 (int,int ) ;

struct nfp_net_dp *FUNC_1(struct nfp_net *VAR_1)
{
 struct nfp_net_dp *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 *VAR_2 = VAR_1->dp;


 VAR_2->fl_bufsz = 0;
 VAR_2->tx_rings = ((void*)0);
 VAR_2->rx_rings = ((void*)0);
 VAR_2->num_r_vecs = 0;
 VAR_2->num_stack_tx_rings = 0;

 return VAR_2;
}
