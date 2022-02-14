
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ diagass_support; } ;
struct TYPE_11__ {scalar_t__ supported_funcs; } ;
struct TYPE_10__ {scalar_t__ supported_funcs; } ;
struct TYPE_9__ {scalar_t__ supported_funcs; } ;
struct TYPE_8__ {scalar_t__ supported_funcs; } ;
struct TYPE_12__ {TYPE_4__ sbp; TYPE_3__ adp; TYPE_2__ ipa6; TYPE_1__ ipa4; } ;
struct qeth_card {TYPE_7__* gdev; TYPE_6__ info; TYPE_5__ options; scalar_t__ read_or_write_problem; int force_alloc_skb; } ;
struct TYPE_14__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*,int,char*) ;
 int FUNC_6 (struct qeth_card*,int,char*,int) ;
 int FUNC_7 (int,char*,int ,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct qeth_card*,int ) ;
 int FUNC_14 (struct qeth_card*) ;
 int FUNC_15 (struct qeth_card*) ;
 int FUNC_16 (struct qeth_card*) ;
 int FUNC_17 (struct qeth_card*) ;
 int FUNC_18 (struct qeth_card*) ;
 scalar_t__ FUNC_19 (struct qeth_card*,int ) ;
 int FUNC_20 (struct qeth_card*) ;
 int FUNC_21 (struct qeth_card*,int) ;
 int FUNC_22 (struct qeth_card*,int ) ;
 int FUNC_23 (struct qeth_card*) ;
 int FUNC_24 (struct qeth_card*) ;
 int FUNC_25 (struct qeth_card*) ;
 int FUNC_26 (struct qeth_card*) ;

int FUNC_27(struct qeth_card *VAR_9, bool *VAR_10)
{
 int VAR_11 = 3;
 int VAR_12;

 FUNC_5(VAR_9, 2, "hrdsetup");
 FUNC_8(&VAR_9->force_alloc_skb, 0);
 VAR_12 = FUNC_26(VAR_9);
 if (VAR_12)
  return VAR_12;
retry:
 if (VAR_11 < 3)
  FUNC_7(2, "Retrying to do IDX activates on device %x.\n",
     FUNC_1(VAR_9));
 VAR_12 = FUNC_21(VAR_9, !FUNC_4(VAR_9));
 FUNC_9(FUNC_0(VAR_9));
 FUNC_9(FUNC_3(VAR_9));
 FUNC_9(FUNC_2(VAR_9));
 FUNC_12(FUNC_0(VAR_9));
 VAR_12 = FUNC_10(FUNC_2(VAR_9));
 if (VAR_12)
  goto retriable;
 VAR_12 = FUNC_10(FUNC_3(VAR_9));
 if (VAR_12)
  goto retriable;
 VAR_12 = FUNC_10(FUNC_0(VAR_9));
 if (VAR_12)
  goto retriable;
retriable:
 if (VAR_12 == -VAR_3) {
  FUNC_5(VAR_9, 2, "break1");
  return VAR_12;
 } else if (VAR_12) {
  FUNC_6(VAR_9, 2, "1err%d", VAR_12);
  if (--VAR_11 < 0)
   goto out;
  else
   goto retry;
 }
 FUNC_14(VAR_9);
 FUNC_18(VAR_9);
 FUNC_17(VAR_9);

 VAR_12 = FUNC_15(VAR_9);
 if (VAR_12 == -VAR_0) {
  FUNC_5(VAR_9, 2, "break2");
  return VAR_12;
 } else if (VAR_12) {
  FUNC_6(VAR_9, 2, "3err%d", VAR_12);
  if (--VAR_11 < 0)
   goto out;
  else
   goto retry;
 }

 VAR_12 = FUNC_16(VAR_9);
 if (VAR_12 == -VAR_0) {
  FUNC_5(VAR_9, 2, "break3");
  return VAR_12;
 } else if (VAR_12) {
  FUNC_6(VAR_9, 2, "4err%d", VAR_12);
  if (--VAR_11 < 0)
   goto out;
  else
   goto retry;
 }
 VAR_9->read_or_write_problem = 0;
 VAR_12 = FUNC_20(VAR_9);
 if (VAR_12) {
  FUNC_6(VAR_9, 2, "5err%d", VAR_12);
  goto out;
 }

 VAR_12 = FUNC_25(VAR_9);
 if (VAR_12) {
  FUNC_6(VAR_9, 2, "6err%d", VAR_12);
  if (VAR_12 == -VAR_1) {
   FUNC_11(&VAR_9->gdev->dev, "The LAN is offline\n");
   *VAR_10 = 0;
  } else {
   goto out;
  }
 } else {
  *VAR_10 = 1;
 }

 VAR_9->options.ipa4.supported_funcs = 0;
 VAR_9->options.ipa6.supported_funcs = 0;
 VAR_9->options.adp.supported_funcs = 0;
 VAR_9->options.sbp.supported_funcs = 0;
 VAR_9->info.diagass_support = 0;
 VAR_12 = FUNC_22(VAR_9, VAR_7);
 if (VAR_12 == -VAR_2)
  goto out;
 if (FUNC_19(VAR_9, VAR_4)) {
  VAR_12 = FUNC_22(VAR_9, VAR_8);
  if (VAR_12 == -VAR_2)
   goto out;
 }
 if (FUNC_19(VAR_9, VAR_5)) {
  VAR_12 = FUNC_23(VAR_9);
  if (VAR_12 < 0) {
   FUNC_6(VAR_9, 2, "7err%d", VAR_12);
   goto out;
  }
 }
 if (FUNC_13(VAR_9, VAR_6)) {
  VAR_12 = FUNC_24(VAR_9);
  if (VAR_12 < 0) {
   FUNC_6(VAR_9, 2, "8err%d", VAR_12);
   goto out;
  }
 }
 return 0;
out:
 FUNC_11(&VAR_9->gdev->dev, "The qeth device driver failed to recover "
  "an error on the device\n");
 FUNC_7(2, "Initialization for device %x failed in hardsetup! rc=%d\n",
    FUNC_1(VAR_9), VAR_12);
 return VAR_12;
}
