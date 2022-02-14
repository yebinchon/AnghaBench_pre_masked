
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnad_rx_unmap_q {int type; struct bnad_rx_unmap* unmap; } ;
struct bnad_rx_unmap {int dummy; } ;
struct bnad {int dummy; } ;
struct bna_rcb {int q_depth; struct bnad_rx_unmap_q* unmap_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct bnad*,struct bnad_rx_unmap*) ;
 int FUNC_3 (struct bnad*,struct bnad_rx_unmap*) ;

__attribute__((used)) static void
FUNC_4(struct bnad *VAR_0, struct bna_rcb *VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 struct bnad_rx_unmap_q *VAR_4;
 struct bnad_rx_unmap *VAR_5;
 u32 VAR_6, VAR_7;

 VAR_4 = VAR_1->unmap_q;
 for (VAR_7 = 0, VAR_6 = VAR_2; VAR_7 < VAR_3; VAR_7++) {
  VAR_5 = &VAR_4->unmap[VAR_6];
  FUNC_1(VAR_6, VAR_1->q_depth);

  if (FUNC_0(VAR_4->type))
   FUNC_3(VAR_0, VAR_5);
  else
   FUNC_2(VAR_0, VAR_5);
 }
}
