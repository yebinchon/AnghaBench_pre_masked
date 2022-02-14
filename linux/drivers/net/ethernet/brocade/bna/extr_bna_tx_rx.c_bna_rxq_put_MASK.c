
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxq {int qe; } ;
struct bna_rx_mod {int rxq_free_count; int rxq_free_q; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct bna_rx_mod *VAR_0, struct bna_rxq *VAR_1)
{
 FUNC_0(&VAR_1->qe, &VAR_0->rxq_free_q);
 VAR_0->rxq_free_count++;
}
