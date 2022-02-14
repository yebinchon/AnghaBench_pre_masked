
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_80211_bssid_ex {int length; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct ndis_80211_bssid_ex *FUNC_1(
     struct ndis_80211_bssid_ex *VAR_0,
     int *VAR_1, void *VAR_2, int VAR_3)
{
 void *VAR_4, *VAR_5;

 VAR_4 = (char *)VAR_2 + VAR_3;
 VAR_5 = (char *)VAR_0 + *VAR_1;

 if ((int)(VAR_4 - VAR_5) < sizeof(VAR_0->length)) {
  *VAR_1 = 0;
  return ((void*)0);
 } else {
  VAR_0 = (void *)((char *)VAR_0 + *VAR_1);
  *VAR_1 = FUNC_0(VAR_0->length);
  return VAR_0;
 }
}
