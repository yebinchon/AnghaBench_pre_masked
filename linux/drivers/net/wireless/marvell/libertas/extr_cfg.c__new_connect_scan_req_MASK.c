
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {TYPE_2__** bands; } ;
struct cfg80211_ssid {int dummy; } ;
struct cfg80211_scan_request {int n_channels; int n_ssids; TYPE_3__* ssids; TYPE_1__** channels; } ;
struct cfg80211_connect_params {int ssid_len; int ssid; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {int ssid_len; int ssid; } ;
struct TYPE_5__ {int n_channels; TYPE_1__* channels; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct cfg80211_scan_request*) ;
 struct cfg80211_scan_request* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static struct cfg80211_scan_request *
FUNC_4(struct wiphy *VAR_3, struct cfg80211_connect_params *VAR_4)
{
 struct cfg80211_scan_request *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = FUNC_0(VAR_3);
 enum nl80211_band VAR_8;

 VAR_5 = FUNC_2(sizeof(*VAR_5) + sizeof(struct cfg80211_ssid) +
         VAR_7 * sizeof(void *),
         VAR_0);
 if (!VAR_5)
  return ((void*)0);


 VAR_5->ssids = (void *)&VAR_5->channels[VAR_7];
 VAR_5->n_channels = VAR_7;
 VAR_5->n_ssids = 1;


 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  int VAR_9;

  if (!VAR_3->bands[VAR_8])
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_3->bands[VAR_8]->n_channels; VAR_9++) {

   if (VAR_3->bands[VAR_8]->channels[VAR_9].flags &
      VAR_1)
    continue;

   VAR_5->channels[VAR_6] = &VAR_3->bands[VAR_8]->channels[VAR_9];
   VAR_6++;
  }
 }
 if (VAR_6) {

  VAR_5->n_channels = VAR_6;


  FUNC_3(VAR_5->ssids[0].ssid, VAR_4->ssid, VAR_4->ssid_len);
  VAR_5->ssids[0].ssid_len = VAR_4->ssid_len;
 } else {

  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
