
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct cfg80211_scan_request {int * channels; void* ssids; struct wiphy* wiphy; } ;


 int VAR_0 ;
 struct cfg80211_scan_request* FUNC_0 (size_t,int ) ;

__attribute__((used)) static struct cfg80211_scan_request *
FUNC_1(struct wiphy *VAR_1, u32 VAR_2) {
 struct cfg80211_scan_request *VAR_3;
 size_t VAR_4;

 VAR_4 = sizeof(*VAR_3) +
     VAR_2 * sizeof(VAR_3->channels[0]) +
     VAR_2 * sizeof(*VAR_3->ssids);

 VAR_3 = FUNC_0(VAR_4, VAR_0);
 if (VAR_3) {
  VAR_3->wiphy = VAR_1;
  VAR_3->ssids = (void *)(&VAR_3->channels[0]) +
        VAR_2 * sizeof(VAR_3->channels[0]);
 }
 return VAR_3;
}
