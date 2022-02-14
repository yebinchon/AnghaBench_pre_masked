
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

int FUNC_0(u32 VAR_5,
     enum nl80211_band VAR_6)
{
 int VAR_7 = VAR_5 & VAR_3;
 int VAR_8;
 int VAR_9 = 0;


 if (VAR_6 == VAR_2)
  VAR_9 = VAR_0;
 for (VAR_8 = VAR_9; VAR_8 < VAR_1; VAR_8++)
  if (VAR_4[VAR_8] == VAR_7)
   return VAR_8 - VAR_9;

 return -1;
}
