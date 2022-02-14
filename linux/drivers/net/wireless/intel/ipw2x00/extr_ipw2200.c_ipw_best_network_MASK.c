
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rssi; } ;
struct libipw_network {int capability; scalar_t__ ssid_len; scalar_t__ last_associate; scalar_t__ last_scanned; scalar_t__ channel; int bssid; int ssid; int mode; TYPE_1__ stats; } ;
struct ipw_supported_rates {scalar_t__ num_rates; } ;
struct ipw_priv {int config; scalar_t__ essid_len; scalar_t__ channel; int capability; TYPE_2__* ieee; int bssid; int essid; } ;
struct ipw_network_match {struct libipw_network* network; int rates; } ;
struct TYPE_5__ {scalar_t__ iw_mode; scalar_t__ scan_age; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (char*,scalar_t__,int ,int ,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ipw_priv*,struct libipw_network*,struct ipw_supported_rates*) ;
 int FUNC_3 (int *,struct ipw_supported_rates*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ipw_priv *VAR_11,
       struct ipw_network_match *VAR_12,
       struct libipw_network *VAR_13, int VAR_14)
{
 struct ipw_supported_rates VAR_15;



 if ((VAR_11->ieee->iw_mode == VAR_6 &&
      !(VAR_13->capability & VAR_7)) ||
     (VAR_11->ieee->iw_mode == VAR_5 &&
      !(VAR_13->capability & VAR_8))) {
  FUNC_0("Network '%*pE (%pM)' excluded due to capability mismatch.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid);
  return 0;
 }

 if (FUNC_10(VAR_14)) {


  if ((VAR_13->ssid_len != VAR_12->network->ssid_len) ||
      FUNC_7(VAR_13->ssid, VAR_12->network->ssid,
      VAR_13->ssid_len)) {
   FUNC_0("Network '%*pE (%pM)' excluded because of non-network ESSID.\n",
     VAR_13->ssid_len, VAR_13->ssid,
     VAR_13->bssid);
   return 0;
  }
 } else {


  if ((VAR_11->config & VAR_3) &&
      ((VAR_13->ssid_len != VAR_11->essid_len) ||
       FUNC_7(VAR_13->ssid, VAR_11->essid,
       FUNC_8(VAR_13->ssid_len, VAR_11->essid_len)))) {
   FUNC_0("Network '%*pE (%pM)' excluded because of ESSID mismatch: '%*pE'.\n",
     VAR_13->ssid_len, VAR_13->ssid,
     VAR_13->bssid, VAR_11->essid_len,
     VAR_11->essid);
   return 0;
  }
 }



 if (VAR_12->network && VAR_12->network->stats.rssi > VAR_13->stats.rssi) {
  FUNC_0("Network '%*pE (%pM)' excluded because '%*pE (%pM)' has a stronger signal.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid, VAR_12->network->ssid_len,
    VAR_12->network->ssid, VAR_12->network->bssid);
  return 0;
 }



 if (VAR_13->last_associate &&
     FUNC_9(VAR_13->last_associate + (VAR_4 * 3UL), VAR_10)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of storming (%ums since last assoc attempt).\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid,
    FUNC_4(VAR_10 -
       VAR_13->last_associate));
  return 0;
 }


 if (VAR_11->ieee->scan_age != 0 &&
     FUNC_9(VAR_10, VAR_13->last_scanned + VAR_11->ieee->scan_age)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of age: %ums.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid,
    FUNC_4(VAR_10 -
       VAR_13->last_scanned));
  return 0;
 }

 if ((VAR_11->config & VAR_2) &&
     (VAR_13->channel != VAR_11->channel)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of channel mismatch: %d != %d.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid,
    VAR_13->channel, VAR_11->channel);
  return 0;
 }


 if (((VAR_11->capability & VAR_0) ? 1 : 0) !=
     ((VAR_13->capability & VAR_9) ? 1 : 0)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of privacy mismatch: %s != %s.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid,
    VAR_11->capability & VAR_0 ? "on" :
    "off",
    VAR_13->capability &
    VAR_9 ? "on" : "off");
  return 0;
 }

 if ((VAR_11->config & VAR_1) &&
     !FUNC_1(VAR_13->bssid, VAR_11->bssid)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of BSSID mismatch: %pM.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid, VAR_11->bssid);
  return 0;
 }


 if (!FUNC_6(VAR_11->ieee, VAR_13->mode)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of invalid frequency/mode combination.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid);
  return 0;
 }


 if (!FUNC_5(VAR_11->ieee, VAR_13->channel)) {
  FUNC_0("Network '%*pE (%pM)' excluded because of invalid channel in current GEO\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid);
  return 0;
 }



 if (!FUNC_2(VAR_11, VAR_13, &VAR_15)) {
  FUNC_0("Network '%*pE (%pM)' excluded because configured rate mask excludes AP mandatory rate.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid);
  return 0;
 }

 if (VAR_15.num_rates == 0) {
  FUNC_0("Network '%*pE (%pM)' excluded because of no compatible rates.\n",
    VAR_13->ssid_len, VAR_13->ssid,
    VAR_13->bssid);
  return 0;
 }






 FUNC_3(&VAR_12->rates, &VAR_15);
 VAR_12->network = VAR_13;

 FUNC_0("Network '%*pE (%pM)' is a viable match.\n",
   VAR_13->ssid_len, VAR_13->ssid, VAR_13->bssid);

 return 1;
}
