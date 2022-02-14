
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_tx_ring {int size; int dma; int * txds; int * txbufs; scalar_t__ cnt; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_r_vector {TYPE_1__* nfp_net; } ;
struct nfp_net_dp {int dev; } ;
struct TYPE_2__ {struct nfp_net_dp dp; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfp_net_tx_ring *VAR_0)
{
 struct nfp_net_r_vector *VAR_1 = VAR_0->r_vec;
 struct nfp_net_dp *VAR_2 = &VAR_1->nfp_net->dp;

 FUNC_1(VAR_0->txbufs);

 if (VAR_0->txds)
  FUNC_0(VAR_2->dev, VAR_0->size,
      VAR_0->txds, VAR_0->dma);

 VAR_0->cnt = 0;
 VAR_0->txbufs = ((void*)0);
 VAR_0->txds = ((void*)0);
 VAR_0->dma = 0;
 VAR_0->size = 0;
}
