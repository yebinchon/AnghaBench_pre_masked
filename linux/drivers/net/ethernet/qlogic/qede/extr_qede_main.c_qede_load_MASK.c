
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_link_params {int link_up; } ;
struct TYPE_8__ {struct qed_link_params msix_cnt; } ;
struct TYPE_6__ {int num_hwfns; } ;
struct TYPE_7__ {scalar_t__ num_tc; TYPE_1__ common; } ;
struct qede_dev {scalar_t__ fp_num_rx; scalar_t__ fp_num_tx; scalar_t__ num_queues; int cdev; TYPE_5__* ops; TYPE_3__ int_info; int state; int flags; int ndev; TYPE_2__ dev_info; } ;
struct qed_int_info {int dummy; } ;
typedef int link_params ;
typedef enum qede_load_mode { ____Placeholder_qede_load_mode } qede_load_mode ;
struct TYPE_10__ {TYPE_4__* common; } ;
struct TYPE_9__ {int (* set_fp_int ) (int ,int ) ;int (* set_link ) (int ,struct qed_link_params*) ;} ;


 int FUNC_0 (struct qede_dev*,char*,...) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int FUNC_2 (struct qede_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct qede_dev*) ;
 int VAR_2 ;
 int FUNC_4 (struct qede_dev*) ;
 int FUNC_5 (struct qede_dev*) ;
 int FUNC_6 (struct qede_dev*) ;
 int FUNC_7 (struct qed_link_params*,int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct qede_dev*) ;
 int FUNC_10 (struct qede_dev*) ;
 int FUNC_11 (struct qede_dev*) ;
 int FUNC_12 (struct qede_dev*) ;
 int FUNC_13 (struct qede_dev*) ;
 int FUNC_14 (struct qede_dev*) ;
 int FUNC_15 (struct qede_dev*) ;
 int FUNC_16 (struct qede_dev*) ;
 int FUNC_17 (struct qede_dev*) ;
 int FUNC_18 (struct qede_dev*) ;
 int FUNC_19 (struct qede_dev*) ;
 int FUNC_20 (struct qede_dev*) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (struct qede_dev*,int) ;
 int FUNC_23 (struct qede_dev*) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int ,struct qed_link_params*) ;
 int FUNC_26 (int ,int ) ;

__attribute__((used)) static int FUNC_27(struct qede_dev *VAR_3, enum qede_load_mode VAR_4,
       bool VAR_5)
{
 struct qed_link_params VAR_6;
 u8 VAR_7;
 int VAR_8;

 FUNC_0(VAR_3, "Starting qede load\n");

 if (!VAR_5)
  FUNC_5(VAR_3);

 VAR_8 = FUNC_18(VAR_3);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_10(VAR_3);
 if (VAR_8)
  goto out;

 FUNC_15(VAR_3);

 VAR_8 = FUNC_11(VAR_3);
 if (VAR_8)
  goto err1;
 FUNC_0(VAR_3, "Allocated %d Rx, %d Tx queues\n",
  FUNC_3(VAR_3), FUNC_4(VAR_3));

 VAR_8 = FUNC_19(VAR_3);
 if (VAR_8)
  goto err2;

 if (!FUNC_2(VAR_3) && VAR_3->dev_info.common.num_hwfns == 1) {
  VAR_8 = FUNC_9(VAR_3);
  if (VAR_8)
   FUNC_1(VAR_3, "aRFS memory allocation failed\n");
 }

 FUNC_16(VAR_3);
 FUNC_0(VAR_3, "Napi added and enabled\n");

 VAR_8 = FUNC_20(VAR_3);
 if (VAR_8)
  goto err3;
 FUNC_0(VAR_3, "Setup IRQs succeeded\n");

 VAR_8 = FUNC_22(VAR_3, VAR_4 != VAR_1);
 if (VAR_8)
  goto err4;
 FUNC_0(VAR_3, "Start VPORT, RXQ and TXQ succeeded\n");

 VAR_7 = FUNC_8(VAR_3->ndev);
 VAR_7 = VAR_7 ? VAR_7 : VAR_3->dev_info.num_tc;
 FUNC_21(VAR_3->ndev, VAR_7);


 FUNC_12(VAR_3);

 FUNC_24(VAR_0, &VAR_3->flags);


 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.link_up = 1;
 VAR_3->ops->common->set_link(VAR_3->cdev, &VAR_6);

 VAR_3->state = VAR_2;

 FUNC_0(VAR_3, "Ending successfully qede load\n");

 goto out;
err4:
 FUNC_23(VAR_3);
 FUNC_7(&VAR_3->int_info.msix_cnt, 0, sizeof(struct qed_int_info));
err3:
 FUNC_17(VAR_3);
err2:
 FUNC_14(VAR_3);
err1:
 VAR_3->ops->common->set_fp_int(VAR_3->cdev, 0);
 FUNC_13(VAR_3);
 VAR_3->num_queues = 0;
 VAR_3->fp_num_tx = 0;
 VAR_3->fp_num_rx = 0;
out:
 if (!VAR_5)
  FUNC_6(VAR_3);

 return VAR_8;
}
