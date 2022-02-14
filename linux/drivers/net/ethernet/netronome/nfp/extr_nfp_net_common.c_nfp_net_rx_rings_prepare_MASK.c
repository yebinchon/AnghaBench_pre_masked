
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {unsigned int num_rx_rings; int * rx_rings; } ;
struct nfp_net {int * r_vecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nfp_net_dp*,int *) ;
 scalar_t__ FUNC_3 (struct nfp_net_dp*,int *) ;
 int FUNC_4 (struct nfp_net_dp*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct nfp_net *VAR_2, struct nfp_net_dp *VAR_3)
{
 unsigned int VAR_4;

 VAR_3->rx_rings = FUNC_0(VAR_3->num_rx_rings, sizeof(*VAR_3->rx_rings),
          VAR_1);
 if (!VAR_3->rx_rings)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_rx_rings; VAR_4++) {
  FUNC_6(&VAR_3->rx_rings[VAR_4], &VAR_2->r_vecs[VAR_4], VAR_4);

  if (FUNC_2(VAR_3, &VAR_3->rx_rings[VAR_4]))
   goto err_free_prev;

  if (FUNC_3(VAR_3, &VAR_3->rx_rings[VAR_4]))
   goto err_free_ring;
 }

 return 0;

err_free_prev:
 while (VAR_4--) {
  FUNC_4(VAR_3, &VAR_3->rx_rings[VAR_4]);
err_free_ring:
  FUNC_5(&VAR_3->rx_rings[VAR_4]);
 }
 FUNC_1(VAR_3->rx_rings);
 return -VAR_0;
}
