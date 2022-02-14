
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int num_links; int num_tx_desc; int quirks; int hw; struct sk_buff** tx_frames; scalar_t__* tx_queue_count; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__* rates; } ;
struct TYPE_6__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_4__ status; TYPE_2__ control; } ;
struct TYPE_7__ {int idx; scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ cipher; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ,char*,struct sk_buff*) ;
 int FUNC_6 (struct wl1271*,int) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*,int) ;
 scalar_t__ FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*,struct sk_buff*) ;

void FUNC_11(struct wl1271 *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;
 struct ieee80211_tx_info *VAR_8;


 if (FUNC_9(VAR_5) != 0) {
  for (VAR_6 = 0; VAR_6 < VAR_5->num_links; VAR_6++)
   FUNC_8(VAR_5, VAR_6);

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   VAR_5->tx_queue_count[VAR_6] = 0;
 }






 FUNC_7(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5->num_tx_desc; VAR_6++) {
  if (VAR_5->tx_frames[VAR_6] == ((void*)0))
   continue;

  VAR_7 = VAR_5->tx_frames[VAR_6];
  FUNC_6(VAR_5, VAR_6);
  FUNC_5(VAR_0, "freeing skb 0x%p", VAR_7);

  if (!FUNC_10(VAR_5, VAR_7)) {




   VAR_8 = FUNC_0(VAR_7);
   FUNC_4(VAR_7, sizeof(struct wl1271_tx_hw_descr));
   if ((VAR_5->quirks & VAR_4) &&
       VAR_8->control.hw_key &&
       VAR_8->control.hw_key->cipher ==
       VAR_3) {
    int VAR_9 = FUNC_1(VAR_7);
    FUNC_3(VAR_7->data + VAR_2,
     VAR_7->data, VAR_9);
    FUNC_4(VAR_7, VAR_2);
   }

   VAR_8->status.rates[0].idx = -1;
   VAR_8->status.rates[0].count = 0;

   FUNC_2(VAR_5->hw, VAR_7);
  }
 }
}
