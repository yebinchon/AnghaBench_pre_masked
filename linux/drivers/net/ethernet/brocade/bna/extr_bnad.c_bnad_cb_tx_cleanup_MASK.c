
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_tx_info {int tx_cleanup_work; struct bna_tcb** tcb; } ;
struct bnad {int work_q; } ;
struct bna_tx {scalar_t__ priv; } ;
struct bna_tcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_1, struct bna_tx *VAR_2)
{
 struct bnad_tx_info *VAR_3 = (struct bnad_tx_info *)VAR_2->priv;
 struct bna_tcb *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_3->tcb[VAR_5];
  if (!VAR_4)
   continue;
 }

 FUNC_0(VAR_1->work_q, &VAR_3->tx_cleanup_work, 0);
}
