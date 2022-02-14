
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lps_change_work; int irq_prepare_bcn_tasklet; int irq_tasklet; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct rtl_pci {int up_first_time; int being_init_adapter; int acm_method; struct pci_dev* pdev; } ;
struct rtl_mac {int beacon_interval; int current_ampdu_density; int current_ampdu_factor; int retry_short; int retry_long; scalar_t__ max_mss_density; scalar_t__ min_space_cfg; } ;
struct rtl_hal {struct ieee80211_hw* hw; } ;
struct pci_dev {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 int VAR_3 ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_4,
     struct pci_dev *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_6(VAR_4);
 struct rtl_mac *VAR_7 = FUNC_3(FUNC_6(VAR_4));
 struct rtl_pci *VAR_8 = FUNC_4(FUNC_5(VAR_4));
 struct rtl_hal *VAR_9 = FUNC_2(FUNC_6(VAR_4));

 VAR_8->up_first_time = 1;
 VAR_8->being_init_adapter = 0;

 VAR_9->hw = VAR_4;
 VAR_8->pdev = VAR_5;


 FUNC_1(VAR_4);


 VAR_7->beacon_interval = 100;


 VAR_7->min_space_cfg = 0;
 VAR_7->max_mss_density = 0;

 VAR_7->current_ampdu_density = 7;
 VAR_7->current_ampdu_factor = 3;


 VAR_7->retry_short = 7;
 VAR_7->retry_long = 7;


 VAR_8->acm_method = VAR_0;


 FUNC_7(&VAR_6->works.irq_tasklet,
       (void (*)(unsigned long))VAR_1,
       (unsigned long)VAR_4);
 FUNC_7(&VAR_6->works.irq_prepare_bcn_tasklet,
       (void (*)(unsigned long))VAR_2,
       (unsigned long)VAR_4);
 FUNC_0(&VAR_6->works.lps_change_work,
    VAR_3);
}
