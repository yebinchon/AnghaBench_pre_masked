
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvme_fc_fcp_op {int fcp_req; TYPE_4__* queue; int state; } ;
struct nvme_fc_ctrl {int flags; TYPE_3__* rport; TYPE_2__* lport; int lock; int iocnt; } ;
struct TYPE_8__ {int lldd_handle; } ;
struct TYPE_7__ {int remoteport; } ;
struct TYPE_6__ {int localport; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* fcp_abort ) (int *,int *,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct nvme_fc_ctrl *VAR_4, struct nvme_fc_fcp_op *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4->lock, VAR_6);
 VAR_7 = FUNC_1(&VAR_5->state, VAR_2);
 if (VAR_7 != VAR_3)
  FUNC_0(&VAR_5->state, VAR_7);
 else if (VAR_4->flags & VAR_1)
  VAR_4->iocnt++;
 FUNC_3(&VAR_4->lock, VAR_6);

 if (VAR_7 != VAR_3)
  return -VAR_0;

 VAR_4->lport->ops->fcp_abort(&VAR_4->lport->localport,
     &VAR_4->rport->remoteport,
     VAR_5->queue->lldd_handle,
     &VAR_5->fcp_req);

 return 0;
}
