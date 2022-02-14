
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_private {int byRFType; TYPE_2__* hw; } ;
struct ieee80211_channel {int max_power; void* flags; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int ** bands; } ;


 int FUNC_0 (struct ieee80211_channel*) ;
 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct ieee80211_channel* VAR_3 ;
 struct ieee80211_channel* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1(struct vnt_private *VAR_7)
{
 struct ieee80211_channel *VAR_8;
 int VAR_9;

 switch (VAR_7->byRFType) {
 case 134:
 case 129:
 case 132:
 default:
  VAR_8 = VAR_4;

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
   VAR_8[VAR_9].max_power = 0x3f;
   VAR_8[VAR_9].flags = VAR_0;
  }

  VAR_7->hw->wiphy->bands[VAR_2] =
      &VAR_6;

 case 131:
 case 135:
 case 133:
 case 130:
 case 128:
  VAR_8 = VAR_3;

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   VAR_8[VAR_9].max_power = 0x3f;
   VAR_8[VAR_9].flags = VAR_0;
  }

  VAR_7->hw->wiphy->bands[VAR_1] =
      &VAR_5;
  break;
 }
}
