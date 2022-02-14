
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_chg_measures {int current_max; int voltage_max; int voltage_now; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_4__ {int build; int minor; int major; } ;
struct TYPE_3__ {int build; int minor; int major; } ;
struct mcdp_info {TYPE_2__ fw; TYPE_1__ irom; int chipid; int family; } ;
struct ec_response_pd_log {int timestamp; int type; int data; int size_port; int * payload; } ;
typedef int s32 ;
typedef int ktime_t ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;





 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,int,char*,...) ;
 char** VAR_11 ;
 int FUNC_6 (int ,int ,int *) ;
 char** VAR_12 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,char*) ;
 char** VAR_13 ;
 struct rtc_time FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct ec_response_pd_log *VAR_14,
           ktime_t VAR_15)
{
 const char *VAR_16, *VAR_17, *VAR_18;
 struct usb_chg_measures *VAR_19;
 struct mcdp_info *VAR_20;
 int VAR_21, VAR_22;
 char VAR_23[VAR_0 + 1];
 struct rtc_time VAR_24;
 int VAR_25 = 0;
 s32 VAR_26;
 int VAR_27;


 VAR_15 = FUNC_7(VAR_15, VAR_14->timestamp << VAR_8);
 VAR_24 = FUNC_10(VAR_15);

 switch (VAR_14->type) {
 case 131:
  if (VAR_14->data & VAR_3)
   VAR_25 += FUNC_5(VAR_23, VAR_25, "override ");

  if (VAR_14->data & VAR_1)
   VAR_25 += FUNC_5(VAR_23, VAR_25, "pending_override ");

  VAR_21 = VAR_14->data & VAR_4;
  VAR_17 = VAR_21 < FUNC_0(VAR_13) ?
   VAR_13[VAR_21] : "Unknown";

  VAR_22 = (VAR_14->data & VAR_5)
    >> VAR_6;

  VAR_18 = VAR_22 < FUNC_0(VAR_11) ?
   VAR_11[VAR_22] : "???";

  if (VAR_21 == VAR_9 ||
      VAR_21 == VAR_10) {
   VAR_25 += FUNC_5(VAR_23, VAR_25, "%s", VAR_17);
   break;
  }

  VAR_19 = (struct usb_chg_measures *)VAR_14->payload;
  VAR_25 += FUNC_5(VAR_23, VAR_25, "%s %s %s %dmV max %dmV / %dmA",
      VAR_17, VAR_14->data & VAR_2 ?
      "DRP" : "Charger",
      VAR_18, VAR_19->voltage_now,
      VAR_19->voltage_max, VAR_19->current_max);
  break;
 case 132:
  VAR_25 += FUNC_5(VAR_23, VAR_25, "RW signature check failed");
  break;
 case 130:
  VAR_16 = VAR_14->data < FUNC_0(VAR_12) ? VAR_12[VAR_14->data]
         : "???";
  VAR_25 += FUNC_5(VAR_23, VAR_25, "Power supply fault: %s", VAR_16);
  break;
 case 128:
  VAR_25 += FUNC_5(VAR_23, VAR_25, "DP mode %sabled", VAR_14->data == 1 ?
      "en" : "dis");
  break;
 case 129:
  VAR_20 = (struct mcdp_info *)VAR_14->payload;
  VAR_25 += FUNC_5(VAR_23, VAR_25, "HDMI info: family:%04x chipid:%04x ",
      FUNC_2(VAR_20->family),
      FUNC_1(VAR_20->chipid));
  VAR_25 += FUNC_5(VAR_23, VAR_25, "irom:%d.%d.%d fw:%d.%d.%d",
      VAR_20->irom.major, VAR_20->irom.minor,
      VAR_20->irom.build, VAR_20->fw.major,
      VAR_20->fw.minor, VAR_20->fw.build);
  break;
 default:
  VAR_25 += FUNC_5(VAR_23, VAR_25, "Event %02x (%04x) [", VAR_14->type,
      VAR_14->data);

  for (VAR_27 = 0; VAR_27 < FUNC_4(VAR_14->size_port); VAR_27++)
   VAR_25 += FUNC_5(VAR_23, VAR_25, "%02x ", VAR_14->payload[VAR_27]);

  VAR_25 += FUNC_5(VAR_23, VAR_25, "]");
  break;
 }

 FUNC_6(FUNC_8(VAR_15), VAR_7, &VAR_26);
 FUNC_9("PDLOG %d/%02d/%02d %02d:%02d:%02d.%03d P%d %s\n",
  VAR_24.tm_year + 1900, VAR_24.tm_mon + 1, VAR_24.tm_mday,
  VAR_24.tm_hour, VAR_24.tm_min, VAR_24.tm_sec, VAR_26,
  FUNC_3(VAR_14->size_port), VAR_23);
}
