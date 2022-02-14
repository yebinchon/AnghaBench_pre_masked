
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct rx_desc_92c {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct rx_desc_92c*) ;
 int FUNC_1 (struct rx_desc_92c*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;



 int FUNC_4 (int,char*,int) ;

u64 FUNC_5(struct ieee80211_hw *VAR_0,
       u8 *VAR_1, bool VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_2) {
  switch (VAR_3) {
  case 130:
   VAR_4 = FUNC_2(VAR_1);
   break;
  case 128:
   VAR_4 = FUNC_3(VAR_1);
   break;
  default:
   FUNC_4(1, "rtl8192de: ERR txdesc :%d not processed\n",
      VAR_3);
   break;
  }
 } else {
  struct rx_desc_92c *VAR_5 = (struct rx_desc_92c *)VAR_1;
  switch (VAR_3) {
  case 130:
   VAR_4 = FUNC_0(VAR_5);
   break;
  case 129:
   VAR_4 = FUNC_1(VAR_5);
   break;
  default:
   FUNC_4(1, "rtl8192de: ERR rxdesc :%d not processed\n",
      VAR_3);
   break;
  }
 }
 return VAR_4;
}
