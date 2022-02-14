
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_rx_unmap_q {int type; struct bnad_rx_unmap* unmap; } ;
struct bnad_rx_unmap {int dummy; } ;
struct bnad {int dummy; } ;
struct bna_rcb {int q_depth; struct bnad_rx_unmap_q* unmap_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bnad*,struct bna_rcb*) ;
 int FUNC_2 (struct bnad*,struct bnad_rx_unmap*) ;
 int FUNC_3 (struct bnad*,struct bnad_rx_unmap*) ;

__attribute__((used)) static void
FUNC_4(struct bnad *VAR_0, struct bna_rcb *VAR_1)
{
 struct bnad_rx_unmap_q *VAR_2 = VAR_1->unmap_q;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->q_depth; VAR_3++) {
  struct bnad_rx_unmap *VAR_4 = &VAR_2->unmap[VAR_3];

  if (FUNC_0(VAR_2->type))
   FUNC_3(VAR_0, VAR_4);
  else
   FUNC_2(VAR_0, VAR_4);
 }
 FUNC_1(VAR_0, VAR_1);
}
