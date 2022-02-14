
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dig_t {int cur_igvalue; int pre_igvalue; int back_val; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int) ;

void FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 struct dig_t *VAR_5 = &VAR_4->dm_digtable;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "cur_igvalue = 0x%x, pre_igvalue = 0x%x, backoff_val = %d\n",
   VAR_5->cur_igvalue, VAR_5->pre_igvalue,
   VAR_5->back_val);

 if (VAR_5->cur_igvalue > 0x3f)
  VAR_5->cur_igvalue = 0x3f;
 if (VAR_5->pre_igvalue != VAR_5->cur_igvalue) {
  FUNC_2(VAR_3, VAR_2, 0x7f,
         VAR_5->cur_igvalue);

  VAR_5->pre_igvalue = VAR_5->cur_igvalue;
 }
}
