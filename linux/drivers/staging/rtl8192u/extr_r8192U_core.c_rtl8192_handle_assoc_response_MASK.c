
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_assoc_response_frame {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct r8192_priv*,struct ieee80211_network*) ;

__attribute__((used)) static int FUNC_2(
  struct net_device *VAR_0,
  struct ieee80211_assoc_response_frame *VAR_1,
  struct ieee80211_network *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_2);
 return 0;
}
