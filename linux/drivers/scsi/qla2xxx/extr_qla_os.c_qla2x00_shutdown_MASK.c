
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ fw_started; scalar_t__ fce_enabled; } ;
struct qla_hw_data {TYPE_3__* isp_ops; scalar_t__ interrupts_on; TYPE_1__ flags; scalar_t__ eft; int board_disable; } ;
struct pci_dev {int enable_cnt; } ;
struct TYPE_15__ {scalar_t__ init_done; scalar_t__ online; } ;
struct TYPE_17__ {TYPE_2__ flags; scalar_t__ timer_active; int pci_flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_16__ {int (* disable_intrs ) (struct qla_hw_data*) ;} ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 TYPE_4__* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,TYPE_4__*,int,char*) ;
 int VAR_1 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int *,int *) ;
 int FUNC_13 (struct qla_hw_data*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct qla_hw_data*) ;

__attribute__((used)) static void
FUNC_20(struct pci_dev *VAR_2)
{
 scsi_qla_host_t *VAR_3;
 struct qla_hw_data *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 VAR_4 = VAR_3->hw;

 FUNC_9(VAR_1, VAR_3, 0xfffa,
  "Adapter shutdown\n");





 FUNC_18(VAR_0, &VAR_3->pci_flags);
 FUNC_6(&VAR_4->board_disable);

 if (!FUNC_5(&VAR_2->enable_cnt))
  return;


 if (FUNC_4(VAR_4))
  FUNC_17(VAR_3, 20);


 if (VAR_4->flags.fce_enabled) {
  FUNC_12(VAR_3, ((void*)0), ((void*)0));
  VAR_4->flags.fce_enabled = 0;
 }


 if (VAR_4->eft)
  FUNC_11(VAR_3);

 if (FUNC_1(VAR_4) || FUNC_0(VAR_4) || FUNC_2(VAR_4) ||
     FUNC_3(VAR_4)) {
  if (VAR_4->flags.fw_started)
   FUNC_10(VAR_3);
 } else {

  FUNC_16(VAR_3);
 }


 if (VAR_3->timer_active)
  FUNC_15(VAR_3);


 VAR_3->flags.online = 0;


 if (VAR_4->interrupts_on) {
  VAR_3->flags.init_done = 0;
  VAR_4->isp_ops->disable_intrs(VAR_4);
 }

 FUNC_14(VAR_3);

 FUNC_13(VAR_4);

 FUNC_7(VAR_2);
 FUNC_9(VAR_1, VAR_3, 0xfffe,
  "Adapter shutdown successfully.\n");
}
