
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
struct TYPE_12__ {int mask; int rssi; scalar_t__ signal; scalar_t__ noise; } ;
struct libipw_network {char* ssid; size_t mode; int capability; int rates_len; int rates_ex_len; int* rates_ex; int* rates; int wpa_ie_len; int rsn_ie_len; int channel; int last_scanned; int rsn_ie; int wpa_ie; TYPE_5__ stats; int ssid_len; int bssid; } ;
struct libipw_device {scalar_t__ perfect_rssi; scalar_t__ worst_rssi; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_13__ {int flags; int length; } ;
struct TYPE_11__ {int updated; int qual; scalar_t__ level; scalar_t__ noise; } ;
struct TYPE_10__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_9__ {int e; int i; int m; } ;
struct TYPE_8__ {char* sa_data; int sa_family; } ;
struct TYPE_14__ {TYPE_6__ data; TYPE_4__ qual; TYPE_3__ bitrate; TYPE_2__ freq; int mode; int name; TYPE_1__ ap_addr; } ;
struct iw_event {int cmd; TYPE_7__ u; } ;
typedef int iwe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,char*,struct iw_event*,int ) ;
 int FUNC_4 (struct iw_request_info*) ;
 int FUNC_5 (struct libipw_device*,int ) ;
 int FUNC_6 (struct libipw_device*,int ) ;
 char** VAR_40 ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct iw_event*,int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*,int,char*,...) ;

__attribute__((used)) static char *FUNC_11(struct libipw_device *VAR_41,
          char *VAR_42, char *VAR_43,
          struct libipw_network *VAR_44,
          struct iw_request_info *VAR_45)
{
 char VAR_46[VAR_28];
 char *VAR_47;
 struct iw_event VAR_48;
 int VAR_49, VAR_50;
 char *VAR_51;
 u8 VAR_52;


 VAR_48.cmd = VAR_30;
 VAR_48.u.ap_addr.sa_family = VAR_0;
 FUNC_7(VAR_48.u.ap_addr.sa_data, VAR_44->bssid, VAR_1);
 VAR_42 = FUNC_1(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_9);




