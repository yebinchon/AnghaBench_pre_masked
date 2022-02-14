
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_fc_queue {int * lldd_handle; } ;
struct nvme_fc_ctrl {TYPE_2__* lport; } ;
struct TYPE_4__ {int localport; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* delete_queue ) (int *,unsigned int,int *) ;} ;


 int FUNC_0 (int *,unsigned int,int *) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_ctrl *VAR_0,
 struct nvme_fc_queue *VAR_1, unsigned int VAR_2)
{
 if (VAR_0->lport->ops->delete_queue)
  VAR_0->lport->ops->delete_queue(&VAR_0->lport->localport, VAR_2,
    VAR_1->lldd_handle);
 VAR_1->lldd_handle = ((void*)0);
}
