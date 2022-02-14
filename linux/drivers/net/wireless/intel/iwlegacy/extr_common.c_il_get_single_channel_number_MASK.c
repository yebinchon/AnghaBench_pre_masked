
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int channel; } ;
struct il_priv {int channel_count; TYPE_2__ staging; TYPE_1__* channel_info; } ;
struct il_channel_info {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_3__ {int channel; } ;


 int VAR_0 ;
 struct il_channel_info* FUNC_0 (struct il_priv*,int,int) ;
 scalar_t__ FUNC_1 (struct il_channel_info const*) ;
 int FUNC_2 (int ) ;

u8
FUNC_3(struct il_priv *VAR_1, enum nl80211_band VAR_2)
{
 const struct il_channel_info *VAR_3;
 int VAR_4;
 u8 VAR_5 = 0;
 u8 VAR_6, VAR_7;

 if (VAR_2 == VAR_0) {
  VAR_6 = 14;
  VAR_7 = VAR_1->channel_count;
 } else {
  VAR_6 = 0;
  VAR_7 = 14;
 }

 for (VAR_4 = VAR_6; VAR_4 < VAR_7; VAR_4++) {
  VAR_5 = VAR_1->channel_info[VAR_4].channel;
  if (VAR_5 == FUNC_2(VAR_1->staging.channel))
   continue;

  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_5);
  if (FUNC_1(VAR_3))
   break;
 }

 return VAR_5;
}
