
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;






 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u64 FUNC_6(struct ieee80211_hw *VAR_0, u8 *VAR_1,
       bool VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0;
 __le32 *VAR_5 = (__le32 *)VAR_1;

 if (VAR_2) {
  switch (VAR_3) {
  case 131:
   VAR_4 = FUNC_4(VAR_5);
   break;
  case 128:
   VAR_4 = FUNC_5(VAR_5);
   break;
  default:
   FUNC_0(1, "rtl8192ce: ERR txdesc :%d not processed\n",
      VAR_3);
   break;
  }
 } else {
  switch (VAR_3) {
  case 131:
   VAR_4 = FUNC_2(VAR_5);
   break;
  case 129:
   VAR_4 = FUNC_3(VAR_5);
   break;
  case 130:
   VAR_4 = FUNC_1(VAR_5);
   break;
  default:
   FUNC_0(1, "rtl8192ce: ERR rxdesc :%d not processed\n",
      VAR_3);
   break;
  }
 }
 return VAR_4;
}
