
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ar9170 {int usb_tasklet; int tx_ampdu_upload; int tx_total_pending; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ar9170 *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_1->tx_total_pending);

 if (VAR_3->flags & VAR_0)
  FUNC_1(&VAR_1->tx_ampdu_upload);

 if (FUNC_2(VAR_2))
  FUNC_3(&VAR_1->usb_tasklet);
}
