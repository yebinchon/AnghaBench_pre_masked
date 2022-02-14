
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
struct core_rx_slow_path_cqe {scalar_t__ ramrod_cmd_id; TYPE_2__ opaque_data; } ;
union core_rx_cqe_union {struct core_rx_slow_path_cqe rx_cqe_sp; } ;
struct qed_ll2_rx_queue {int lock; } ;
struct TYPE_3__ {int cookie; int (* slowpath_cb ) (int ,int ,int ,int ) ;} ;
struct qed_ll2_info {int my_id; TYPE_1__ cbs; struct qed_ll2_rx_queue rx_queue; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_2,
   struct qed_ll2_info *VAR_3,
   union core_rx_cqe_union *VAR_4,
   unsigned long *VAR_5)
{
 struct qed_ll2_rx_queue *VAR_6 = &VAR_3->rx_queue;
 struct core_rx_slow_path_cqe *VAR_7;

 VAR_7 = &VAR_4->rx_cqe_sp;
 if (VAR_7->ramrod_cmd_id != VAR_0) {
  FUNC_0(VAR_2,
     "LL2 - unexpected Rx CQE slowpath ramrod_cmd_id:%d\n",
     VAR_7->ramrod_cmd_id);
  return -VAR_1;
 }

 if (!VAR_3->cbs.slowpath_cb) {
  FUNC_0(VAR_2,
     "LL2 - received RX_QUEUE_FLUSH but no callback was provided\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_6->lock, *VAR_5);

 VAR_3->cbs.slowpath_cb(VAR_3->cbs.cookie,
        VAR_3->my_id,
        FUNC_1(VAR_7->opaque_data.data[0]),
        FUNC_1(VAR_7->opaque_data.data[1]));

 FUNC_2(&VAR_6->lock, *VAR_5);

 return 0;
}
