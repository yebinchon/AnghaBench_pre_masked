
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ transfer_len; TYPE_1__* cqe; int cmd; } ;
struct nvmet_tcp_cmd {TYPE_2__ req; } ;
struct TYPE_3__ {int status; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nvmet_tcp_cmd *VAR_0)
{
 return !FUNC_0(VAR_0->req.cmd) &&
  VAR_0->req.transfer_len > 0 &&
  !VAR_0->req.cqe->status;
}
