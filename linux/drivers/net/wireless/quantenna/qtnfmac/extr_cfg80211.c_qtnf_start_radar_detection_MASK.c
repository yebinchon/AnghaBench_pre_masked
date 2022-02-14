
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct qtnf_vif {int dummy; } ;
struct net_device {int name; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct qtnf_vif*,struct cfg80211_chan_def*,int ) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct wiphy*,int ) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_2,
          struct net_device *VAR_3,
          struct cfg80211_chan_def *VAR_4,
          u32 VAR_5)
{
 struct qtnf_vif *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 if (FUNC_3(VAR_2, VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 if (VAR_7)
  FUNC_0("%s: failed to start CAC ret=%d\n", VAR_3->name, VAR_7);

 return VAR_7;
}
