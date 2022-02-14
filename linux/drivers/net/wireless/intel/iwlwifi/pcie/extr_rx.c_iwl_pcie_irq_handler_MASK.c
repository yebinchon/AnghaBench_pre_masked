
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isr_statistics {int unhandled; int tx; int rx; int wakeup; int sw; int ctkill; int alive; int sch; int hw; } ;
struct iwl_trans_pcie {int inta_mask; int ucode_write_complete; int irq_lock; int ucode_write_waitq; int rxq; int use_ict; struct isr_statistics isr_stats; } ;
struct iwl_trans {int sync_cmd_lockdep_map; int status; TYPE_1__* trans_cfg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ gen2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int VAR_21 ;
 int FUNC_1 (struct iwl_trans*,char*,...) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,char*,int) ;
 int VAR_22 ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 int FUNC_12 (struct iwl_trans*) ;
 int FUNC_13 (struct iwl_trans*) ;
 int FUNC_14 (struct iwl_trans*,int ) ;
 int FUNC_15 (struct iwl_trans*,int ) ;
 int FUNC_16 (struct iwl_trans*) ;
 int FUNC_17 (struct iwl_trans*) ;
 int FUNC_18 (struct iwl_trans*,int ) ;
 int FUNC_19 (struct iwl_trans*,int ,int) ;
 int FUNC_20 (struct iwl_trans*,int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int ,int *) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (int *) ;

