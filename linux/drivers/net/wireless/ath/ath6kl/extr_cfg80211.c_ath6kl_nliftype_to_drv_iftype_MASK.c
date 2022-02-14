
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(enum nl80211_iftype VAR_4, u8 *VAR_5)
{
 switch (VAR_4) {
 case 128:
 case 130:
  *VAR_5 = VAR_3;
  break;
 case 132:
  *VAR_5 = VAR_0;
  break;
 case 131:
 case 129:
  *VAR_5 = VAR_1;
  break;
 default:
  FUNC_0("invalid interface type %u\n", VAR_4);
  return -VAR_2;
 }

 return 0;
}
