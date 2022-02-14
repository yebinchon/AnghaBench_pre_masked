
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rtl_wq; int lps_change_work; int irq_tasklet; } ;
struct rtl_priv {TYPE_2__ works; } ;
struct rtl_pci {TYPE_1__* pdev; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_6(VAR_0);
 struct rtl_pci *VAR_2 = FUNC_4(FUNC_5(VAR_0));

 FUNC_0(VAR_0);

 FUNC_7(VAR_2->pdev->irq);
 FUNC_8(&VAR_1->works.irq_tasklet);
 FUNC_1(&VAR_1->works.lps_change_work);

 FUNC_3(VAR_1->works.rtl_wq);
 FUNC_2(VAR_1->works.rtl_wq);
}
