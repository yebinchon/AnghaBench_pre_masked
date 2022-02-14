
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdma_wq; int rdma_event_list; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct qede_dev *VAR_1)
{
 FUNC_1(&VAR_1->rdma_info.rdma_event_list);
 VAR_1->rdma_info.rdma_wq = FUNC_2("rdma_wq");
 if (!VAR_1->rdma_info.rdma_wq) {
  FUNC_0(VAR_1, "qedr: Could not create workqueue\n");
  return -VAR_0;
 }

 return 0;
}
