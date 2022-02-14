
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxp {int qe; } ;
struct bna_rx_mod {int rxp_free_count; int rxp_free_q; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct bna_rx_mod *VAR_0, struct bna_rxp *VAR_1)
{
 FUNC_0(&VAR_1->qe, &VAR_0->rxp_free_q);
 VAR_0->rxp_free_count++;
}
