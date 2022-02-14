
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct qtnf_vif {int dummy; } ;
struct net_device {int name; } ;
struct cfg80211_acl_data {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct qtnf_vif*,struct cfg80211_acl_data const*) ;
 struct qtnf_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
       struct net_device *VAR_1,
       const struct cfg80211_acl_data *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  FUNC_0("%s: failed to set mac ACL ret=%d\n", VAR_1->name, VAR_4);

 return VAR_4;
}
