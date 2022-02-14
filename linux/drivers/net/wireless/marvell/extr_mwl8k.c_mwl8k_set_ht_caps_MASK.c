
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* rx_mask; int tx_params; } ;
struct TYPE_4__ {int ht_supported; TYPE_1__ mcs; int cap; int ampdu_density; int ampdu_factor; } ;
struct ieee80211_supported_band {TYPE_2__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_25,
    struct ieee80211_supported_band *VAR_26, u32 VAR_27)
{
 int VAR_28;
 int VAR_29;

 VAR_26->ht_cap.ht_supported = 1;

 if (VAR_27 & VAR_18)
  VAR_26->ht_cap.cap |= VAR_3;
 if (VAR_27 & VAR_17)
  VAR_26->ht_cap.cap |= VAR_2;
 if (VAR_27 & VAR_15) {
  FUNC_1(VAR_25, VAR_0);
  VAR_26->ht_cap.ampdu_factor = VAR_9;
  VAR_26->ht_cap.ampdu_density = VAR_13;
 }
 if (VAR_27 & VAR_20)
  VAR_26->ht_cap.cap |= VAR_4;
 if (VAR_27 & VAR_24)
  VAR_26->ht_cap.cap |= VAR_8;
 if (VAR_27 & VAR_22)
  VAR_26->ht_cap.cap |= VAR_6;
 if (VAR_27 & VAR_21)
  VAR_26->ht_cap.cap |= VAR_5;
 if (VAR_27 & VAR_16)
  VAR_26->ht_cap.cap |= VAR_1;
 if (VAR_27 & VAR_14)
  VAR_26->ht_cap.cap |= VAR_7;

 VAR_28 = FUNC_0(VAR_27 & VAR_19);
 VAR_29 = FUNC_0(VAR_27 & VAR_23);

 VAR_26->ht_cap.mcs.rx_mask[0] = 0xff;
 if (VAR_28 >= 2)
  VAR_26->ht_cap.mcs.rx_mask[1] = 0xff;
 if (VAR_28 >= 3)
  VAR_26->ht_cap.mcs.rx_mask[2] = 0xff;
 VAR_26->ht_cap.mcs.rx_mask[4] = 0x01;
 VAR_26->ht_cap.mcs.tx_params = VAR_10;

 if (VAR_28 != VAR_29) {
  VAR_26->ht_cap.mcs.tx_params |= VAR_12;
  VAR_26->ht_cap.mcs.tx_params |= (VAR_29 - 1) <<
    VAR_11;
 }
}
