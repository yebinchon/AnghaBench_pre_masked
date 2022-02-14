
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;




 int FUNC_5 (int,char*,int) ;

u64 FUNC_6(struct ieee80211_hw *VAR_0,
       u8 *VAR_1, bool VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_2) {
  switch (VAR_3) {
  case 131:
   VAR_4 = FUNC_3(VAR_1);
   break;
  case 128:
   VAR_4 = FUNC_4(VAR_1);
   break;
  default:
   FUNC_5(1, "rtl8192se: ERR txdesc :%d not processed\n",
      VAR_3);
   break;
  }
 } else {
  switch (VAR_3) {
  case 131:
   VAR_4 = FUNC_1(VAR_1);
   break;
  case 129:
   VAR_4 = FUNC_2(VAR_1);
   break;
  case 130:
   VAR_4 = FUNC_0(VAR_1);
   break;
  default:
   FUNC_5(1, "rtl8192se: ERR rxdesc :%d not processed\n",
      VAR_3);
   break;
  }
 }
 return VAR_4;
}
