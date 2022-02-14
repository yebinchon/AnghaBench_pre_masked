
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exp_recovery; int qedr_dev; } ;
struct qede_dev {int ndev; int pdev; int cdev; TYPE_1__ rdma_info; } ;
struct TYPE_4__ {int (* add ) (int ,int ,int ) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct qede_dev *VAR_1)
{
 if (!VAR_0)
  return;


 VAR_1->rdma_info.exp_recovery = 0;
 VAR_1->rdma_info.qedr_dev = VAR_0->add(VAR_1->cdev, VAR_1->pdev,
       VAR_1->ndev);
}
