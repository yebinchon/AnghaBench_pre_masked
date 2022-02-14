
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sta_info {scalar_t__ tx_consecutive_exc; int tx_rate_idx; scalar_t__ tx_rate; int addr; scalar_t__ tx_since_last_failure; } ;
struct sk_buff {scalar_t__ cb; scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; } ;
struct hostap_skb_tx_data {scalar_t__ rate; } ;
struct TYPE_7__ {TYPE_5__* ap; TYPE_1__* dev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_8__ {int sta_table_lock; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 struct sta_info* FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (int,struct sta_info*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(local_info_t *VAR_3, struct sk_buff *VAR_4)
{
 struct sta_info *VAR_5;
 struct ieee80211_hdr *VAR_6;
 struct hostap_skb_tx_data *VAR_7;

 VAR_6 = (struct ieee80211_hdr *) VAR_4->data;
 VAR_7 = (struct hostap_skb_tx_data *) VAR_4->cb;

 FUNC_3(&VAR_3->ap->sta_table_lock);
 VAR_5 = FUNC_1(VAR_3->ap, VAR_6->addr1);
 if (!VAR_5) {
  FUNC_4(&VAR_3->ap->sta_table_lock);
  FUNC_0(VAR_0, "%s: Could not find STA %pM"
         " for this TX error (@%lu)\n",
         VAR_3->dev->name, VAR_6->addr1, VAR_2);
  return;
 }

 VAR_5->tx_since_last_failure = 0;
 VAR_5->tx_consecutive_exc++;

 if (VAR_5->tx_consecutive_exc >= VAR_1 &&
     VAR_5->tx_rate_idx > 0 && VAR_7->rate <= VAR_5->tx_rate) {

  int VAR_8, VAR_9;
  VAR_8 = VAR_9 = VAR_5->tx_rate_idx;
  while (VAR_9 > 0) {
   VAR_9--;
   if (FUNC_2(VAR_9, VAR_5, VAR_3)) {
    VAR_5->tx_rate_idx = VAR_9;
    break;
   }
  }
  if (VAR_8 != VAR_5->tx_rate_idx) {
   switch (VAR_5->tx_rate_idx) {
   case 0: VAR_5->tx_rate = 10; break;
   case 1: VAR_5->tx_rate = 20; break;
   case 2: VAR_5->tx_rate = 55; break;
   case 3: VAR_5->tx_rate = 110; break;
   default: VAR_5->tx_rate = 0; break;
   }
   FUNC_0(VAR_0,
          "%s: STA %pM TX rate lowered to %d\n",
          VAR_3->dev->name, VAR_5->addr, VAR_5->tx_rate);
  }
  VAR_5->tx_consecutive_exc = 0;
 }
 FUNC_4(&VAR_3->ap->sta_table_lock);
}
