
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct timer_list {int dummy; } ;
struct cas {scalar_t__ link_transition_jiffies; int cas_flags; int lock; int link_timer; int reset_task; int reset_task_pending; int reset_task_pending_all; int dev; scalar_t__ regs; int phy_type; int * rx_last; int reset_task_pending_mtu; int reset_task_pending_spare; int hw_running; scalar_t__ link_transition_jiffies_valid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct cas*) ;
 int FUNC_7 (struct cas*) ;
 int FUNC_8 (struct cas*) ;
 int FUNC_9 (struct cas*,int) ;
 int FUNC_10 (struct cas*,int ) ;
 int FUNC_11 (struct cas*) ;
 int FUNC_12 (struct cas*,int ) ;
 scalar_t__ FUNC_13 (struct cas*,int,int ) ;
 int FUNC_14 (struct cas*) ;
 struct cas* VAR_15 ;
 struct cas* FUNC_15 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (struct cas*,int ,int ,int ,char*,int,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_23(struct timer_list *VAR_20)
{
 struct cas *VAR_21 = FUNC_15(VAR_21, VAR_20, VAR_17);
 int VAR_22, VAR_23 = 0, VAR_24 = 0;
 unsigned long VAR_25;

 if (VAR_18 != 0 &&
     VAR_21->link_transition_jiffies_valid &&
     ((VAR_16 - VAR_21->link_transition_jiffies) >
       (VAR_18))) {




  VAR_21->link_transition_jiffies_valid = 0;
 }

 if (!VAR_21->hw_running)
  return;

 FUNC_21(&VAR_21->lock, VAR_25);
 FUNC_8(VAR_21);
 FUNC_6(VAR_21);





 if (FUNC_4(&VAR_21->reset_task_pending_all) ||
     FUNC_4(&VAR_21->reset_task_pending_spare) ||
     FUNC_4(&VAR_21->reset_task_pending_mtu))
  goto done;






 if ((VAR_22 = (VAR_21->cas_flags & VAR_0))) {
  int VAR_26, VAR_27;

  for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++) {
   VAR_27 = FUNC_0(VAR_26);
   if ((VAR_22 & VAR_27) == 0)
    continue;


   if (FUNC_13(VAR_21, VAR_26, VAR_21->rx_last[VAR_26]) < 0) {
    VAR_23 = 1;
    continue;
   }
   VAR_21->cas_flags &= ~VAR_27;
  }
 }

 if (FUNC_1(VAR_21->phy_type)) {
  u16 VAR_28;
  FUNC_9(VAR_21, 0);
  VAR_28 = FUNC_12(VAR_21, VAR_8);





  VAR_28 = FUNC_12(VAR_21, VAR_8);
  FUNC_9(VAR_21, 1);
  FUNC_19(VAR_21->regs + VAR_11);
  VAR_24 = FUNC_10(VAR_21, VAR_28);
 } else {
  VAR_24 = FUNC_11(VAR_21);
 }

 if (VAR_24)
  goto done;


 if ((FUNC_19(VAR_21->regs + VAR_10) & VAR_6) == 0) {
  u32 VAR_29 = FUNC_19(VAR_21->regs + VAR_9);
  u32 VAR_30, VAR_31;
  int VAR_32 = FUNC_2(VAR_5, VAR_29);

  if (((VAR_32 == 0x5) || (VAR_32 == 0x3)) &&
      (FUNC_2(VAR_4, VAR_29) == 0)) {
   FUNC_17(VAR_21, VAR_19, VAR_3, VAR_21->dev,
         "tx err: MAC_STATE[%08x]\n", VAR_29);
   VAR_24 = 1;
   goto done;
  }

  VAR_29 = FUNC_19(VAR_21->regs + VAR_12);
  VAR_30 = FUNC_19(VAR_21->regs + VAR_14);
  VAR_31 = FUNC_19(VAR_21->regs + VAR_13);
  if ((VAR_29 == 0) && (VAR_30 != VAR_31)) {
   FUNC_17(VAR_21, VAR_19, VAR_3, VAR_21->dev,
         "tx err: TX_FIFO[%08x:%08x:%08x]\n",
         VAR_29, VAR_30, VAR_31);
   VAR_24 = 1;
  }

  if (VAR_24)
   FUNC_7(VAR_21);
 }

done:
 if (VAR_24) {

  FUNC_3(&VAR_21->reset_task_pending);
  FUNC_3(&VAR_21->reset_task_pending_all);
  FUNC_20(&VAR_21->reset_task);





 }

 if (!VAR_23)
  FUNC_16(&VAR_21->link_timer, VAR_16 + VAR_1);
 FUNC_14(VAR_21);
 FUNC_22(&VAR_21->lock, VAR_25);
}
