
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int phy_retry; scalar_t__ phy_retry_expires; } ;
struct bnxt {int flags; scalar_t__ current_interval; int timer; int state; TYPE_2__* dev; TYPE_1__ link_info; int link_lock; } ;
struct TYPE_7__ {int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnxt*,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*) ;
 int FUNC_9 (struct bnxt*) ;
 int FUNC_10 (struct bnxt*,int) ;
 int FUNC_11 (struct bnxt*) ;
 int FUNC_12 (struct bnxt*) ;
 int FUNC_13 (struct bnxt*) ;
 int FUNC_14 (struct bnxt*) ;
 int FUNC_15 (struct bnxt*,int) ;
 int FUNC_16 (struct bnxt*) ;
 int FUNC_17 (struct bnxt*) ;
 int FUNC_18 (struct bnxt*,int) ;
 int FUNC_19 (struct bnxt*) ;
 int FUNC_20 (struct bnxt*) ;
 int FUNC_21 (struct bnxt*) ;
 scalar_t__ VAR_5 ;
 int FUNC_22 (int *,scalar_t__) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_2__*,char*,...) ;
 int FUNC_26 (TYPE_2__*,char*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_30(struct bnxt *VAR_6, bool VAR_7, bool VAR_8)
{
 int VAR_9 = 0;

 FUNC_16(VAR_6);
 FUNC_27(VAR_6->dev);
 if (VAR_7) {

  VAR_9 = FUNC_13(VAR_6);
  if (VAR_9) {
   FUNC_25(VAR_6->dev, "Failed to reserve default rings at open\n");
   return VAR_9;
  }
 }
 VAR_9 = FUNC_18(VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;
 if ((VAR_6->flags & VAR_0) &&
     !(VAR_6->flags & VAR_1)) {

  VAR_6->dev->hw_features &= ~VAR_4;
  VAR_6->flags &= ~VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_7);
 if (VAR_9) {
  FUNC_25(VAR_6->dev, "bnxt_alloc_mem err: %x\n", VAR_9);
  goto open_err_free_mem;
 }

 if (VAR_7) {
  FUNC_14(VAR_6);
  VAR_9 = FUNC_17(VAR_6);
  if (VAR_9) {
   FUNC_25(VAR_6->dev, "bnxt_request_irq err: %x\n", VAR_9);
   goto open_err_irq;
  }
 }

 FUNC_8(VAR_6);
 FUNC_4(VAR_6);

 VAR_9 = FUNC_15(VAR_6, VAR_7);
 if (VAR_9) {
  FUNC_25(VAR_6->dev, "bnxt_init_nic err: %x\n", VAR_9);
  goto open_err;
 }

 if (VAR_8) {
  FUNC_23(&VAR_6->link_lock);
  VAR_9 = FUNC_20(VAR_6);
  FUNC_24(&VAR_6->link_lock);
  if (VAR_9) {
   FUNC_26(VAR_6->dev, "failed to update phy settings\n");
   if (FUNC_1(VAR_6)) {
    VAR_6->link_info.phy_retry = 1;
    VAR_6->link_info.phy_retry_expires =
     VAR_5 + 5 * VAR_3;
   }
  }
 }

 if (VAR_7)
  FUNC_29(VAR_6->dev);

 FUNC_28(VAR_2, &VAR_6->state);
 FUNC_7(VAR_6);

 FUNC_19(VAR_6);
 FUNC_22(&VAR_6->timer, VAR_5 + VAR_6->current_interval);

 FUNC_12(VAR_6);


 if (FUNC_0(VAR_6))
  FUNC_21(VAR_6);
 return 0;

open_err:
 FUNC_3(VAR_6);
 FUNC_6(VAR_6);

open_err_irq:
 FUNC_5(VAR_6);

open_err_free_mem:
 FUNC_11(VAR_6);
 FUNC_9(VAR_6);
 FUNC_10(VAR_6, 1);
 return VAR_9;
}
