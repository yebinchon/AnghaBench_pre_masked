
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_hwfns; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct qede_dev {scalar_t__ ptp_skip_txts; int cdev; TYPE_4__* ops; TYPE_2__ dev_info; int ndev; int state; int flags; } ;
struct qed_link_params {int link_up; } ;
typedef int link_params ;
typedef enum qede_unload_mode { ____Placeholder_qede_unload_mode } qede_unload_mode ;
struct TYPE_8__ {TYPE_3__* common; int (* fastpath_stop ) (int ) ;} ;
struct TYPE_7__ {int (* set_fp_int ) (int ,int ) ;int (* set_link ) (int ,struct qed_link_params*) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int FUNC_2 (struct qede_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct qede_dev*) ;
 int FUNC_4 (struct qede_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct qed_link_params*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
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
 int FUNC_19 (int ,struct qed_link_params*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static void FUNC_22(struct qede_dev *VAR_3, enum qede_unload_mode VAR_4,
   bool VAR_5)
{
 struct qed_link_params VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, "Starting qede unload\n");

 if (!VAR_5)
  FUNC_3(VAR_3);

 FUNC_5(VAR_0, &VAR_3->flags);

 if (VAR_4 != VAR_2)
  VAR_3->state = VAR_1;

 FUNC_15(VAR_3);


 FUNC_8(VAR_3->ndev);
 FUNC_7(VAR_3->ndev);

 if (VAR_4 != VAR_2) {

  FUNC_6(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.link_up = 0;
  VAR_3->ops->common->set_link(VAR_3->cdev, &VAR_6);

  VAR_7 = FUNC_16(VAR_3);
  if (VAR_7) {
   FUNC_17(VAR_3);
   goto out;
  }

  FUNC_0(VAR_3, "Stopped Queues\n");
 }

 FUNC_18(VAR_3);
 VAR_3->ops->fastpath_stop(VAR_3->cdev);

 if (!FUNC_2(VAR_3) && VAR_3->dev_info.common.num_hwfns == 1) {
  FUNC_14(VAR_3);
  FUNC_10(VAR_3);
 }


 FUNC_17(VAR_3);
 VAR_3->ops->common->set_fp_int(VAR_3->cdev, 0);

 FUNC_13(VAR_3);

 if (VAR_4 == VAR_2)
  FUNC_9(VAR_3);

 FUNC_12(VAR_3);
 FUNC_11(VAR_3);

out:
 if (!VAR_5)
  FUNC_4(VAR_3);

 if (VAR_4 != VAR_2)
  FUNC_1(VAR_3, "Link is down\n");

 VAR_3->ptp_skip_txts = 0;

 FUNC_0(VAR_3, "Ending qede unload\n");
}
