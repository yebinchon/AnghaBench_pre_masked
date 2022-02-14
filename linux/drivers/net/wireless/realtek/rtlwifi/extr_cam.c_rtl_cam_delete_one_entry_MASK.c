
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

int FUNC_4(struct ieee80211_hw *VAR_5,
        u8 *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 struct rtl_priv *VAR_9 = FUNC_2(VAR_5);

 FUNC_1(VAR_9, VAR_1, VAR_2, "key_idx:%d\n", VAR_7);

 VAR_8 = VAR_7 * VAR_0;
 VAR_8 = VAR_8 | FUNC_0(31) | FUNC_0(16);

 FUNC_3(VAR_9, VAR_9->cfg->maps[VAR_4], 0);
 FUNC_3(VAR_9, VAR_9->cfg->maps[VAR_3], VAR_8);

 FUNC_1(VAR_9, VAR_1, VAR_2,
   "rtl_cam_delete_one_entry(): WRITE A4: %x\n", 0);
 FUNC_1(VAR_9, VAR_1, VAR_2,
   "rtl_cam_delete_one_entry(): WRITE A0: %x\n", VAR_8);

 return 0;

}
