
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transfer_len; int cmd; } ;
struct nvmet_rdma_rsp {int flags; TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nvmet_rdma_rsp *VAR_1)
{
 return FUNC_0(VAR_1->req.cmd) &&
  VAR_1->req.transfer_len &&
  !(VAR_1->flags & VAR_0);
}
