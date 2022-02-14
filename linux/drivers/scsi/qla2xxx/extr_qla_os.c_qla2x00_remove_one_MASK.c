
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ fw_started; } ;
struct qla_hw_data {int bars; TYPE_22__* pdev; scalar_t__ exchoffld_buf; scalar_t__ exlogin_buf; TYPE_1__ flags; int board_disable; } ;
struct pci_dev {int enable_cnt; } ;
struct TYPE_28__ {scalar_t__ online; } ;
struct TYPE_27__ {int l; } ;
struct TYPE_26__ {int * l; int ldma; int size; } ;
struct TYPE_29__ {int host; TYPE_4__ flags; scalar_t__ timer_active; TYPE_3__ scan; TYPE_2__ gnl; int dpc_flags; int pci_flags; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_25__ {int dev; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct qla_hw_data*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 TYPE_5__* FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (TYPE_22__*,int ) ;
 int FUNC_15 (struct pci_dev*,int *) ;
 int FUNC_16 (int ,TYPE_5__*,int,char*) ;
 int VAR_3 ;
 int FUNC_17 (int ,TYPE_5__*,int,char*) ;
 int VAR_4 ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (struct qla_hw_data*) ;
 int FUNC_20 (struct qla_hw_data*,TYPE_5__*) ;
 int FUNC_21 (struct qla_hw_data*) ;
 int FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (struct qla_hw_data*) ;
 int FUNC_25 (struct qla_hw_data*) ;
 int FUNC_26 (TYPE_5__*,int) ;
 int FUNC_27 (TYPE_5__*) ;
 int FUNC_28 (TYPE_5__*) ;
 int FUNC_29 (struct qla_hw_data*) ;
 int FUNC_30 (TYPE_5__*) ;
 int FUNC_31 (TYPE_5__*) ;
 scalar_t__ FUNC_32 (TYPE_5__*) ;
 int FUNC_33 (TYPE_5__*) ;
 int FUNC_34 (TYPE_5__*) ;
 int FUNC_35 (TYPE_5__*,int) ;
 int FUNC_36 (struct qla_hw_data*,TYPE_5__*) ;
 int FUNC_37 (struct qla_hw_data*) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ,int *) ;
 scalar_t__ FUNC_41 (int ,int *) ;
 int FUNC_42 (int ) ;

__attribute__((used)) static void
FUNC_43(struct pci_dev *VAR_5)
{
 scsi_qla_host_t *VAR_6;
 struct qla_hw_data *VAR_7;

 VAR_6 = FUNC_13(VAR_5);
 VAR_7 = VAR_6->hw;
 FUNC_17(VAR_4, VAR_6, 0xb079,
     "Removing driver\n");



 FUNC_40(VAR_0, &VAR_6->pci_flags);
 FUNC_7(&VAR_7->board_disable);






 if (!FUNC_6(&VAR_5->enable_cnt)) {
  FUNC_8(&VAR_7->pdev->dev, VAR_6->gnl.size,
      VAR_6->gnl.l, VAR_6->gnl.ldma);
  VAR_6->gnl.l = ((void*)0);
  FUNC_38(VAR_6->host);
  FUNC_10(VAR_7);
  FUNC_15(VAR_5, ((void*)0));
  return;
 }
 FUNC_30(VAR_6);

 if (FUNC_1(VAR_7) || FUNC_0(VAR_7) || FUNC_2(VAR_7) ||
     FUNC_3(VAR_7)) {
  if (VAR_7->flags.fw_started)
   FUNC_18(VAR_6);
 } else if (!FUNC_5(VAR_7)) {
  if (FUNC_4(VAR_7)) {
   FUNC_16(VAR_3, VAR_6, 0xb07e,
       "Clearing fcoe driver presence.\n");
   if (FUNC_32(VAR_6) != VAR_1)
    FUNC_16(VAR_3, VAR_6, 0xb079,
        "Error while clearing DRV-Presence.\n");
  }

  FUNC_28(VAR_6);
 }

 FUNC_31(VAR_6);





 if (FUNC_41(VAR_2, &VAR_6->dpc_flags))
  return;

 FUNC_40(VAR_2, &VAR_6->dpc_flags);

 FUNC_34(VAR_6);

 FUNC_8(&VAR_7->pdev->dev,
  VAR_6->gnl.size, VAR_6->gnl.l, VAR_6->gnl.ldma);

 VAR_6->gnl.l = ((void*)0);

 FUNC_42(VAR_6->scan.l);

 if (FUNC_5(VAR_7))
  FUNC_35(VAR_6, 20);

 FUNC_20(VAR_7, VAR_6);

 FUNC_22(VAR_6);

 FUNC_33(VAR_6);


 if (VAR_6->timer_active)
  FUNC_27(VAR_6);

 VAR_6->flags.online = 0;


 if (VAR_7->exlogin_buf)
  FUNC_25(VAR_7);


 if (VAR_7->exchoffld_buf)
  FUNC_24(VAR_7);

 FUNC_21(VAR_7);

 FUNC_36(VAR_7, VAR_6);

 FUNC_26(VAR_6, 1);

 FUNC_9(VAR_6->host);
 FUNC_37(VAR_7);

 FUNC_39(VAR_6->host);

 FUNC_23(VAR_6);

 FUNC_19(VAR_7);

 FUNC_38(VAR_6->host);

 FUNC_29(VAR_7);

 FUNC_14(VAR_7->pdev, VAR_7->bars);
 FUNC_10(VAR_7);

 FUNC_12(VAR_5);

 FUNC_11(VAR_5);
}
