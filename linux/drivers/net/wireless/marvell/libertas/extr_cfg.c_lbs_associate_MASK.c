
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct lbs_private {int dev; int tx_pending_len; int connect_status; int assoc_bss; int fwrelease; } ;
struct TYPE_6__ {void* size; } ;
struct cmd_ds_802_11_associate_response {int iebuf; TYPE_3__ hdr; void* aid; void* capability; void* statuscode; } ;
struct TYPE_5__ {void* size; void* command; } ;
struct cmd_ds_802_11_associate {TYPE_2__ hdr; int * iebuf; void* capability; void* listeninterval; int bssid; } ;
struct cfg80211_connect_params {int ie_len; int ie; int auth_type; } ;
struct cfg80211_bss {size_t capability; int bssid; TYPE_1__* channel; } ;
struct TYPE_4__ {int hw_value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,int ,int ,size_t,int,int ) ;
 void* FUNC_2 (size_t) ;
 int * FUNC_3 (struct cfg80211_bss*,int ) ;
 int FUNC_4 (struct cmd_ds_802_11_associate*) ;
 struct cmd_ds_802_11_associate* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,struct cfg80211_bss*) ;
 int FUNC_10 (int *,int const*,int const) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct lbs_private*,size_t,struct cmd_ds_802_11_associate*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,char*,int *,int) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct lbs_private *VAR_13,
  struct cfg80211_bss *VAR_14,
  struct cfg80211_connect_params *VAR_15)
{
 struct cmd_ds_802_11_associate_response *VAR_16;
 struct cmd_ds_802_11_associate *VAR_17 = FUNC_5(VAR_4,
            VAR_3);
 const u8 *VAR_18;
 size_t VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 u8 *VAR_23;
 u8 *VAR_24;

 if (!VAR_17) {
  VAR_22 = -VAR_1;
  goto done;
 }
 VAR_23 = &VAR_17->iebuf[0];
 VAR_17->hdr.command = FUNC_2(VAR_0);


 FUNC_16(VAR_17->bssid, VAR_14->bssid, VAR_2);
 VAR_17->listeninterval = FUNC_2(VAR_7);
 VAR_17->capability = FUNC_2(VAR_14->capability);


 FUNC_19();
 VAR_18 = FUNC_3(VAR_14, VAR_8);
 if (VAR_18)
  VAR_23 += FUNC_10(VAR_23, VAR_18 + 2, VAR_18[1]);
 else
  FUNC_13("no SSID\n");
 FUNC_20();


 if (VAR_14->channel)
  VAR_23 += FUNC_8(VAR_23, VAR_14->channel->hw_value);
 else
  FUNC_13("no channel\n");


 VAR_23 += FUNC_7(VAR_23);


 VAR_24 = VAR_23 + 4;
 VAR_23 += FUNC_9(VAR_23, VAR_14);
 FUNC_14(VAR_6, "Common Rates", VAR_24, VAR_23 - VAR_24);


 if (FUNC_0(VAR_13->fwrelease) >= 9)
  VAR_23 += FUNC_6(VAR_23, VAR_15->auth_type);


 if (VAR_15->ie && VAR_15->ie_len)
  VAR_23 += FUNC_11(VAR_23, VAR_15->ie, VAR_15->ie_len);

 VAR_19 = (sizeof(*VAR_17) - sizeof(VAR_17->iebuf)) +
  (u16)(VAR_23 - (u8 *) &VAR_17->iebuf);
 VAR_17->hdr.size = FUNC_2(VAR_19);

 FUNC_14(VAR_6, "ASSOC_CMD", (u8 *) VAR_17,
   FUNC_15(VAR_17->hdr.size));


 FUNC_16(VAR_13->assoc_bss, VAR_14->bssid, VAR_2);

 VAR_22 = FUNC_12(VAR_13, VAR_0, VAR_17);
 if (VAR_22)
  goto done;



 VAR_16 = (void *) VAR_17;
 VAR_21 = FUNC_15(VAR_16->statuscode);
 if (FUNC_0(VAR_13->fwrelease) <= 8) {
  switch (VAR_21) {
  case 0:
   break;
  case 1:
   FUNC_13("invalid association parameters\n");
   VAR_21 = VAR_11;
   break;
  case 2:
   FUNC_13("timer expired while waiting for AP\n");
   VAR_21 = VAR_10;
   break;
  case 3:
   FUNC_13("association refused by AP\n");
   VAR_21 = VAR_9;
   break;
  case 4:
   FUNC_13("authentication refused by AP\n");
   VAR_21 = VAR_12;
   break;
  default:
   FUNC_13("association failure %d\n", VAR_21);



   break;
  }
 }

 FUNC_13("status %d, statuscode 0x%04x, capability 0x%04x, "
        "aid 0x%04x\n", VAR_21, FUNC_15(VAR_16->statuscode),
        FUNC_15(VAR_16->capability), FUNC_15(VAR_16->aid));

 VAR_20 = FUNC_15(VAR_16->hdr.size)
  - sizeof(VAR_16->hdr)
  - 6;
 FUNC_1(VAR_13->dev,
    VAR_13->assoc_bss,
    VAR_15->ie, VAR_15->ie_len,
    VAR_16->iebuf, VAR_20,
    VAR_21,
    VAR_3);

 if (VAR_21 == 0) {

  VAR_13->connect_status = VAR_5;
  FUNC_17(VAR_13->dev);
  if (!VAR_13->tx_pending_len)
   FUNC_18(VAR_13->dev);
 }

 FUNC_4(VAR_17);
done:
 return VAR_22;
}
