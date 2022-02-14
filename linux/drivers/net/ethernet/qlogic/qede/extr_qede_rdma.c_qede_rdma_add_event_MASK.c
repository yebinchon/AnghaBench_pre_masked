
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_rdma_event_work {int event; int work; struct qede_dev* ptr; } ;
struct TYPE_2__ {int rdma_wq; int qedr_dev; scalar_t__ exp_recovery; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;
typedef enum qede_rdma_event { ____Placeholder_qede_rdma_event } qede_rdma_event ;


 int FUNC_0 (int *,int ) ;
 struct qede_rdma_event_work* FUNC_1 (struct qede_dev*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct qede_dev *VAR_1,
    enum qede_rdma_event VAR_2)
{
 struct qede_rdma_event_work *VAR_3;


 if (VAR_1->rdma_info.exp_recovery)
  return;

 if (!VAR_1->rdma_info.qedr_dev)
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return;

 VAR_3->event = VAR_2;
 VAR_3->ptr = VAR_1;

 FUNC_0(&VAR_3->work, VAR_0);
 FUNC_2(VAR_1->rdma_info.rdma_wq, &VAR_3->work);
}
