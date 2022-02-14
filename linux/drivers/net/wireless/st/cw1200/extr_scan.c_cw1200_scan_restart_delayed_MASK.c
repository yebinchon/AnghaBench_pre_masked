
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {scalar_t__ join_status; int delayed_unjoin; scalar_t__ delayed_link_loss; TYPE_1__* hw; int unjoin_work; int workqueue; } ;
struct TYPE_2__ {int wiphy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int,int ,int ) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct cw1200_common*) ;

__attribute__((used)) static void FUNC_6(struct cw1200_common *VAR_1)
{

 if (VAR_1->join_status == VAR_0) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 }

 if (VAR_1->delayed_unjoin) {
  VAR_1->delayed_unjoin = 0;
  if (FUNC_3(VAR_1->workqueue, &VAR_1->unjoin_work) <= 0)
   FUNC_5(VAR_1);
 } else if (VAR_1->delayed_link_loss) {
   FUNC_4(VAR_1->hw->wiphy, "[CQM] Requeue BSS loss.\n");
   VAR_1->delayed_link_loss = 0;
   FUNC_0(VAR_1, 1, 0, 0);
 }
}
