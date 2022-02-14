
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct lbs_private {int fwrelease; } ;
struct TYPE_16__ {int len; int id; } ;
struct TYPE_17__ {scalar_t__ atimwindow; TYPE_6__ header; } ;
struct TYPE_12__ {int len; int id; } ;
struct TYPE_13__ {int channel; TYPE_2__ header; } ;
struct TYPE_18__ {int* rates; void* capability; TYPE_7__ ibss; TYPE_3__ ds; void* beaconperiod; int type; int ssid; int bssid; } ;
struct TYPE_11__ {void* size; } ;
struct cmd_ds_802_11_ad_hoc_join {void* probedelay; void* failtimeout; TYPE_8__ bss; TYPE_1__ hdr; } ;
struct TYPE_15__ {TYPE_4__* chan; } ;
struct cfg80211_ibss_params {int beacon_interval; TYPE_5__ chandef; int ssid_len; int ssid; } ;
struct cfg80211_bss {int capability; int bssid; } ;
typedef int cmd ;
struct TYPE_19__ {int bitrate; } ;
struct TYPE_14__ {int hw_value; } ;


 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;
 int* FUNC_3 (struct cfg80211_bss*,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct lbs_private*,int ,struct cmd_ds_802_11_ad_hoc_join*) ;
 int FUNC_6 (struct lbs_private*,struct cfg80211_ibss_params*,int ,int) ;
 TYPE_9__* VAR_10 ;
 int FUNC_7 (struct lbs_private*,int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct cmd_ds_802_11_ad_hoc_join*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct lbs_private *VAR_11,
 struct cfg80211_ibss_params *VAR_12,
 struct cfg80211_bss *VAR_13)
{
 const u8 *VAR_14;
 struct cmd_ds_802_11_ad_hoc_join VAR_15;
 u8 VAR_16 = VAR_6;
 int VAR_17 = 0;


 VAR_17 = FUNC_7(VAR_11, VAR_16, 1);
 if (VAR_17)
  goto out;
 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.hdr.size = FUNC_2(sizeof(VAR_15));

 FUNC_8(VAR_15.bss.bssid, VAR_13->bssid, VAR_4);
 FUNC_8(VAR_15.bss.ssid, VAR_12->ssid, VAR_12->ssid_len);
 VAR_15.bss.type = VAR_2;
 VAR_15.bss.beaconperiod = FUNC_2(VAR_12->beacon_interval);
 VAR_15.bss.ds.header.id = VAR_7;
 VAR_15.bss.ds.header.len = 1;
 VAR_15.bss.ds.channel = VAR_12->chandef.chan->hw_value;
 VAR_15.bss.ibss.header.id = VAR_8;
 VAR_15.bss.ibss.header.len = 2;
 VAR_15.bss.ibss.atimwindow = 0;
 VAR_15.bss.capability = FUNC_2(VAR_13->capability & VAR_0);



 FUNC_10();
 VAR_14 = FUNC_3(VAR_13, VAR_9);
 if (!VAR_14) {
  FUNC_4(VAR_15.bss.rates);
 } else {
  int VAR_18, VAR_19;
  u8 VAR_20 = VAR_14[1];
  u8 *VAR_21 = VAR_15.bss.rates;
  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_10); VAR_18++) {
   u8 VAR_22 = VAR_10[VAR_18].bitrate / 5;
   for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
    if (VAR_22 == (VAR_14[VAR_19+2] & 0x7f)) {
     u8 VAR_23 = VAR_14[VAR_19+2];
     if (VAR_23 == 0x02 || VAR_23 == 0x04 ||
         VAR_23 == 0x0b || VAR_23 == 0x16)
      VAR_23 |= 0x80;
     *VAR_21++ = VAR_23;
    }
   }
  }
 }
 FUNC_11();


 if (FUNC_1(VAR_11->fwrelease) <= 8) {
  VAR_15.failtimeout = FUNC_2(VAR_5);
  VAR_15.probedelay = FUNC_2(VAR_3);
 }
 VAR_17 = FUNC_5(VAR_11, VAR_1, &VAR_15);
 if (VAR_17)
  goto out;
 FUNC_6(VAR_11, VAR_12, VAR_13->bssid, VAR_13->capability);

 out:
 return VAR_17;
}
