
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_private {int rf_type; TYPE_2__* hw; } ;
struct ieee80211_channel {void* flags; void* max_power; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int ** bands; } ;


 int FUNC_0 (struct ieee80211_channel*) ;
 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;






 void* VAR_3 ;
 struct ieee80211_channel* VAR_4 ;
 struct ieee80211_channel* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(struct vnt_private *VAR_8)
{
 struct ieee80211_channel *VAR_9;
 int VAR_10;

 switch (VAR_8->rf_type) {
 case 133:
 case 128:
 default:
  VAR_9 = VAR_5;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
   VAR_9[VAR_10].max_power = VAR_3;
   VAR_9[VAR_10].flags = VAR_0;
  }

  VAR_8->hw->wiphy->bands[VAR_2] =
      &VAR_7;

 case 132:
 case 131:
 case 130:
 case 129:
  VAR_9 = VAR_4;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   VAR_9[VAR_10].max_power = VAR_3;
   VAR_9[VAR_10].flags = VAR_0;
  }

  VAR_8->hw->wiphy->bands[VAR_1] =
      &VAR_6;
  break;
 }
}
