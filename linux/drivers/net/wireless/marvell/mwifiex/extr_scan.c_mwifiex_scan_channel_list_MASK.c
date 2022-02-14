
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mwifiex_scan_cmd_config {scalar_t__ tlv_buf_len; scalar_t__* tlv_buf; } ;
struct mwifiex_private {int csa_chan; struct mwifiex_adapter* adapter; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int type; } ;
struct mwifiex_ie_types_chan_list_param_set {scalar_t__ chan_scan_param; TYPE_1__ header; } ;
struct mwifiex_chan_scan_param_set {int chan_number; int chan_scan_mode_bitmap; scalar_t__ max_scan_time; scalar_t__ radio_type; } ;
struct mwifiex_adapter {scalar_t__ ext_scan; struct mwifiex_chan_scan_param_set* scan_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__,struct mwifiex_chan_scan_param_set*,int) ;
 int FUNC_4 (struct mwifiex_private*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,struct mwifiex_scan_cmd_config*,scalar_t__) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_adapter*,int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_8 (struct mwifiex_private*,scalar_t__,int ,int ,struct mwifiex_scan_cmd_config*,int) ;

__attribute__((used)) static int
FUNC_9(struct mwifiex_private *VAR_9,
     u32 VAR_10, u8 VAR_11,
     struct mwifiex_scan_cmd_config *VAR_12,
     struct mwifiex_ie_types_chan_list_param_set
     *VAR_13,
     struct mwifiex_chan_scan_param_set *VAR_14)
{
 struct mwifiex_adapter *VAR_15 = VAR_9->adapter;
 int VAR_16 = 0;
 struct mwifiex_chan_scan_param_set *VAR_17;
 struct mwifiex_chan_scan_param_set *VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u8 VAR_24;

 if (!VAR_12 || !VAR_13 || !VAR_14) {
  FUNC_7(VAR_9->adapter, VAR_0,
       "info: Scan: Null detect: %p, %p, %p\n",
       VAR_12, VAR_13, VAR_14);
  return -1;
 }


 FUNC_4(VAR_9);

 VAR_13->header.type = FUNC_0(VAR_8);



 VAR_17 = VAR_14;




 while (VAR_17->chan_number) {

  VAR_19 = 0;
  VAR_22 = 0;
  VAR_24 = 0;
  VAR_13->header.len = 0;
  VAR_18 = VAR_17;
  VAR_23 = 0;
  while (VAR_19 < VAR_10 &&
         VAR_17->chan_number && !VAR_23) {

   if (VAR_17->chan_number == VAR_9->csa_chan) {
    VAR_17++;
    continue;
   }

   VAR_24 = VAR_17->radio_type;
   FUNC_7(VAR_9->adapter, VAR_4,
        "info: Scan: Chan(%3d), Radio(%d),\t"
        "Mode(%d, %d), Dur(%d)\n",
        VAR_17->chan_number,
        VAR_17->radio_type,
        VAR_17->chan_scan_mode_bitmap
        & VAR_7,
        (VAR_17->chan_scan_mode_bitmap
        & VAR_5) >> 1,
        FUNC_1(VAR_17->max_scan_time));



   FUNC_3(VAR_13->chan_scan_param + VAR_19,
          VAR_17,
          sizeof(VAR_13->chan_scan_param));



   FUNC_2(&VAR_13->header.len,
            sizeof(
      VAR_13->chan_scan_param));







   VAR_12->tlv_buf_len = (u32) ((u8 *) VAR_13 -
       VAR_12->tlv_buf);



   VAR_12->tlv_buf_len +=
    (sizeof(VAR_13->header)
     + FUNC_1(VAR_13->header.len));



   VAR_19++;


   VAR_22 +=
    FUNC_1(VAR_17->max_scan_time);

   VAR_23 = 0;




   if (!VAR_11 &&
       (VAR_17->chan_number == 1 ||
        VAR_17->chan_number == 6 ||
        VAR_17->chan_number == 11))
    VAR_23 = 1;



   VAR_17++;




   if (!VAR_11 &&
       (VAR_17->chan_number == 1 ||
        VAR_17->chan_number == 6 ||
        VAR_17->chan_number == 11))
    VAR_23 = 1;
  }



  if (VAR_22 > VAR_6) {
   FUNC_7(VAR_9->adapter, VAR_0,
        "total scan time %dms\t"
        "is over limit (%dms), scan skipped\n",
        VAR_22,
        VAR_6);
   VAR_16 = -1;
   break;
  }

  VAR_20 = FUNC_5(VAR_9, VAR_12,
           VAR_24);

  VAR_9->adapter->scan_channels = VAR_18;



  if (VAR_9->adapter->ext_scan)
   VAR_21 = VAR_3;
  else
   VAR_21 = VAR_2;

  VAR_16 = FUNC_8(VAR_9, VAR_21, VAR_1,
           0, VAR_12, 0);





  VAR_12->tlv_buf_len -=
       sizeof(struct mwifiex_ie_types_header) + VAR_20;

  if (VAR_16) {
   FUNC_6(VAR_15);
   break;
  }
 }

 if (VAR_16)
  return -1;

 return 0;
}
