
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qedr_dev; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;
struct TYPE_4__ {int (* notify ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qede_dev*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct qede_dev *VAR_3)
{
 if (!FUNC_2(VAR_3))
  return;

 FUNC_0(&VAR_1);
 if (VAR_2 && VAR_3->rdma_info.qedr_dev && VAR_2->notify)
  VAR_2->notify(VAR_3->rdma_info.qedr_dev, VAR_0);
 FUNC_1(&VAR_1);
}
