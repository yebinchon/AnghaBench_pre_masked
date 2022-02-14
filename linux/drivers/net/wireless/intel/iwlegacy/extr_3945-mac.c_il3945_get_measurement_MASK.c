
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
typedef scalar_t__ u32 ;
struct il_spectrum_cmd {int flags; TYPE_3__* channels; scalar_t__ start_time; void* len; int filter_flags; void* channel_count; } ;
struct TYPE_13__ {int id; int status; } ;
struct TYPE_14__ {TYPE_6__ spectrum; } ;
struct TYPE_12__ {int flags; } ;
struct il_rx_pkt {TYPE_7__ u; TYPE_5__ hdr; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {int beacon_interval; } ;
struct TYPE_8__ {int last_beacon_time; scalar_t__ last_tsf; } ;
struct il_priv {int measurement_status; TYPE_4__ active; TYPE_2__ timing; TYPE_1__ _3945; } ;
struct il_host_cmd {void* data; int len; scalar_t__ reply_page; int flags; int id; } ;
struct ieee80211_measurement_params {int channel; int start_time; int duration; } ;
typedef int spectrum ;
struct TYPE_10__ {int type; int channel; int duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
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
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct il_priv*,int ,scalar_t__,int) ;
 int FUNC_5 (struct il_priv*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*,struct il_host_cmd*) ;
 scalar_t__ FUNC_8 (struct il_priv*,scalar_t__,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct il_spectrum_cmd*,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct il_priv *VAR_15,
         struct ieee80211_measurement_params *VAR_16, u8 VAR_17)
{
 struct il_spectrum_cmd VAR_18;
 struct il_rx_pkt *VAR_19;
 struct il_host_cmd VAR_20 = {
  .id = VAR_1,
  .data = (void *)&VAR_18,
  .flags = VAR_0,
 };
 u32 VAR_21 = FUNC_10(VAR_16->start_time);
 int VAR_22;
 int VAR_23;
 int VAR_24 = FUNC_9(VAR_16->duration);

 if (FUNC_6(VAR_15))
  VAR_21 =
      FUNC_8(VAR_15,
     FUNC_10(VAR_16->start_time) -
     VAR_15->_3945.last_tsf,
     FUNC_9(VAR_15->timing.beacon_interval));

 FUNC_11(&VAR_18, 0, sizeof(VAR_18));

 VAR_18.channel_count = FUNC_2(1);
 VAR_18.flags =
     VAR_13 | VAR_8 | VAR_11;
 VAR_18.filter_flags = VAR_6;
 VAR_20.len = sizeof(VAR_18);
 VAR_18.len = FUNC_2(VAR_20.len - sizeof(VAR_18.len));

 if (FUNC_6(VAR_15))
  VAR_18.start_time =
      FUNC_4(VAR_15, VAR_15->_3945.last_beacon_time, VAR_21,
           FUNC_9(VAR_15->timing.beacon_interval));
 else
  VAR_18.start_time = 0;

 VAR_18.channels[0].duration = FUNC_3(VAR_24 * VAR_14);
 VAR_18.channels[0].channel = VAR_16->channel;
 VAR_18.channels[0].type = VAR_17;
 if (VAR_15->active.flags & VAR_10)
  VAR_18.flags |=
      VAR_10 | VAR_9 |
      VAR_12;

 VAR_22 = FUNC_7(VAR_15, &VAR_20);
 if (VAR_22)
  return VAR_22;

 VAR_19 = (struct il_rx_pkt *)VAR_20.reply_page;
 if (VAR_19->hdr.flags & VAR_4) {
  FUNC_1("Bad return from N_RX_ON_ASSOC command\n");
  VAR_22 = -VAR_3;
 }

 VAR_23 = FUNC_9(VAR_19->u.spectrum.status);
 switch (VAR_23) {
 case 0:
  if (VAR_19->u.spectrum.id != 0xff) {
   FUNC_0("Replaced existing measurement: %d\n",
          VAR_19->u.spectrum.id);
   VAR_15->measurement_status &= ~VAR_7;
  }
  VAR_15->measurement_status |= VAR_5;
  VAR_22 = 0;
  break;

 case 1:
  VAR_22 = -VAR_2;
  break;
 }

 FUNC_5(VAR_15, VAR_20.reply_page);

 return VAR_22;
}
