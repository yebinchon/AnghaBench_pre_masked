
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct rtw_hal {int current_channel; } ;
struct TYPE_2__ {int txpwr_regd; int chplan; } ;
struct rtw_dev {TYPE_1__ regd; struct rtw_hal hal; } ;
struct regulatory_request {int initiator; int * alpha2; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,struct wiphy*,struct regulatory_request*) ;
 struct ieee80211_hw* FUNC_3 (struct wiphy*) ;

void FUNC_4(struct wiphy *VAR_1, struct regulatory_request *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_3(VAR_1);
 struct rtw_dev *VAR_4 = VAR_3->priv;
 struct rtw_hal *VAR_5 = &VAR_4->hal;

 FUNC_2(VAR_4, VAR_1, VAR_2);
 FUNC_0(VAR_4, VAR_0,
  "get alpha2 %c%c from initiator %d, mapping to chplan 0x%x, txregd %d\n",
  VAR_2->alpha2[0], VAR_2->alpha2[1], VAR_2->initiator,
  VAR_4->regd.chplan, VAR_4->regd.txpwr_regd);

 FUNC_1(VAR_4, VAR_5->current_channel);
}
