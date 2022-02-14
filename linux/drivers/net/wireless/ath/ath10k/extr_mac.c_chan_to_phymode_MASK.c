
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {int width; TYPE_1__* chan; } ;
typedef enum wmi_phy_mode { ____Placeholder_wmi_phy_mode } wmi_phy_mode ;
struct TYPE_2__ {int band; int flags; } ;


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
 int FUNC_0 (int) ;

__attribute__((used)) static inline enum wmi_phy_mode
FUNC_1(const struct cfg80211_chan_def *VAR_12)
{
 enum wmi_phy_mode VAR_13 = VAR_11;

 switch (VAR_12->chan->band) {
 case 137:
  switch (VAR_12->width) {
  case 132:
   if (VAR_12->chan->flags & VAR_0)
    VAR_13 = VAR_5;
   else
    VAR_13 = VAR_6;
   break;
  case 133:
   VAR_13 = VAR_9;
   break;
  case 131:
   VAR_13 = VAR_10;
   break;
  case 130:
  case 135:
  case 129:
  case 128:
  case 134:
   VAR_13 = VAR_11;
   break;
  }
  break;
 case 136:
  switch (VAR_12->width) {
  case 132:
   VAR_13 = VAR_1;
   break;
  case 133:
   VAR_13 = VAR_7;
   break;
  case 131:
   VAR_13 = VAR_8;
   break;
  case 129:
   VAR_13 = VAR_3;
   break;
  case 134:
   VAR_13 = VAR_2;
   break;
  case 128:
   VAR_13 = VAR_4;
   break;
  case 130:
  case 135:
   VAR_13 = VAR_11;
   break;
  }
  break;
 default:
  break;
 }

 FUNC_0(VAR_13 == VAR_11);
 return VAR_13;
}
