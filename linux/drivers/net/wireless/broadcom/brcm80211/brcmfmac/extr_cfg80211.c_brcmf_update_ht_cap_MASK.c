
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int tx_params; int rx_mask; } ;
struct TYPE_4__ {int ht_supported; TYPE_1__ mcs; int ampdu_density; int ampdu_factor; int cap; } ;
struct ieee80211_supported_band {size_t band; TYPE_2__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_8,
    u32 VAR_9[2], u32 VAR_10)
{
 VAR_8->ht_cap.ht_supported = 1;
 if (VAR_9[VAR_8->band] & VAR_7) {
  VAR_8->ht_cap.cap |= VAR_2;
  VAR_8->ht_cap.cap |= VAR_3;
 }
 VAR_8->ht_cap.cap |= VAR_1;
 VAR_8->ht_cap.cap |= VAR_0;
 VAR_8->ht_cap.ampdu_factor = VAR_4;
 VAR_8->ht_cap.ampdu_density = VAR_6;
 FUNC_0(VAR_8->ht_cap.mcs.rx_mask, 0xff, VAR_10);
 VAR_8->ht_cap.mcs.tx_params = VAR_5;
}
