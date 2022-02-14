
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtl_phy {void* framesync; scalar_t__ framesync_c34; void** default_initialgain; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,void*,...) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_2(VAR_10);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);

 VAR_12->default_initialgain[0] =
     (u8) FUNC_1(VAR_10, VAR_6, VAR_2);
 VAR_12->default_initialgain[1] =
     (u8) FUNC_1(VAR_10, VAR_7, VAR_2);
 VAR_12->default_initialgain[2] =
     (u8) FUNC_1(VAR_10, VAR_8, VAR_2);
 VAR_12->default_initialgain[3] =
     (u8) FUNC_1(VAR_10, VAR_9, VAR_2);
 FUNC_0(VAR_11, VAR_0, VAR_1,
   "Default initial gain (c50=0x%x, c58=0x%x, c60=0x%x, c68=0x%x\n",
   VAR_12->default_initialgain[0],
   VAR_12->default_initialgain[1],
   VAR_12->default_initialgain[2],
   VAR_12->default_initialgain[3]);
 VAR_12->framesync = (u8)FUNC_1(VAR_10, VAR_5,
           VAR_2);
 VAR_12->framesync_c34 = FUNC_1(VAR_10, VAR_4,
           VAR_3);
 FUNC_0(VAR_11, VAR_0, VAR_1,
   "Default framesync (0x%x) = 0x%x\n",
   VAR_5, VAR_12->framesync);
}