 VAR_48.cmd = VAR_32;
 VAR_48.u.data.flags = 1;
 VAR_48.u.data.length = FUNC_9(VAR_44->ssid_len, (u8) 32);
 VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43,
         &VAR_48, VAR_44->ssid);


 VAR_48.cmd = VAR_35;
 FUNC_10(VAR_48.u.name, VAR_2, "IEEE 802.11%s",
   VAR_40[VAR_44->mode]);
 VAR_42 = FUNC_1(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_10);


 VAR_48.cmd = VAR_34;
 if (VAR_44->capability & (VAR_37 | VAR_38)) {
  if (VAR_44->capability & VAR_37)
   VAR_48.u.mode = VAR_16;
  else
   VAR_48.u.mode = VAR_15;

  VAR_42 = FUNC_1(VAR_45, VAR_42, VAR_43,
          &VAR_48, VAR_14);
 }



 VAR_48.cmd = VAR_33;
 VAR_48.u.freq.m = FUNC_5(VAR_41, VAR_44->channel);
 VAR_48.u.freq.e = 6;
 VAR_48.u.freq.i = 0;
 VAR_42 = FUNC_1(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_11);


 VAR_48.cmd = VAR_31;
 if (VAR_44->capability & VAR_39)
  VAR_48.u.data.flags = VAR_7 | VAR_8;
 else
  VAR_48.u.data.flags = VAR_6;
 VAR_48.u.data.length = 0;
 VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43,
         &VAR_48, VAR_44->ssid);




 VAR_51 = VAR_42 + FUNC_4(VAR_45);
 VAR_48.cmd = VAR_36;

 VAR_48.u.bitrate.fixed = VAR_48.u.bitrate.disabled = 0;

 for (VAR_49 = 0, VAR_50 = 0; VAR_49 < VAR_44->rates_len;) {
  if (VAR_50 < VAR_44->rates_ex_len &&
      ((VAR_44->rates_ex[VAR_50] & 0x7F) <
       (VAR_44->rates[VAR_49] & 0x7F)))
   VAR_52 = VAR_44->rates_ex[VAR_50++] & 0x7F;
  else
   VAR_52 = VAR_44->rates[VAR_49++] & 0x7F;

  VAR_48.u.bitrate.value = ((VAR_52 & 0x7f) * 500000);

  VAR_51 = FUNC_3(VAR_45, VAR_42, VAR_51,
         VAR_43, &VAR_48, VAR_12);
 }
 for (; VAR_50 < VAR_44->rates_ex_len; VAR_50++) {
  VAR_52 = VAR_44->rates_ex[VAR_50] & 0x7F;

  VAR_48.u.bitrate.value = ((VAR_52 & 0x7f) * 500000);

  VAR_51 = FUNC_3(VAR_45, VAR_42, VAR_51,
         VAR_43, &VAR_48, VAR_12);
 }

 if ((VAR_51 - VAR_42) > FUNC_4(VAR_45))
  VAR_42 = VAR_51;


 VAR_48.cmd = VAR_5;
 VAR_48.u.qual.updated = VAR_22 | VAR_18 |
     VAR_20;

 if (!(VAR_44->stats.mask & VAR_26)) {
  VAR_48.u.qual.updated |= VAR_21 |
      VAR_17;
  VAR_48.u.qual.qual = 0;
 } else {
  if (VAR_41->perfect_rssi == VAR_41->worst_rssi)
   VAR_48.u.qual.qual = 100;
  else
   VAR_48.u.qual.qual =
       (100 *
        (VAR_41->perfect_rssi - VAR_41->worst_rssi) *
        (VAR_41->perfect_rssi - VAR_41->worst_rssi) -
        (VAR_41->perfect_rssi - VAR_44->stats.rssi) *
        (15 * (VAR_41->perfect_rssi - VAR_41->worst_rssi) +
         62 * (VAR_41->perfect_rssi -
        VAR_44->stats.rssi))) /
       ((VAR_41->perfect_rssi -
         VAR_41->worst_rssi) * (VAR_41->perfect_rssi -
         VAR_41->worst_rssi));
  if (VAR_48.u.qual.qual > 100)
   VAR_48.u.qual.qual = 100;
  else if (VAR_48.u.qual.qual < 1)
   VAR_48.u.qual.qual = 0;
 }

 if (!(VAR_44->stats.mask & VAR_25)) {
  VAR_48.u.qual.updated |= VAR_19;
  VAR_48.u.qual.noise = 0;
 } else {
  VAR_48.u.qual.noise = VAR_44->stats.noise;
 }

 if (!(VAR_44->stats.mask & VAR_27)) {
  VAR_48.u.qual.updated |= VAR_17;
  VAR_48.u.qual.level = 0;
 } else {
  VAR_48.u.qual.level = VAR_44->stats.signal;
 }

 VAR_42 = FUNC_1(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_13);

 VAR_48.cmd = VAR_3;
 VAR_47 = VAR_46;

 VAR_48.u.data.length = VAR_47 - VAR_46;
 if (VAR_48.u.data.length)
  VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_46);

 FUNC_8(&VAR_48, 0, sizeof(VAR_48));
 if (VAR_44->wpa_ie_len) {
  char VAR_53[VAR_29];
  FUNC_7(VAR_53, VAR_44->wpa_ie, VAR_44->wpa_ie_len);
  VAR_48.cmd = VAR_4;
  VAR_48.u.data.length = VAR_44->wpa_ie_len;
  VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_53);
 }

 FUNC_8(&VAR_48, 0, sizeof(VAR_48));
 if (VAR_44->rsn_ie_len) {
  char VAR_54[VAR_29];
  FUNC_7(VAR_54, VAR_44->rsn_ie, VAR_44->rsn_ie_len);
  VAR_48.cmd = VAR_4;
  VAR_48.u.data.length = VAR_44->rsn_ie_len;
  VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_54);
 }



 VAR_48.cmd = VAR_3;
 VAR_47 = VAR_46;
 VAR_47 += FUNC_10(VAR_47, VAR_28 - (VAR_47 - VAR_46),
        " Last beacon: %ums ago",
        FUNC_0(VAR_44->last_scanned));
 VAR_48.u.data.length = VAR_47 - VAR_46;
 if (VAR_48.u.data.length)
  VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_46);


 VAR_48.cmd = -1;
 VAR_47 = VAR_46;
 VAR_47 += FUNC_10(VAR_47, VAR_28 - (VAR_47 - VAR_46), " Channel flags: ");

 if (FUNC_6(VAR_41, VAR_44->channel) &
     VAR_23) {
  VAR_48.cmd = VAR_3;
  VAR_47 += FUNC_10(VAR_47, VAR_28 - (VAR_47 - VAR_46), "INVALID ");
 }

 if (FUNC_6(VAR_41, VAR_44->channel) &
     VAR_24) {
  VAR_48.cmd = VAR_3;
  VAR_47 += FUNC_10(VAR_47, VAR_28 - (VAR_47 - VAR_46), "DFS ");
 }

 if (VAR_48.cmd == VAR_3) {
  VAR_48.u.data.length = VAR_47 - VAR_46;
  VAR_42 = FUNC_2(VAR_45, VAR_42, VAR_43, &VAR_48, VAR_46);
 }

 return VAR_42;
}
