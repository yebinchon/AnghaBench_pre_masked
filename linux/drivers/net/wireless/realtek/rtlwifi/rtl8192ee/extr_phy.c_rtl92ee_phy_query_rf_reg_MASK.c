
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rf_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

u32 FUNC_6(struct ieee80211_hw *VAR_2,
        enum radio_path VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_2);
 u32 VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "regaddr(%#x), rfpath(%#x), bitmask(%#x)\n",
    VAR_4, VAR_3, VAR_5);

 FUNC_4(&VAR_6->locks.rf_lock, VAR_10);

 VAR_7 = FUNC_2(VAR_2 , VAR_3, VAR_4);
 VAR_9 = FUNC_1(VAR_5);
 VAR_8 = (VAR_7 & VAR_5) >> VAR_9;

 FUNC_5(&VAR_6->locks.rf_lock, VAR_10);

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "regaddr(%#x),rfpath(%#x),bitmask(%#x),original_value(%#x)\n",
    VAR_4, VAR_3, VAR_5, VAR_7);

 return VAR_8;
}
