
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 () ;

void FUNC_8(struct ieee80211_hw *VAR_0, u8 *VAR_1, bool VAR_2,
        u8 VAR_3, u8 *VAR_4)
{
 if (VAR_2) {
  switch (VAR_3) {
  case 133:
   FUNC_7();
   FUNC_5(VAR_1, 1);
   break;
  case 128:
   FUNC_4(VAR_1, *(u32 *) VAR_4);
   break;
  default:
   FUNC_6(1, "rtl8192de: ERR txdesc :%d not processed\n",
      VAR_3);
   break;
  }
 } else {
  switch (VAR_3) {
  case 130:
   FUNC_7();
   FUNC_2(VAR_1, 1);
   break;
  case 132:
   FUNC_0(VAR_1, *(u32 *) VAR_4);
   break;
  case 129:
   FUNC_3(VAR_1, *(u32 *) VAR_4);
   break;
  case 131:
   FUNC_1(VAR_1, 1);
   break;
  default:
   FUNC_6(1, "rtl8192de: ERR rxdesc :%d not processed\n",
      VAR_3);
   break;
  }
 }
}
