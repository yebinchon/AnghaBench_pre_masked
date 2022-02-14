
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int cookie; struct ieee80211_channel chan; } ;
struct mwifiex_private {int adapter; TYPE_1__ roc_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wireless_dev*,int,struct ieee80211_channel*,unsigned int,int ) ;
 int FUNC_1 (int ,int ,char*,...) ;
 struct mwifiex_private* FUNC_2 (int ) ;
 int FUNC_3 (struct mwifiex_private*,int ,struct ieee80211_channel*,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_6,
       struct wireless_dev *VAR_7,
       struct ieee80211_channel *VAR_8,
       unsigned int VAR_9, u64 *VAR_10)
{
 struct mwifiex_private *VAR_11 = FUNC_2(VAR_7->netdev);
 int VAR_12;

 if (!VAR_8 || !VAR_10) {
  FUNC_1(VAR_11->adapter, VAR_2, "Invalid parameter for ROC\n");
  return -VAR_1;
 }

 if (VAR_11->roc_cfg.cookie) {
  FUNC_1(VAR_11->adapter, VAR_5,
       "info: ongoing ROC, cookie = 0x%llx\n",
       VAR_11->roc_cfg.cookie);
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_11, VAR_4, VAR_8,
      VAR_9);

 if (!VAR_12) {
  *VAR_10 = FUNC_4() | 1;
  VAR_11->roc_cfg.cookie = *VAR_10;
  VAR_11->roc_cfg.chan = *VAR_8;

  FUNC_0(VAR_7, *VAR_10, VAR_8,
       VAR_9, VAR_3);

  FUNC_1(VAR_11->adapter, VAR_5,
       "info: ROC, cookie = 0x%llx\n", *VAR_10);
 }

 return VAR_12;
}
