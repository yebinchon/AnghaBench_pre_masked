
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int dummy; } ;
struct ieee80211_rate {int bitrate; int hw_value; int hw_value_short; int flags; } ;
struct TYPE_2__ {int ieee; int plcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct il_priv *VAR_5, struct ieee80211_rate *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6[VAR_7].bitrate = VAR_4[VAR_7].ieee * 5;
  VAR_6[VAR_7].hw_value = VAR_7;
  VAR_6[VAR_7].hw_value_short = VAR_7;
  VAR_6[VAR_7].flags = 0;
  if (VAR_7 > VAR_1 || VAR_7 < VAR_2) {



   VAR_6[VAR_7].flags |=
       (VAR_4[VAR_7].plcp ==
        10) ? 0 : VAR_0;
  }
 }
}
