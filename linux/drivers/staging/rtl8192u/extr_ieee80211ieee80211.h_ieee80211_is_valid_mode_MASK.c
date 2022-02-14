
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int modulation; int freq_band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(struct ieee80211_device *VAR_7, int VAR_8)
{






 if ((VAR_8 & VAR_4) &&
     (VAR_7->modulation & VAR_3) &&
     (VAR_7->freq_band & VAR_1))
  return 1;

 if ((VAR_8 & VAR_6) &&
     (VAR_7->modulation & VAR_3) &&
     (VAR_7->freq_band & VAR_0))
  return 1;

 if ((VAR_8 & VAR_5) &&
     (VAR_7->modulation & VAR_2) &&
     (VAR_7->freq_band & VAR_0))
  return 1;

 return 0;
}
