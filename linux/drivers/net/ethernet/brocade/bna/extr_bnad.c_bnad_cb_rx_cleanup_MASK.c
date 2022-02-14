
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnad_rx_info {int rx_cleanup_work; struct bnad_rx_ctrl* rx_ctrl; } ;
struct bnad_rx_ctrl {struct bna_ccb* ccb; } ;
struct bnad {int work_q; } ;
struct bna_rx {scalar_t__ priv; } ;
struct bna_ccb {TYPE_1__** rcb; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct bnad *VAR_2, struct bna_rx *VAR_3)
{
 struct bnad_rx_info *VAR_4 = (struct bnad_rx_info *)VAR_3->priv;
 struct bna_ccb *VAR_5;
 struct bnad_rx_ctrl *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->rx_ctrl[VAR_7];
  VAR_5 = VAR_6->ccb;
  if (!VAR_5)
   continue;

  FUNC_0(VAR_1, &VAR_5->rcb[0]->flags);

  if (VAR_5->rcb[1])
   FUNC_0(VAR_1, &VAR_5->rcb[1]->flags);
 }

 FUNC_1(VAR_2->work_q, &VAR_4->rx_cleanup_work);
}
