
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cqe; scalar_t__ transfer_len; int cmd; } ;
struct nvmet_rdma_rsp {int flags; TYPE_2__ req; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nvmet_rdma_rsp *VAR_1)
{
 return !FUNC_0(VAR_1->req.cmd) &&
  VAR_1->req.transfer_len &&
  !VAR_1->req.cqe->status &&
  !(VAR_1->flags & VAR_0);
}
