
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int idx; } ;
struct mt7603_sta {TYPE_1__ wcid; } ;
struct mt7603_dev {int dummy; } ;
struct TYPE_6__ {int cap; int ampdu_density; int ampdu_factor; } ;
struct TYPE_5__ {scalar_t__ cap; } ;
struct ieee80211_sta {TYPE_3__ ht_cap; TYPE_2__ vht_cap; scalar_t__ drv_priv; } ;


 int FUNC_0 (int ,int ) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt7603_dev*,int) ;
 int FUNC_4 (struct mt7603_dev*,int,int) ;

void FUNC_5(struct mt7603_dev *VAR_12, struct ieee80211_sta *VAR_13)
{
 struct mt7603_sta *VAR_14 = (struct mt7603_sta *)VAR_13->drv_priv;
 int VAR_15 = VAR_14->wcid.idx;
 u32 VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_1(VAR_15);

 VAR_17 = FUNC_3(VAR_12, VAR_16 + 2 * 4);
 VAR_17 &= VAR_5 | VAR_2;
 VAR_17 |= FUNC_0(VAR_3, VAR_13->ht_cap.ampdu_factor) |
        FUNC_0(VAR_6, VAR_13->ht_cap.ampdu_density) |
        VAR_7;

 if (VAR_13->ht_cap.cap)
  VAR_17 |= VAR_4;
 if (VAR_13->vht_cap.cap)
  VAR_17 |= VAR_8;

 FUNC_4(VAR_12, VAR_16 + 2 * 4, VAR_17);

 VAR_16 = FUNC_2(VAR_15);
 VAR_17 = FUNC_3(VAR_12, VAR_16 + 9 * 4);
 VAR_17 &= ~(VAR_9 | VAR_10 |
   VAR_11);
 if (VAR_13->ht_cap.cap & VAR_0)
  VAR_17 |= VAR_9;
 if (VAR_13->ht_cap.cap & VAR_1)
  VAR_17 |= VAR_10;
 FUNC_4(VAR_12, VAR_16 + 9 * 4, VAR_17);
}
