
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp_recovery; int entry; int * qedr_dev; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;


 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qede_dev*) ;
 int FUNC_5 (struct qede_dev*) ;
 int VAR_0 ;

void FUNC_6(struct qede_dev *VAR_1, bool VAR_2)
{
 if (!FUNC_5(VAR_1))
  return;


 if (!VAR_2) {
  FUNC_4(VAR_1);
  FUNC_2(&VAR_0);
  if (!VAR_1->rdma_info.exp_recovery)
   FUNC_0(VAR_1);
  VAR_1->rdma_info.qedr_dev = ((void*)0);
  FUNC_1(&VAR_1->rdma_info.entry);
  FUNC_3(&VAR_0);
 } else {
  if (!VAR_1->rdma_info.exp_recovery) {
   FUNC_2(&VAR_0);
   FUNC_0(VAR_1);
   FUNC_3(&VAR_0);
  }
  VAR_1->rdma_info.exp_recovery = 1;
 }
}
