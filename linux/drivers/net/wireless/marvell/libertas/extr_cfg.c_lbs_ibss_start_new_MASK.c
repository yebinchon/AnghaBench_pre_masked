
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lbs_private {int fwrelease; } ;
struct TYPE_11__ {int len; int id; } ;
struct TYPE_12__ {int channel; TYPE_4__ header; } ;
struct TYPE_9__ {int len; int id; } ;
struct TYPE_10__ {scalar_t__ atimwindow; TYPE_2__ header; } ;
struct TYPE_8__ {void* size; } ;
struct cmd_ds_802_11_ad_hoc_start {int rates; void* capability; void* probedelay; TYPE_5__ ds; TYPE_3__ ibss; void* beaconperiod; int bsstype; int ssid; TYPE_1__ hdr; } ;
struct cmd_ds_802_11_ad_hoc_result {int bssid; } ;
struct TYPE_14__ {TYPE_6__* chan; } ;
struct cfg80211_ibss_params {int beacon_interval; TYPE_7__ chandef; int ssid_len; int ssid; } ;
typedef int cmd ;
struct TYPE_13__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lbs_private*,int ,struct cmd_ds_802_11_ad_hoc_start*) ;
 int FUNC_4 (struct lbs_private*,struct cfg80211_ibss_params*,int ,int) ;
 int FUNC_5 (struct lbs_private*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct cmd_ds_802_11_ad_hoc_start*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct lbs_private *VAR_7,
 struct cfg80211_ibss_params *VAR_8)
{
 struct cmd_ds_802_11_ad_hoc_start VAR_9;
 struct cmd_ds_802_11_ad_hoc_result *VAR_10 =
  (struct cmd_ds_802_11_ad_hoc_result *) &VAR_9;
 u8 VAR_11 = VAR_3;
 int VAR_12 = 0;
 u16 VAR_13;

 VAR_12 = FUNC_5(VAR_7, VAR_11, 1);
 if (VAR_12)
  goto out;
 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.hdr.size = FUNC_1(sizeof(VAR_9));
 FUNC_6(VAR_9.ssid, VAR_8->ssid, VAR_8->ssid_len);
 VAR_9.bsstype = VAR_1;
 VAR_9.beaconperiod = FUNC_1(VAR_8->beacon_interval);
 VAR_9.ibss.header.id = VAR_6;
 VAR_9.ibss.header.len = 2;
 VAR_9.ibss.atimwindow = 0;
 VAR_9.ds.header.id = VAR_5;
 VAR_9.ds.header.len = 1;
 VAR_9.ds.channel = VAR_8->chandef.chan->hw_value;

 if (FUNC_0(VAR_7->fwrelease) <= 8)
  VAR_9.probedelay = FUNC_1(VAR_2);

 VAR_13 = VAR_4;
 VAR_9.capability = FUNC_1(VAR_13);
 FUNC_2(VAR_9.rates);


 VAR_12 = FUNC_3(VAR_7, VAR_0, &VAR_9);
 if (VAR_12)
  goto out;
 FUNC_4(VAR_7, VAR_8, VAR_10->bssid, VAR_13);

 out:
 return VAR_12;
}