irqreturn_t FUNC_31(int VAR_23, void *VAR_24)
{
 struct iwl_trans *VAR_25 = VAR_24;
 struct iwl_trans_pcie *VAR_26 = FUNC_2(VAR_25);
 struct isr_statistics *VAR_27 = &VAR_26->isr_stats;
 u32 VAR_28 = 0;
 u32 VAR_29 = 0;

 FUNC_24(&VAR_25->sync_cmd_lockdep_map);

 FUNC_26(&VAR_26->irq_lock);




 if (FUNC_21(VAR_26->use_ict))
  VAR_28 = FUNC_11(VAR_25);
 else
  VAR_28 = FUNC_12(VAR_25);

 if (FUNC_9(VAR_21)) {
  FUNC_0(VAR_25,
         "ISR inta 0x%08x, enabled 0x%08x(sw), enabled(hw) 0x%08x, fh 0x%08x\n",
         VAR_28, VAR_26->inta_mask,
         FUNC_18(VAR_25, VAR_15),
         FUNC_18(VAR_25, VAR_1));
  if (VAR_28 & (~VAR_26->inta_mask))
   FUNC_0(VAR_25,
          "We got a masked interrupt (0x%08x)\n",
          VAR_28 & (~VAR_26->inta_mask));
 }

 VAR_28 &= VAR_26->inta_mask;






 if (FUNC_29(!VAR_28)) {
  FUNC_0(VAR_25, "Ignore interrupt, inta == 0\n");




  if (FUNC_28(VAR_22, &VAR_25->status))
   FUNC_4(VAR_25);
  FUNC_27(&VAR_26->irq_lock);
  FUNC_25(&VAR_25->sync_cmd_lockdep_map);
  return VAR_20;
 }

 if (FUNC_29(VAR_28 == 0xFFFFFFFF || (VAR_28 & 0xFFFFFFF0) == 0xa5a5a5a0)) {




  FUNC_3(VAR_25, "HARDWARE GONE?? INTA == 0x%08x\n", VAR_28);
  FUNC_27(&VAR_26->irq_lock);
  goto out;
 }
 FUNC_19(VAR_25, VAR_3, VAR_28 | ~VAR_26->inta_mask);

 if (FUNC_9(VAR_21))
  FUNC_0(VAR_25, "inta 0x%08x, enabled 0x%08x\n",
         VAR_28, FUNC_18(VAR_25, VAR_15));

 FUNC_27(&VAR_26->irq_lock);


 if (VAR_28 & VAR_8) {
  FUNC_1(VAR_25, "Hardware error detected.  Restarting.\n");


  FUNC_5(VAR_25);

  VAR_27->hw++;
  FUNC_13(VAR_25);

  VAR_29 |= VAR_8;

  goto out;
 }


 if (VAR_28 & VAR_11) {
  FUNC_0(VAR_25,
         "Scheduler finished to transmit the frame/frames.\n");
  VAR_27->sch++;
 }


 if (VAR_28 & VAR_4) {
  FUNC_0(VAR_25, "Alive interrupt\n");
  VAR_27->alive++;
  if (VAR_25->trans_cfg->gen2) {




   FUNC_15(VAR_25, VAR_26->rxq);
  }

  VAR_29 |= VAR_4;
 }


 VAR_28 &= ~(VAR_11 | VAR_4);


 if (VAR_28 & VAR_9) {
  FUNC_10(VAR_25);
  VAR_29 |= VAR_9;
 }


 if (VAR_28 & VAR_5) {
  FUNC_1(VAR_25, "Microcode CT kill error detected.\n");
  VAR_27->ctkill++;
  VAR_29 |= VAR_5;
 }


 if (VAR_28 & VAR_12) {
  FUNC_1(VAR_25, "Microcode SW error detected. "
   " Restarting 0x%X.\n", VAR_28);
  VAR_27->sw++;
  FUNC_13(VAR_25);
  VAR_29 |= VAR_12;
 }


 if (VAR_28 & VAR_14) {
  FUNC_0(VAR_25, "Wakeup interrupt\n");
  FUNC_16(VAR_25);
  FUNC_17(VAR_25);

  VAR_27->wakeup++;

  VAR_29 |= VAR_14;
 }




 if (VAR_28 & (VAR_6 | VAR_13 |
      VAR_10)) {
  FUNC_0(VAR_25, "Rx interrupt\n");
  if (VAR_28 & (VAR_6 | VAR_13)) {
   VAR_29 |= (VAR_6 | VAR_13);
   FUNC_19(VAR_25, VAR_1,
     VAR_0);
  }
  if (VAR_28 & VAR_10) {
   VAR_29 |= VAR_10;
   FUNC_19(VAR_25,
    VAR_3, VAR_10);
  }
  FUNC_20(VAR_25, VAR_18,
       VAR_16);
  if (VAR_28 & (VAR_6 | VAR_13))
   FUNC_20(VAR_25, VAR_18,
       VAR_17);

  VAR_27->rx++;

  FUNC_22();
  FUNC_14(VAR_25, 0);
  FUNC_23();
 }


 if (VAR_28 & VAR_7) {
  FUNC_19(VAR_25, VAR_1, VAR_2);
  FUNC_0(VAR_25, "uCode load interrupt\n");
  VAR_27->tx++;
  VAR_29 |= VAR_7;

  VAR_26->ucode_write_complete = 1;
  FUNC_30(&VAR_26->ucode_write_waitq);
 }

 if (VAR_28 & ~VAR_29) {
  FUNC_1(VAR_25, "Unhandled INTA bits 0x%08x\n", VAR_28 & ~VAR_29);
  VAR_27->unhandled++;
 }

 if (VAR_28 & ~(VAR_26->inta_mask)) {
  FUNC_3(VAR_25, "Disabled INTA bits 0x%08x were pending\n",
    VAR_28 & ~VAR_26->inta_mask);
 }

 FUNC_26(&VAR_26->irq_lock);

 if (FUNC_28(VAR_22, &VAR_25->status))
  FUNC_4(VAR_25);

 else if (VAR_29 & VAR_7)
  FUNC_6(VAR_25);

 else if (VAR_29 & VAR_9)
  FUNC_8(VAR_25);

 else if (VAR_29 & (VAR_4 | VAR_6))
  FUNC_7(VAR_25);
 FUNC_27(&VAR_26->irq_lock);

out:
 FUNC_25(&VAR_25->sync_cmd_lockdep_map);
 return VAR_19;
}
