
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int dma64; } ;






 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

u64 FUNC_8(struct ieee80211_hw *VAR_0,
       u8 *VAR_1, bool VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_7(VAR_0);
 u64 VAR_5 = 0;
 bool VAR_6 = VAR_4->cfg->mod_params->dma64;
 __le32 *VAR_7 = (__le32 *)VAR_1;

 if (VAR_2) {
  switch (VAR_3) {
  case 131:
   VAR_5 = FUNC_4(VAR_7);
   break;
  case 128:
   VAR_5 = FUNC_6(VAR_7, 1);
   VAR_5 |= (u64)FUNC_5(VAR_7, 1,
        VAR_6) << 32;
   break;
  default:
   FUNC_0(1,
      "rtl8192ee: ERR txdesc :%d not processed\n",
      VAR_3);
   break;
  }
 } else {
  switch (VAR_3) {
  case 131:
   VAR_5 = FUNC_2(VAR_7);
   break;
  case 129:
   VAR_5 = FUNC_3(VAR_7);
   break;
  case 130:
   VAR_5 = FUNC_1(VAR_7);
   break;
  default:
   FUNC_0(1,
      "rtl8192ee: ERR rxdesc :%d not processed\n",
      VAR_3);
   break;
  }
 }
 return VAR_5;
}
