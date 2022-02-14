
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_ssid {scalar_t__ ssid_len; int ssid; } ;
typedef int s32 ;


 int FUNC_0 (int ,int ,scalar_t__) ;

s32
FUNC_1(struct cfg80211_ssid *VAR_0, struct cfg80211_ssid *VAR_1)
{
 if (!VAR_0 || !VAR_1 || (VAR_0->ssid_len != VAR_1->ssid_len))
  return -1;
 return FUNC_0(VAR_0->ssid, VAR_1->ssid, VAR_0->ssid_len);
}
