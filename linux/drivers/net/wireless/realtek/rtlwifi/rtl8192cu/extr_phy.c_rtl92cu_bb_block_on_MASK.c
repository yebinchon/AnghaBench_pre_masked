
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bb_mutex; } ;
struct rtl_priv {TYPE_1__ io; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(&VAR_4->io.bb_mutex);
 FUNC_3(VAR_3, VAR_2, VAR_0, 0x1);
 FUNC_3(VAR_3, VAR_2, VAR_1, 0x1);
 FUNC_1(&VAR_4->io.bb_mutex);
}
