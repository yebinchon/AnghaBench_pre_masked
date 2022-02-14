
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dev; int tx_pending_len; int connect_status; TYPE_1__* wdev; } ;
struct TYPE_6__ {TYPE_3__* chan; } ;
struct cfg80211_ibss_params {TYPE_2__ chandef; int beacon_interval; int ssid_len; int ssid; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_7__ {int hw_value; } ;
struct TYPE_5__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,TYPE_3__*,int ) ;
 struct cfg80211_bss* FUNC_1 (int ,TYPE_3__*,int ,int *,int ,int ,int ,int *,int,int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_bss*) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct lbs_private *VAR_10,
     struct cfg80211_ibss_params *VAR_11,
     u8 *VAR_12, u16 VAR_13)
{
 u8 VAR_14[2 + VAR_2 +
     2 + 4 +
     2 + 1 +
     2 + 2 +
     2 + 8];
 u8 *VAR_15 = VAR_14;
 struct cfg80211_bss *VAR_16;







 *VAR_15++ = VAR_8;
 *VAR_15++ = VAR_11->ssid_len;
 FUNC_4(VAR_15, VAR_11->ssid, VAR_11->ssid_len);
 VAR_15 += VAR_11->ssid_len;

 *VAR_15++ = VAR_9;
 *VAR_15++ = 4;
 *VAR_15++ = 0x82;
 *VAR_15++ = 0x84;
 *VAR_15++ = 0x8b;
 *VAR_15++ = 0x96;

 *VAR_15++ = VAR_5;
 *VAR_15++ = 1;
 *VAR_15++ = VAR_11->chandef.chan->hw_value;

 *VAR_15++ = VAR_7;
 *VAR_15++ = 2;
 *VAR_15++ = 0;
 *VAR_15++ = 0;


 *VAR_15++ = VAR_6;
 *VAR_15++ = 8;
 *VAR_15++ = 0x0c;
 *VAR_15++ = 0x12;
 *VAR_15++ = 0x18;
 *VAR_15++ = 0x24;
 *VAR_15++ = 0x30;
 *VAR_15++ = 0x48;
 *VAR_15++ = 0x60;
 *VAR_15++ = 0x6c;
 FUNC_3(VAR_4, "IE", VAR_14, VAR_15 - VAR_14);

 VAR_16 = FUNC_1(VAR_10->wdev->wiphy,
      VAR_11->chandef.chan,
      VAR_0,
      VAR_12,
      0,
      VAR_13,
      VAR_11->beacon_interval,
      VAR_14, VAR_15 - VAR_14,
      0, VAR_1);
 FUNC_2(VAR_10->wdev->wiphy, VAR_16);

 FUNC_0(VAR_10->dev, VAR_12, VAR_11->chandef.chan,
        VAR_1);


 VAR_10->connect_status = VAR_3;
 FUNC_5(VAR_10->dev);
 if (!VAR_10->tx_pending_len)
  FUNC_6(VAR_10->dev);
}
