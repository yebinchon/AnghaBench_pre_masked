
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dig_t {scalar_t__ cur_igvalue; scalar_t__ pre_igvalue; int back_val; } ;
struct rtl_priv {struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,scalar_t__) ;

void FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct dig_t *VAR_6 = &VAR_5->dm_digtable;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "cur_igvalue = 0x%x, pre_igvalue = 0x%x, back_val = %d\n",
    VAR_6->cur_igvalue, VAR_6->pre_igvalue,
    VAR_6->back_val);

 if (VAR_6->pre_igvalue != VAR_6->cur_igvalue) {
  FUNC_2(VAR_4, VAR_2, 0x7f,
         VAR_6->cur_igvalue);
  FUNC_2(VAR_4, VAR_3, 0x7f,
         VAR_6->cur_igvalue);

  VAR_6->pre_igvalue = VAR_6->cur_igvalue;
 }
}
