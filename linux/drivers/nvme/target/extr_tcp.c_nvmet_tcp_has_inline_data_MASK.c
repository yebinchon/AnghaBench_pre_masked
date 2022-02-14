
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; } ;
struct nvmet_tcp_cmd {int rbytes_done; scalar_t__ pdu_len; TYPE_1__ req; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nvmet_tcp_cmd *VAR_0)
{
 return FUNC_0(VAR_0->req.cmd) && VAR_0->pdu_len &&
  !VAR_0->rbytes_done;
}
