
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int plcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_0(u32 VAR_5, enum nl80211_band VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;


 if (VAR_5 & VAR_3) {
  VAR_7 = (VAR_5 & 0xff);
  return VAR_7;

 } else {
  if (VAR_6 == VAR_1)
   VAR_8 = VAR_0;
  for (VAR_7 = VAR_8; VAR_7 < VAR_2; VAR_7++)
   if (VAR_4[VAR_7].plcp == (VAR_5 & 0xFF))
    return VAR_7 - VAR_8;
 }

 return -1;
}
