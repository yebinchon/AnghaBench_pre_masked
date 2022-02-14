
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qedr_dev; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;
struct TYPE_4__ {int (* remove ) (scalar_t__) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qede_dev *VAR_1)
{
 if (VAR_0 && VAR_0->remove && VAR_1->rdma_info.qedr_dev)
  VAR_0->remove(VAR_1->rdma_info.qedr_dev);
}
