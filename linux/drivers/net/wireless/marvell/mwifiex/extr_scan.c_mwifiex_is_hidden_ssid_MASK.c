
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_ssid {int ssid_len; scalar_t__* ssid; } ;



__attribute__((used)) static bool FUNC_0(struct cfg80211_ssid *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ssid_len; VAR_1++) {
  if (VAR_0->ssid[VAR_1])
   return 0;
 }

 return 1;
}
