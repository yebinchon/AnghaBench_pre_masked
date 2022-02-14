
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct msix_entry {int dummy; } ;
struct isr_statistics {int hw; int ctkill; int sw; int wakeup; int alive; int tx; } ;
struct iwl_trans_pcie {int fh_mask; int shared_vec_mask; int ucode_write_complete; int hw_mask; int sx_complete; int sx_waitq; TYPE_2__* prph_info; int rxq; int ucode_write_waitq; int irq_lock; struct isr_statistics isr_stats; struct iwl_trans* trans; } ;
struct TYPE_6__ {int hw_error; } ;
struct iwl_trans {int sync_cmd_lockdep_map; TYPE_3__ dbg; TYPE_1__* trans_cfg; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int sleep_notif; } ;
struct TYPE_4__ {scalar_t__ device_family; scalar_t__ gen2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iwl_trans*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*,struct msix_entry*) ;
 struct iwl_trans_pcie* FUNC_4 (struct msix_entry*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*,int ) ;
 int FUNC_12 (struct iwl_trans*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,struct msix_entry*,int,int,int) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int *) ;

irqreturn_t FUNC_23(int VAR_27, void *VAR_28)
{
 struct msix_entry *VAR_29 = VAR_28;
 struct iwl_trans_pcie *VAR_30 = FUNC_4(VAR_29);
 struct iwl_trans *VAR_31 = VAR_30->trans;
 struct isr_statistics *VAR_32 = &VAR_30->isr_stats;
 u32 VAR_33, VAR_34;

 FUNC_16(&VAR_31->sync_cmd_lockdep_map);

 FUNC_18(&VAR_30->irq_lock);
 VAR_33 = FUNC_11(VAR_31, VAR_1);
 VAR_34 = FUNC_11(VAR_31, VAR_3);



 FUNC_12(VAR_31, VAR_1, VAR_33);
 FUNC_12(VAR_31, VAR_3, VAR_34);
 FUNC_19(&VAR_30->irq_lock);

 FUNC_20(VAR_31->dev, VAR_29, 1, VAR_33, VAR_34);

 if (FUNC_21(!(VAR_33 | VAR_34))) {
  FUNC_0(VAR_31, "Ignore interrupt, inta == 0\n");
  FUNC_17(&VAR_31->sync_cmd_lockdep_map);
  return VAR_6;
 }

 if (FUNC_2(VAR_10)) {
  FUNC_0(VAR_31,
         "ISR inta_fh 0x%08x, enabled (sw) 0x%08x (hw) 0x%08x\n",
         VAR_33, VAR_30->fh_mask,
         FUNC_11(VAR_31, VAR_2));
  if (VAR_33 & ~VAR_30->fh_mask)
   FUNC_0(VAR_31,
          "We got a masked interrupt (0x%08x)\n",
          VAR_33 & ~VAR_30->fh_mask);
 }

 VAR_33 &= VAR_30->fh_mask;

 if ((VAR_30->shared_vec_mask & VAR_13) &&
     VAR_33 & VAR_16) {
  FUNC_14();
  FUNC_7(VAR_31, 0);
  FUNC_15();
 }

 if ((VAR_30->shared_vec_mask & VAR_12) &&
     VAR_33 & VAR_17) {
  FUNC_14();
  FUNC_7(VAR_31, 1);
  FUNC_15();
 }


 if (VAR_33 & VAR_14) {
  FUNC_0(VAR_31, "uCode load interrupt\n");
  VAR_32->tx++;




  VAR_30->ucode_write_complete = 1;
  FUNC_22(&VAR_30->ucode_write_waitq);
 }


 if ((VAR_33 & VAR_15) ||
     (VAR_34 & VAR_24) ||
     (VAR_34 & VAR_25)) {
  FUNC_1(VAR_31,
   "Microcode SW error detected. Restarting 0x%X.\n",
   VAR_33);
  VAR_32->sw++;
  FUNC_6(VAR_31);
 }


 if (FUNC_2(VAR_10)) {
  FUNC_0(VAR_31,
         "ISR inta_hw 0x%08x, enabled (sw) 0x%08x (hw) 0x%08x\n",
         VAR_34, VAR_30->hw_mask,
         FUNC_11(VAR_31, VAR_4));
  if (VAR_34 & ~VAR_30->hw_mask)
   FUNC_0(VAR_31,
          "We got a masked interrupt 0x%08x\n",
          VAR_34 & ~VAR_30->hw_mask);
 }

 VAR_34 &= VAR_30->hw_mask;


 if (VAR_34 & VAR_18) {
  FUNC_0(VAR_31, "Alive interrupt\n");
  VAR_32->alive++;
  if (VAR_31->trans_cfg->gen2) {

   FUNC_8(VAR_31, VAR_30->rxq);
  }
 }

 if (VAR_31->trans_cfg->device_family == VAR_9 &&
     VAR_34 & VAR_22) {

  int VAR_35 = FUNC_11(VAR_31, VAR_0);

  FUNC_0(VAR_31, "IML transfer status: %d\n", VAR_35);
  if (VAR_35 == VAR_11) {
   VAR_32->sw++;
   FUNC_6(VAR_31);
  }
 } else if (VAR_34 & VAR_26) {
  u32 VAR_36 =
   FUNC_13(VAR_30->prph_info->sleep_notif);
  if (VAR_36 == VAR_8 ||
      VAR_36 == VAR_7) {
   FUNC_0(VAR_31,
          "Sx interrupt: sleep notification = 0x%x\n",
          VAR_36);
   VAR_30->sx_complete = 1;
   FUNC_22(&VAR_30->sx_waitq);
  } else {

   FUNC_0(VAR_31, "Wakeup interrupt\n");
   FUNC_9(VAR_31);
   FUNC_10(VAR_31);

   VAR_32->wakeup++;
  }
 }

 if (VAR_34 & VAR_21) {

  int VAR_37 = FUNC_11(VAR_31, VAR_0);

  FUNC_0(VAR_31, "IML transfer status: %d\n", VAR_37);
  if (VAR_37 == VAR_11) {
   VAR_32->sw++;
   FUNC_6(VAR_31);
  }
 }


 if (VAR_34 & VAR_19) {
  FUNC_1(VAR_31, "Microcode CT kill error detected.\n");
  VAR_32->ctkill++;
 }


 if (VAR_34 & VAR_23)
  FUNC_5(VAR_31);

 if (VAR_34 & VAR_20) {
  FUNC_1(VAR_31,
   "Hardware error detected. Restarting.\n");

  VAR_32->hw++;
  VAR_31->dbg.hw_error = 1;
  FUNC_6(VAR_31);
 }

 FUNC_3(VAR_31, VAR_29);

 FUNC_17(&VAR_31->sync_cmd_lockdep_map);

 return VAR_5;
}
