
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_ssid {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_scan_request {int n_ssids; struct cfg80211_ssid* ssids; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct cfg80211_scan_request *VAR_3)
{
 struct cfg80211_ssid *VAR_4 = VAR_3->ssids;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_ssids; VAR_5++) {
  if (VAR_4[VAR_5].ssid_len != VAR_1)
   continue;

  FUNC_0(VAR_2, "comparing ssid \"%s\"", VAR_4[VAR_5].ssid);
  if (!FUNC_1(VAR_0, VAR_4[VAR_5].ssid,
       VAR_1))
   return 1;
 }
 return 0;
}
