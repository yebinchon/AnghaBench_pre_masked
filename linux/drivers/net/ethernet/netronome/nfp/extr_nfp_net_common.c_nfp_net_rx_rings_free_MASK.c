
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {unsigned int num_rx_rings; int * rx_rings; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_net_dp*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfp_net_dp *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++) {
  FUNC_1(VAR_0, &VAR_0->rx_rings[VAR_1]);
  FUNC_2(&VAR_0->rx_rings[VAR_1]);
 }

 FUNC_0(VAR_0->rx_rings);
}
