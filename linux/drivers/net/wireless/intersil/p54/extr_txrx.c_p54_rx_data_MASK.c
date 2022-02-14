
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct p54_rx_data {int rate; int flags; scalar_t__ decrypt_status; int len; scalar_t__* align; int tsf32; int antenna; int rssi; int freq; } ;
struct p54_common {scalar_t__ mode; int tsf_low32; int work; TYPE_4__* hw; scalar_t__ tsf_high32; } ;
struct ieee80211_rx_status {int rate_idx; scalar_t__ band; int mactime; int boottime_ns; int flag; int antenna; int freq; int enc_flags; int signal; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_8__ {int flags; TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ conf; } ;
struct TYPE_6__ {scalar_t__ band; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct p54_common*,struct sk_buff*) ;
 int FUNC_11 (struct p54_common*,int ) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct p54_common *VAR_13, struct sk_buff *VAR_14)
{
 struct p54_rx_data *VAR_15 = (struct p54_rx_data *) VAR_14->data;
 struct ieee80211_rx_status *VAR_16 = FUNC_0(VAR_14);
 u16 VAR_17 = FUNC_7(VAR_15->freq);
 size_t VAR_18 = sizeof(*VAR_15);
 u32 VAR_19;
 __le16 VAR_20;
 u8 VAR_21 = VAR_15->rate & 0xf;






 if (FUNC_14(VAR_13->mode == VAR_2))
  return 0;

 if (!(VAR_15->flags & FUNC_1(VAR_7)))
  return 0;

 if (VAR_15->decrypt_status == VAR_5)
  VAR_16->flag |= VAR_10;
 if ((VAR_15->decrypt_status == VAR_3) ||
     (VAR_15->decrypt_status == VAR_4))
  VAR_16->flag |= VAR_12;

 VAR_16->signal = FUNC_11(VAR_13, VAR_15->rssi);
 if (VAR_15->rate & 0x10)
  VAR_16->enc_flags |= VAR_9;
 if (VAR_13->hw->conf.chandef.chan->band == VAR_1)
  VAR_16->rate_idx = (VAR_21 < 4) ? 0 : VAR_21 - 4;
 else
  VAR_16->rate_idx = VAR_21;

 VAR_16->freq = VAR_17;
 VAR_16->band = VAR_13->hw->conf.chandef.chan->band;
 VAR_16->antenna = VAR_15->antenna;

 VAR_19 = FUNC_8(VAR_15->tsf32);
 if (VAR_19 < VAR_13->tsf_low32)
  VAR_13->tsf_high32++;
 VAR_16->mactime = ((u64)VAR_13->tsf_high32) << 32 | VAR_19;
 VAR_13->tsf_low32 = VAR_19;





 VAR_16->flag |= VAR_11;

 if (VAR_15->flags & FUNC_1(VAR_6))
  VAR_18 += VAR_15->align[0];

 FUNC_12(VAR_14, VAR_18);
 FUNC_13(VAR_14, FUNC_7(VAR_15->len));

 VAR_20 = ((struct ieee80211_hdr *)VAR_14->data)->frame_control;
 if (FUNC_3(VAR_20) || FUNC_2(VAR_20))
  VAR_16->boottime_ns = FUNC_6();

 if (FUNC_14(VAR_13->hw->conf.flags & VAR_0))
  FUNC_10(VAR_13, VAR_14);

 FUNC_5(VAR_13->hw, VAR_14);

 FUNC_4(VAR_13->hw, &VAR_13->work,
      FUNC_9(VAR_8));

 return -1;
}
