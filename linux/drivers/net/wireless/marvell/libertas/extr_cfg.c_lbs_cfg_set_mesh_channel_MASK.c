
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {struct net_device* mesh_dev; } ;
struct ieee80211_channel {int hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*,int ) ;
 struct lbs_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1,
        struct net_device *VAR_2,
        struct ieee80211_channel *VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = -VAR_0;

 if (VAR_2 != VAR_4->mesh_dev)
  goto out;

 VAR_5 = FUNC_0(VAR_4, VAR_3->hw_value);

 out:
 return VAR_5;
}
