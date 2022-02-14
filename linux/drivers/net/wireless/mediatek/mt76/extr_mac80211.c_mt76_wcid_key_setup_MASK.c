
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_wcid {int rx_check_pn; int * rx_key_pn; } ;
struct mt76_dev {int dummy; } ;
struct TYPE_2__ {int pn; } ;
struct ieee80211_key_seq {TYPE_1__ ccmp; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_key_conf*,int,struct ieee80211_key_seq*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct mt76_dev *VAR_2, struct mt76_wcid *VAR_3,
    struct ieee80211_key_conf *VAR_4)
{
 struct ieee80211_key_seq VAR_5;
 int VAR_6;

 VAR_3->rx_check_pn = 0;

 if (!VAR_4)
  return;

 if (VAR_4->cipher != VAR_1)
  return;

 VAR_3->rx_check_pn = 1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_4, VAR_6, &VAR_5);
  FUNC_1(VAR_3->rx_key_pn[VAR_6], VAR_5.ccmp.pn, sizeof(VAR_5.ccmp.pn));
 }
}
