
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct wireless_dev {TYPE_2__* netdev; } ;
struct wiphy {int dummy; } ;
struct qtnf_vif {int dummy; } ;
struct ieee80211_mgmt {int da; int frame_control; } ;
struct cfg80211_mgmt_tx_params {int len; scalar_t__ buf; TYPE_1__* chan; scalar_t__ dont_wait_for_ack; scalar_t__ no_cck; scalar_t__ offchan; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {scalar_t__ center_freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct qtnf_vif*,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct qtnf_vif* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_3, struct wireless_dev *VAR_4,
      struct cfg80211_mgmt_tx_params *VAR_5, u64 *VAR_6)
{
 struct qtnf_vif *VAR_7 = FUNC_4(VAR_4->netdev);
 const struct ieee80211_mgmt *VAR_8 = (void *)VAR_5->buf;
 u32 VAR_9 = FUNC_2();
 u16 VAR_10 = 0;
 u16 VAR_11;

 *VAR_6 = VAR_9;

 if (VAR_5->offchan)
  VAR_10 |= VAR_2;

 if (VAR_5->no_cck)
  VAR_10 |= VAR_1;

 if (VAR_5->dont_wait_for_ack)
  VAR_10 |= VAR_0;




 if (VAR_5->chan)
  VAR_11 = VAR_5->chan->center_freq;
 else
  VAR_11 = 0;

 FUNC_1("%s freq:%u; FC:%.4X; DA:%pM; len:%zu; C:%.8X; FL:%.4X\n",
   VAR_4->netdev->name, VAR_11,
   FUNC_0(VAR_8->frame_control), VAR_8->da,
   VAR_5->len, VAR_9, VAR_10);

 return FUNC_3(VAR_7, VAR_9, VAR_10,
       VAR_11, VAR_5->buf, VAR_5->len);
}
