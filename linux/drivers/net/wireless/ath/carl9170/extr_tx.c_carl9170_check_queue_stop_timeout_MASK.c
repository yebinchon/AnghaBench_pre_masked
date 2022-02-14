
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;
struct carl9170_tx_info {scalar_t__ timeout; } ;
struct ar9170 {TYPE_2__* tx_status; TYPE_1__* hw; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ar9170*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ar9170 *VAR_2)
{
 int VAR_3;
 struct sk_buff *VAR_4;
 struct ieee80211_tx_info *VAR_5;
 struct carl9170_tx_info *VAR_6;
 bool VAR_7 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->hw->queues; VAR_3++) {
  FUNC_4(&VAR_2->tx_status[VAR_3].lock);

  VAR_4 = FUNC_3(&VAR_2->tx_status[VAR_3]);

  if (!VAR_4)
   goto next;

  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = (void *) VAR_5->rate_driver_data;

  if (FUNC_6(VAR_6->timeout +
      FUNC_2(VAR_0)) == 1)
   VAR_7 = 1;

next:
  FUNC_5(&VAR_2->tx_status[VAR_3].lock);
 }

 if (VAR_7) {
  FUNC_1(VAR_2, VAR_1);
 }
}
