
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_net_dp {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_stack_tx_rings; TYPE_2__* netdev; int num_rx_rings; } ;
struct nfp_net {unsigned int max_r_vecs; TYPE_1__ dp; int * r_vecs; } ;
struct TYPE_5__ {scalar_t__ real_num_tx_queues; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct nfp_net*,struct nfp_net_dp*) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (TYPE_1__*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct nfp_net *VAR_0, struct nfp_net_dp *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->max_r_vecs; VAR_2++)
  FUNC_4(&VAR_0->dp, &VAR_0->r_vecs[VAR_2], VAR_2);

 VAR_3 = FUNC_0(VAR_0->dp.netdev, VAR_0->dp.num_rx_rings);
 if (VAR_3)
  return VAR_3;

 if (VAR_0->dp.netdev->real_num_tx_queues != VAR_0->dp.num_stack_tx_rings) {
  VAR_3 = FUNC_1(VAR_0->dp.netdev,
         VAR_0->dp.num_stack_tx_rings);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_3(VAR_0);
}
