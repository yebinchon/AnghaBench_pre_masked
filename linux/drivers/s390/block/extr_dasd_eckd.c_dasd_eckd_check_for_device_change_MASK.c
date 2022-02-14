
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int scsw; } ;
struct dasd_eckd_private {char suc_reason; scalar_t__ lcu; } ;
struct dasd_device {scalar_t__ state; int features; TYPE_1__* cdev; int flags; scalar_t__ block; int suc_work; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dasd_device*,char*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 char* FUNC_5 (struct irb*) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 char FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct dasd_device *VAR_15,
           struct dasd_ccw_req *VAR_16,
           struct irb *VAR_17)
{
 char VAR_18;
 char *VAR_19 = ((void*)0);
 struct dasd_eckd_private *VAR_20 = VAR_15->private;


 VAR_18 = VAR_11 | VAR_12 | VAR_14;
 if ((FUNC_10(&VAR_17->scsw) & VAR_18) == VAR_18) {




  if (!VAR_15->block && VAR_20->lcu &&
      VAR_15->state == VAR_8 &&
      !FUNC_13(VAR_3, &VAR_15->flags) &&
      !FUNC_13(VAR_5, &VAR_15->flags)) {

   FUNC_7(VAR_15);
  }
  FUNC_3(VAR_15);
  return;
 }

 VAR_19 = FUNC_5(VAR_17);
 if (!VAR_19)
  return;


 if ((VAR_19[27] & VAR_6) && (VAR_19[7] == 0x0D) &&
     (FUNC_10(&VAR_17->scsw) & VAR_13)) {
  if (FUNC_12(VAR_4, &VAR_15->flags)) {
   FUNC_0(VAR_10, VAR_15, "%s",
          "eckd suc: device already notified");
   return;
  }
  VAR_19 = FUNC_5(VAR_17);
  if (!VAR_19) {
   FUNC_0(VAR_10, VAR_15, "%s",
          "eckd suc: no reason code available");
   FUNC_1(VAR_4, &VAR_15->flags);
   return;

  }
  VAR_20->suc_reason = VAR_19[8];
  FUNC_0(VAR_9, VAR_15, "%s %x",
         "eckd handle summary unit check: reason",
         VAR_20->suc_reason);
  FUNC_4(VAR_15);
  if (!FUNC_9(&VAR_15->suc_work))
   FUNC_6(VAR_15);

  return;
 }


 if (!VAR_16 && !(VAR_19[27] & VAR_6) &&
     ((VAR_19[6] & VAR_7) == VAR_7)) {
  FUNC_2(VAR_15, VAR_19);
  return;
 }




 if (VAR_15->block && (VAR_19[27] & VAR_6) &&
     (VAR_19[7] == 0x3F) &&
     (FUNC_10(&VAR_17->scsw) & VAR_13) &&
     FUNC_13(VAR_1, &VAR_15->flags)) {
  if (VAR_15->features & VAR_0)
   FUNC_11(VAR_2, &VAR_15->flags);
  FUNC_1(VAR_1, &VAR_15->flags);
  FUNC_8(&VAR_15->cdev->dev,
   "The device reservation was lost\n");
 }
}
