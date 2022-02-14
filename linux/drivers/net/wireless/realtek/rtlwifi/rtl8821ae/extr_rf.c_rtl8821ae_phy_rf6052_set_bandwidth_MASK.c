
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int,int) ;

void FUNC_3(struct ieee80211_hw *VAR_3, u8 VAR_4)
{
 switch (VAR_4) {
 case 130:
  FUNC_2(VAR_3, VAR_0, VAR_2, FUNC_0(11)|FUNC_0(10), 3);
  FUNC_2(VAR_3, VAR_1, VAR_2, FUNC_0(11)|FUNC_0(10), 3);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_0, VAR_2, FUNC_0(11)|FUNC_0(10), 1);
  FUNC_2(VAR_3, VAR_1, VAR_2, FUNC_0(11)|FUNC_0(10), 1);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_0, VAR_2, FUNC_0(11)|FUNC_0(10), 0);
  FUNC_2(VAR_3, VAR_1, VAR_2, FUNC_0(11)|FUNC_0(10), 0);
  break;
 default:
  FUNC_1("unknown bandwidth: %#X\n", VAR_4);
  break;
 }
}
