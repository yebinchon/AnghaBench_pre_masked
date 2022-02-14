
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* tx_mcs_map; void* rx_mcs_map; } ;
struct TYPE_4__ {int vht_supported; int cap; TYPE_1__ vht_mcs; } ;
struct ieee80211_supported_band {size_t band; TYPE_2__ vht_cap; } ;
typedef void* __le16 ;


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
 size_t VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_17,
     u32 VAR_18[2], u32 VAR_19, u32 VAR_20,
     u32 VAR_21, u32 VAR_22)
{
 __le16 VAR_23;


 if (VAR_17->band == VAR_15)
  return;

 VAR_17->vht_cap.vht_supported = 1;

 VAR_17->vht_cap.cap |= VAR_8;
 if (VAR_18[VAR_17->band] & VAR_16) {
  VAR_17->vht_cap.cap |= VAR_10;
  VAR_17->vht_cap.cap |= VAR_7;
 }

 VAR_23 = FUNC_0(VAR_19, VAR_14);
 VAR_17->vht_cap.vht_mcs.rx_mcs_map = VAR_23;
 VAR_17->vht_cap.vht_mcs.tx_mcs_map = VAR_23;


 if (VAR_21 & VAR_2)
  VAR_17->vht_cap.cap |= VAR_11;
 if (VAR_21 & VAR_0)
  VAR_17->vht_cap.cap |= VAR_5;
 if (VAR_22 & VAR_3)
  VAR_17->vht_cap.cap |= VAR_12;
 if (VAR_22 & VAR_1)
  VAR_17->vht_cap.cap |= VAR_6;

 if ((VAR_21 || VAR_22) && (VAR_20 > 1)) {
  VAR_17->vht_cap.cap |=
   (2 << VAR_4);
  VAR_17->vht_cap.cap |= ((VAR_20 - 1) <<
    VAR_9);
  VAR_17->vht_cap.cap |=
   VAR_13;
 }
}
