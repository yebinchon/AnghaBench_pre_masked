
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cw1200_common {int bss_loss_state; int hw; TYPE_1__* vif; int bss_loss_work; int bss_params_work; int workqueue; int tx_lock; scalar_t__ delayed_unjoin; scalar_t__ delayed_link_loss; } ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (char*,int,int,int,int,int ,scalar_t__) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct cw1200_common *VAR_2,
        int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 VAR_2->delayed_link_loss = 0;
 FUNC_3(&VAR_2->bss_params_work);

 FUNC_6("[STA] CQM BSSLOSS_SM: state: %d init %d good %d bad: %d txlock: %d uj: %d\n",
   VAR_2->bss_loss_state,
   VAR_3, VAR_4, VAR_5,
   FUNC_1(&VAR_2->tx_lock),
   VAR_2->delayed_unjoin);


 if (VAR_2->delayed_unjoin)
  return;

 if (VAR_3) {
  FUNC_7(VAR_2->workqueue,
       &VAR_2->bss_loss_work,
       VAR_0);
  VAR_2->bss_loss_state = 0;


  if (!VAR_2->vif->p2p && !FUNC_1(&VAR_2->tx_lock))
   VAR_6 = 1;
 } else if (VAR_4) {
  FUNC_2(&VAR_2->bss_loss_work);
  VAR_2->bss_loss_state = 0;
  FUNC_8(VAR_2->workqueue, &VAR_2->bss_params_work);
 } else if (VAR_5) {

  if (VAR_2->bss_loss_state < 3)
   VAR_6 = 1;
 } else {
  FUNC_2(&VAR_2->bss_loss_work);
  VAR_2->bss_loss_state = 0;
 }


 if (!VAR_1)
  VAR_6 = 0;


 if (VAR_6) {
  struct sk_buff *VAR_7;

  VAR_2->bss_loss_state++;

  VAR_7 = FUNC_5(VAR_2->hw, VAR_2->vif, 0);
  FUNC_0(!VAR_7);
  if (VAR_7)
   FUNC_4(VAR_2->hw, ((void*)0), VAR_7);
 }
}
