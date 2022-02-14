
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnad_rx_unmap_q {int type; } ;
struct bnad {int dummy; } ;
struct bna_rcb {int q_depth; struct bnad_rx_unmap_q* unmap_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bna_rcb*,int ) ;
 int FUNC_2 (struct bnad*,struct bna_rcb*,int) ;
 int FUNC_3 (struct bnad*,struct bna_rcb*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct bnad *VAR_1, struct bna_rcb *VAR_2)
{
 struct bnad_rx_unmap_q *VAR_3 = VAR_2->unmap_q;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_2->q_depth);
 if (!(VAR_4 >> VAR_0))
  return;

 if (FUNC_0(VAR_3->type))
  FUNC_3(VAR_1, VAR_2, VAR_4);
 else
  FUNC_2(VAR_1, VAR_2, VAR_4);
}
