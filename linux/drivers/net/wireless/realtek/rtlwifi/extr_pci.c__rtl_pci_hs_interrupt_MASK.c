
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {TYPE_1__* cfg; } ;
struct rtl_pci {int sys_irq_mask; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 size_t VAR_0 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_2(VAR_1);
 struct rtl_pci *VAR_3 = FUNC_0(FUNC_1(VAR_1));

 FUNC_4(VAR_2, VAR_2->cfg->maps[VAR_0],
         FUNC_3(VAR_2, VAR_2->cfg->maps[VAR_0]) |
         VAR_3->sys_irq_mask);
}
