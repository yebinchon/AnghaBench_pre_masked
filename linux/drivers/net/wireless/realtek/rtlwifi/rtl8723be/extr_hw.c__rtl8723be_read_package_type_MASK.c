
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,int,int*) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_5, 0, 1);
 if (!FUNC_0(VAR_5, 0x1FB, &VAR_7))
  VAR_7 = 0;
 FUNC_1(VAR_5, 0, 0);

 switch (VAR_7 & 0x7) {
 case 0x4:
  VAR_6 = VAR_2;
  break;
 case 0x5:
  VAR_6 = VAR_4;
  break;
 case 0x6:
  VAR_6 = VAR_1;
  break;
 case 0x7:
  VAR_6 = VAR_3;
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return VAR_6;
}
