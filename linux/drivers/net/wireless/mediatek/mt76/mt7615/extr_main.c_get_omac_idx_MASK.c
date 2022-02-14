
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(enum nl80211_iftype VAR_5, u32 VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 130:
 case 129:

  if (~VAR_6 & FUNC_0(VAR_2))
   return VAR_2;

  for (VAR_7 = VAR_0; VAR_7 < VAR_1; VAR_7++)
   if (~VAR_6 & FUNC_0(VAR_7))
    return VAR_7;

  break;
 case 128:

  for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++)
   if (~VAR_6 & FUNC_0(VAR_7))
    return VAR_7;

  break;
 default:
  FUNC_1(1);
  break;
 };

 return -1;
}
