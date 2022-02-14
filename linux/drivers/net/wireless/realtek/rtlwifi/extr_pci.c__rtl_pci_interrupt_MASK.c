
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int irq_th_lock; } ;
struct TYPE_10__ {int irq_tasklet; int fwevt_wq; int rtl_wq; int irq_prepare_bcn_tasklet; } ;
struct TYPE_7__ {scalar_t__ earlymode_enable; } ;
struct TYPE_11__ {int num_tx_inperiod; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_6__* cfg; TYPE_4__ works; TYPE_1__ rtlhal; TYPE_5__ link_info; } ;
struct rtl_pci {scalar_t__ irq_enabled; } ;
struct rtl_int {int inta; int intb; int intd; int member_0; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_12__ {int* maps; TYPE_3__* ops; } ;
struct TYPE_9__ {int (* enable_interrupt ) (struct ieee80211_hw*) ;int (* interrupt_recognized ) (struct ieee80211_hw*,struct rtl_int*) ;int (* disable_interrupt ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,struct rtl_int*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_36, void *VAR_37)
{
 struct ieee80211_hw *VAR_38 = VAR_37;
 struct rtl_pci *VAR_39 = FUNC_6(FUNC_7(VAR_38));
 struct rtl_priv *VAR_40 = FUNC_8(VAR_38);
 struct rtl_hal *VAR_41 = FUNC_5(FUNC_8(VAR_38));
 unsigned long VAR_42;
 struct rtl_int VAR_43 = {0};

 irqreturn_t VAR_44 = VAR_13;

 if (VAR_39->irq_enabled == 0)
  return VAR_44;

 FUNC_9(&VAR_40->locks.irq_th_lock, VAR_42);
 VAR_40->cfg->ops->disable_interrupt(VAR_38);


 VAR_40->cfg->ops->interrupt_recognized(VAR_38, &VAR_43);


 if (!VAR_43.inta || VAR_43.inta == 0xffff)
  goto done;


 if (VAR_43.inta & VAR_40->cfg->maps[VAR_29])
  FUNC_0(VAR_40, VAR_3, VAR_4,
    "beacon ok interrupt!\n");

 if (FUNC_15(VAR_43.inta & VAR_40->cfg->maps[VAR_28]))
  FUNC_0(VAR_40, VAR_3, VAR_4,
    "beacon err interrupt!\n");

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_16])
  FUNC_0(VAR_40, VAR_3, VAR_4, "beacon interrupt!\n");

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_15]) {
  FUNC_0(VAR_40, VAR_3, VAR_4,
    "prepare beacon for interrupt!\n");
  FUNC_14(&VAR_40->works.irq_prepare_bcn_tasklet);
 }


 if (FUNC_15(VAR_43.intb & VAR_40->cfg->maps[VAR_30]))
  FUNC_0(VAR_40, VAR_2, VAR_5, "IMR_TXFOVW!\n");

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_24]) {
  FUNC_0(VAR_40, VAR_3, VAR_4,
    "Manage ok interrupt!\n");
  FUNC_3(VAR_38, VAR_14);
 }

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_22]) {
  FUNC_0(VAR_40, VAR_3, VAR_4,
    "HIGH_QUEUE ok interrupt!\n");
  FUNC_3(VAR_38, VAR_12);
 }

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_18]) {
  VAR_40->link_info.num_tx_inperiod++;

  FUNC_0(VAR_40, VAR_3, VAR_4,
    "BK Tx OK interrupt!\n");
  FUNC_3(VAR_38, VAR_1);
 }

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_17]) {
  VAR_40->link_info.num_tx_inperiod++;

  FUNC_0(VAR_40, VAR_3, VAR_4,
    "BE TX OK interrupt!\n");
  FUNC_3(VAR_38, VAR_0);
 }

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_31]) {
  VAR_40->link_info.num_tx_inperiod++;

  FUNC_0(VAR_40, VAR_3, VAR_4,
    "VI TX OK interrupt!\n");
  FUNC_3(VAR_38, VAR_34);
 }

 if (VAR_43.inta & VAR_40->cfg->maps[VAR_32]) {
  VAR_40->link_info.num_tx_inperiod++;

  FUNC_0(VAR_40, VAR_3, VAR_4,
    "Vo TX OK interrupt!\n");
  FUNC_3(VAR_38, VAR_35);
 }

 if (VAR_41->hw_type == VAR_11) {
  if (VAR_43.intd & VAR_40->cfg->maps[VAR_21]) {
   VAR_40->link_info.num_tx_inperiod++;

   FUNC_0(VAR_40, VAR_3, VAR_4,
     "H2C TX OK interrupt!\n");
   FUNC_3(VAR_38, VAR_6);
  }
 }

 if (VAR_41->hw_type == VAR_8) {
  if (VAR_43.inta & VAR_40->cfg->maps[VAR_20]) {
   VAR_40->link_info.num_tx_inperiod++;

   FUNC_0(VAR_40, VAR_3, VAR_4,
     "CMD TX OK interrupt!\n");
   FUNC_3(VAR_38, VAR_33);
  }
 }


 if (VAR_43.inta & VAR_40->cfg->maps[VAR_26]) {
  FUNC_0(VAR_40, VAR_3, VAR_4, "Rx ok interrupt!\n");
  FUNC_2(VAR_38);
 }

 if (FUNC_15(VAR_43.inta & VAR_40->cfg->maps[VAR_25])) {
  FUNC_0(VAR_40, VAR_2, VAR_5,
    "rx descriptor unavailable!\n");
  FUNC_2(VAR_38);
 }

 if (FUNC_15(VAR_43.intb & VAR_40->cfg->maps[VAR_27])) {
  FUNC_0(VAR_40, VAR_2, VAR_5, "rx overflow !\n");
  FUNC_2(VAR_38);
 }


 if (VAR_41->hw_type == VAR_9) {
  if (VAR_43.inta & VAR_40->cfg->maps[VAR_19]) {
   FUNC_0(VAR_40, VAR_3, VAR_4,
     "firmware interrupt!\n");
   FUNC_4(VAR_40->works.rtl_wq,
        &VAR_40->works.fwevt_wq, 0);
  }
 }







 if (VAR_41->hw_type == VAR_7 ||
     VAR_41->hw_type == VAR_10) {
  if (FUNC_15(VAR_43.inta &
      VAR_40->cfg->maps[VAR_23])) {
   FUNC_0(VAR_40, VAR_3, VAR_4,
     "hsisr interrupt!\n");
   FUNC_1(VAR_38);
  }
 }

 if (VAR_40->rtlhal.earlymode_enable)
  FUNC_14(&VAR_40->works.irq_tasklet);

done:
 VAR_40->cfg->ops->enable_interrupt(VAR_38);
 FUNC_10(&VAR_40->locks.irq_th_lock, VAR_42);
 return VAR_44;
}
