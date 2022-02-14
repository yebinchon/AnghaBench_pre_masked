
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_2__ {int len; int type; } ;
struct mwifiex_ie_types_data {scalar_t__ data; TYPE_1__ header; } ;
struct mwifiex_ie_types_bss_scan_rsp {int dummy; } ;
struct mwifiex_ie_types_bss_scan_info {scalar_t__ radio_type; int tsf; int rssi; } ;
struct mwifiex_event_scan_result {scalar_t__ num_of_set; int more_event; int buf_size; } ;
struct mwifiex_adapter {int dummy; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_private*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*,void*,int) ;
 int FUNC_5 (struct mwifiex_private*,scalar_t__**,scalar_t__*,int ,scalar_t__*,int,int) ;

int FUNC_6(struct mwifiex_private *VAR_5,
      void *VAR_6)
{
 int VAR_7 = 0;
 struct mwifiex_adapter *VAR_8 = VAR_5->adapter;
 u8 *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u16 VAR_13, VAR_14;
 struct mwifiex_ie_types_data *VAR_15;
 struct mwifiex_ie_types_bss_scan_rsp *VAR_16;
 struct mwifiex_ie_types_bss_scan_info *VAR_17;
 u8 *VAR_18;
 u64 VAR_19 = 0;
 s32 VAR_20 = 0;
 struct mwifiex_event_scan_result *VAR_21 = VAR_6;
 u8 VAR_22 = VAR_21->num_of_set;
 u8 *VAR_23 = VAR_6 + sizeof(struct mwifiex_event_scan_result);
 u16 VAR_24 = FUNC_0(VAR_21->buf_size);

 if (VAR_22 > VAR_3) {
  FUNC_3(VAR_8, VAR_1,
       "EXT_SCAN: Invalid number of AP returned (%d)!!\n",
       VAR_22);
  VAR_7 = -1;
  goto check_next_scan;
 }

 VAR_10 = VAR_24;
 FUNC_3(VAR_8, VAR_2,
      "EXT_SCAN: size %d, returned %d APs...",
      VAR_24, VAR_22);
 FUNC_4(VAR_8, VAR_0, "EXT_SCAN buffer:", VAR_6,
    VAR_24 +
    sizeof(struct mwifiex_event_scan_result));

 VAR_15 = (struct mwifiex_ie_types_data *)VAR_23;

 for (VAR_12 = 0; VAR_12 < VAR_22 && VAR_10; VAR_12++) {
  VAR_13 = FUNC_0(VAR_15->header.type);
  VAR_14 = FUNC_0(VAR_15->header.len);
  if (VAR_10 < sizeof(struct mwifiex_ie_types_header) + VAR_14) {
   FUNC_3(VAR_8, VAR_1,
        "EXT_SCAN: Error bytes left < TLV length\n");
   break;
  }
  VAR_16 = ((void*)0);
  VAR_17 = ((void*)0);
  VAR_11 = VAR_10;




  if (VAR_13 != VAR_4)
   break;

  VAR_9 = (u8 *)VAR_15;
  VAR_16 = (struct mwifiex_ie_types_bss_scan_rsp *)VAR_15;
  VAR_15 = (struct mwifiex_ie_types_data *)(VAR_15->data + VAR_14);
  VAR_11 -=
    (VAR_14 + sizeof(struct mwifiex_ie_types_header));

  while (VAR_11 >=
         sizeof(struct mwifiex_ie_types_header) &&
         FUNC_0(VAR_15->header.type) != VAR_4) {
   VAR_13 = FUNC_0(VAR_15->header.type);
   VAR_14 = FUNC_0(VAR_15->header.len);
   if (VAR_11 <
       sizeof(struct mwifiex_ie_types_header) + VAR_14) {
    FUNC_3(VAR_8, VAR_1,
         "EXT_SCAN: Error in processing TLV,\t"
         "bytes left < TLV length\n");
    VAR_16 = ((void*)0);
    VAR_11 = 0;
    continue;
   }
   switch (VAR_13) {
   case 128:
    VAR_17 =
      (struct mwifiex_ie_types_bss_scan_info *)VAR_15;
    if (VAR_14 !=
     sizeof(struct mwifiex_ie_types_bss_scan_info) -
     sizeof(struct mwifiex_ie_types_header)) {
     VAR_11 = 0;
     continue;
    }
    break;
   default:
    break;
   }
   VAR_15 = (struct mwifiex_ie_types_data *)(VAR_15->data + VAR_14);
   VAR_10 -=
    (VAR_14 + sizeof(struct mwifiex_ie_types_header));
   VAR_11 -=
    (VAR_14 + sizeof(struct mwifiex_ie_types_header));
  }

  if (!VAR_16)
   break;






  VAR_9 += sizeof(u16);
  VAR_10 -= sizeof(u16);

  if (VAR_17) {
   VAR_20 = (s32)(s16)(FUNC_0(VAR_17->rssi));
   VAR_20 *= 100;
   FUNC_3(VAR_8, VAR_2,
        "info: InterpretIE: RSSI=%d\n", VAR_20);
   VAR_19 = FUNC_1(VAR_17->tsf);
   VAR_18 = &VAR_17->radio_type;
  } else {
   VAR_18 = ((void*)0);
  }
  VAR_7 = FUNC_5(VAR_5, &VAR_9,
       &VAR_10, VAR_19,
       VAR_18, 1, VAR_20);
  if (VAR_7)
   goto check_next_scan;
 }

check_next_scan:
 if (!VAR_21->more_event)
  FUNC_2(VAR_5);

 return VAR_7;
}
