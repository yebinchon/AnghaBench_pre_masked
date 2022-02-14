
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wl1271_link {TYPE_3__* wlvif; int * tx_queue; } ;
struct wl1271 {int* tx_queue_count; int wl_lock; int hw; struct wl1271_link* links; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; int flags; } ;
struct TYPE_6__ {int* tx_queue_count; } ;
struct TYPE_4__ {int idx; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct wl1271 *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct sk_buff *VAR_5;
 struct ieee80211_tx_info *VAR_6;
 unsigned long VAR_7;
 int VAR_8[VAR_1];
 struct wl1271_link *VAR_9 = &VAR_2->links[VAR_3];


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_8[VAR_4] = 0;
  while ((VAR_5 = FUNC_3(&VAR_9->tx_queue[VAR_4]))) {
   VAR_8[VAR_4]++;

   if (FUNC_1(FUNC_7(VAR_2, VAR_5)))
    continue;

   VAR_6 = FUNC_0(VAR_5);
   VAR_6->flags |= VAR_0;
   VAR_6->status.rates[0].idx = -1;
   FUNC_2(VAR_2->hw, VAR_5);
  }
 }

 FUNC_4(&VAR_2->wl_lock, VAR_7);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2->tx_queue_count[VAR_4] -= VAR_8[VAR_4];
  if (VAR_9->wlvif)
   VAR_9->wlvif->tx_queue_count[VAR_4] -= VAR_8[VAR_4];
 }
 FUNC_5(&VAR_2->wl_lock, VAR_7);

 FUNC_6(VAR_2);
}
