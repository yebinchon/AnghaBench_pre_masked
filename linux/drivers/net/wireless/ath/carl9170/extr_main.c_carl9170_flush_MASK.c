
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ar9170 {int tx_flush; int tx_total_queued; int tx_ampdu_upload; int * tx_pending; TYPE_1__* hw; } ;
struct TYPE_2__ {int queues; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ar9170*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  int VAR_4;






  for (VAR_4 = 0; VAR_4 < VAR_2->hw->queues; VAR_4++) {
   struct sk_buff *VAR_5;

   while ((VAR_5 = FUNC_5(&VAR_2->tx_pending[VAR_4]))) {
    struct ieee80211_tx_info *VAR_6;

    VAR_6 = FUNC_0(VAR_5);
    if (VAR_6->flags & VAR_1)
     FUNC_2(&VAR_2->tx_ampdu_upload);

    FUNC_4(VAR_2, VAR_5, 0);
   }
  }
 }


 if (FUNC_3(&VAR_2->tx_total_queued))
  FUNC_1(FUNC_6(&VAR_2->tx_flush, VAR_0) == 0);
}
