
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_rx_unmap_q {int reuse_pi; int alloc_order; int type; scalar_t__ map_size; } ;
struct bnad {int dummy; } ;
struct bna_rcb {struct bnad_rx_unmap_q* unmap_q; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct bnad *VAR_1, struct bna_rcb *VAR_2)
{
 struct bnad_rx_unmap_q *VAR_3 = VAR_2->unmap_q;

 VAR_3->reuse_pi = -1;
 VAR_3->alloc_order = -1;
 VAR_3->map_size = 0;
 VAR_3->type = VAR_0;
}
